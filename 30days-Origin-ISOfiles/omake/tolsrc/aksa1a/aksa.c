#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char UCHAR;

int aksa(UCHAR *p, UCHAR *p1, UCHAR *s, int eip, int dd);

int main(int argc, UCHAR **argv)
{
	FILE *fp;
	UCHAR *fbuf0, *sbuf, *fbuf1, *p;
	int i, ofs, eip, dd, lin;
	sbuf = malloc(256);
	fbuf0 = malloc(8 * 1024 * 1024);
	if (argc != 6) {
		printf("usage>aksa binfile ofs0 eip0 dd lines\n");
		return 1;
	}
	fp = fopen(argv[1], "rb");
	if (fp == NULL) {
		printf("binfile open error!\n");
		return 2;
	}
	i = fread(fbuf0, 1, 8 * 1024 * 1024, fp);
	if (i >= 8 * 1024 * 1024) {
		printf("binfile too large error!\n");
		return 3;
	}
	fbuf1 = fbuf0 + i; 
	p = argv[3];
	if (p[0] == '.' && (p[1] == '+' || p[1] == '-'))
		p += 2;
	ofs = strtol(argv[2], NULL, 0);
	eip = strtol(p, NULL, 0);
	dd  = strtol(argv[4], NULL, 0);
	lin = strtol(argv[5], NULL, 0);
	if (argv[3][0] == '.') {
		if (argv[3][1] == '+') {
			eip += ofs;
		}
		if (argv[3][1] == '-') {
			eip = ofs - eip;
		}
	}
	p = fbuf0 + ofs;
	if (ofs < 0 || p >= fbuf1) {
		printf("ofs out of range error!\n");
		return 4;
	}
	printf("file-ofs   EIP\n");
	do {
		int j;
		i = aksa(p, fbuf1, sbuf, eip, dd);
		if (i <= 0)
			break;
		printf("%08X %08X ", ofs, eip);
		for (j = 0; j < 6; j++) {
			if (j < i)
				printf("%02X ", p[j]);
			else
				printf("   ");
		}
		printf("%s;\n", sbuf);
		ofs += i;
		eip += i;
		p += i;
	} while (--lin > 0);
	return 0;
}

int aksa_ea(UCHAR *p, UCHAR *s, UCHAR len, UCHAR adrsiz, UCHAR segovr)
{
	static UCHAR *basestr[] = {
		"EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI",
		"BX + SI", "BX + DI",
		"BP + SI", "BP + DI",
		"SI", "DI", "BP", "BX"
	};
	int i;
	UCHAR c = *p & 0xc7, displen, idx, scl = 0, base;
	UCHAR *dp = &p[1];
	if ((c & 0xc0) == 0xc0) {
		/* reg8/16/32 */
		if (len == 1) {
			s[0] = "ACDB"[*p & 0x03];
			s[1] = (c & 0x04) ? 'H' : 'L';
			s[2] = '\0';
			return 1;
		}
		if (len == 4)
			*s++ = 'E';
		s[0] = "ACDBSBSD"[c & 0x07];
		s[1] = "XXXXPPII"[c & 0x07];
		s[2] = '\0';
		return 1;
	}
	*s++ = '(';
	if (len == 1) {
		strcpy(s, "char");
		s += 4;
	}
	if (len == 2) {
		strcpy(s, "short");
		s += 5;
	}
	if (len == 4) {
		strcpy(s, "int");
		s += 3;
	}
	s[0] = ')';
	s[1] = ' ';
	s[2] = '[';
	s += 3;
	displen = c >> 6;
	base = c & 0x07;
	if (adrsiz) {
		if (displen == 2)
			displen = 4;
		if (base == 4) {
			dp++;
			base = p[1] & 0x07;
			idx = (p[1] >> 3) & 0x07;
			scl = '0' | 1 << ((p[1] >> 6) & 0x03);
			if (idx == 4)
				scl = 0;
		}
		if (displen == 0 && base == 5) {
			base = 16;
			displen = 4;
		}

	} else {
		base |= 8;
		if (c == 0x06) {
			base = 16;
			displen = 2;
		}
	}
	if ((s[0] = segovr) == 0)
		s[0] = "DDDDSSDDDDSSDDSDD"[base];
	s[1] = 'S';
	s[2] = ':';
	s += 3;
	c = 0;
	if (base != 16) {
		strcpy(s, basestr[base]);
		do {
			s++;
		} while (*s);
		c = 1;
	}
	if (scl) {
		if (c) {
			s[0] = ' ';
			s[1] = '+';
			s[2] = ' ';
			s += 3;
		}
		s[0] = 'E';
		s[1] = basestr[idx][1];
		s[2] = basestr[idx][2];
		s[3] = ' ';
		s[4] = '*';
		s[5] = ' ';
		s[6] = scl;
		s += 7;
		c = 1;
	}
	if (displen) {
		i = dp[0] | dp[1] << 8 | dp[2] << 16 | dp[3] << 24;
		if (displen == 1)
			i = (signed char) i;
		if (displen == 2)
			i = (signed short) i;
		if (c) {
			s[0] = ' ';
			s[1] = '+';
			s[2] = ' ';
			if (i < 0) {
				s[1] = '-';
				i = - i;
			}
			s += 3;
		}
		sprintf(s, (displen == 1) ? "0x%02X" : "0x%08X", i);
		if (displen == 2)
			sprintf(s, "0x%04X", i & 0xffff); /* &‚·‚é‚Ì‚ÍAc == 0‚Ì‚Æ‚«‚Ì‚½‚ß */
		do {
			s++;
		} while (*s);
	}
	s[0] = ']';
	s[1] = '\0';
	return dp - p + displen;
}

int aksa(UCHAR *p, UCHAR *p1, UCHAR *s, int eip, int dd)
{
	UCHAR bytes[16], tmp[32], dd_flag = dd & 0x01, dlen, *q, adrsiz = dd_flag;
	UCHAR segovr = 0, c, pre = 0, clen, tmp2[32];
	static UCHAR *reg16[] = { "AX", "CX", "DX", "BX", "SP", "BP", "SI", "DI" };
	static UCHAR *reg8[] = { "AL", "CL", "DL", "BL", "AH", "CH", "DH", "BH" };
	static UCHAR *jcc[] = {
		"if (OF != 0 /* JO */) goto",
		"if (OF == 0 /* JNO */) goto",
		"if ((unsigned) < /* JC */) goto",
		"if ((unsigned) >= /* JNC */) goto",
		"if (== /* JZ */) goto",
		"if (!= /* JNZ */) goto",
		"if ((unsigned) <= /* JBE */) goto",
		"if ((unsigned) > /* JA */) goto",
		"if (SF != 0 /* JS */) goto",
		"if (SF == 0 /* JNS */) goto",
		"if (PF != 0 /* JP */) goto",
		"if (FP == 0 /* JNP */) goto",
		"if ((signed) < /* JL */) goto",
		"if ((signed) >= /* JGE */) goto",
		"if ((signed) <= /* JLE */) goto",
		"if ((signed) > /* JG */) goto"
	};
	static UCHAR *group2[] = {
		"ROL(%s, %s)", "ROR(%s, %s)", "RCL(%s, %s)", "RCR(%s, %s)",
		"%s <<= %s", "(unsigned) %s >>= %s", "", "(signed) %s >>= %s"
	};
	int i, j;
skip_pre:
	for (i = 0; i < 16; i++) {
		bytes[i] = 0x00;
		if (&p[i] < p1)
			bytes[i] = p[i];
	}
	if (p >= p1)
		return 0;
	dlen = dd_flag ? 4 : 2;
	if (0xa0 <= bytes[0] && bytes[0] <= 0xa3) {
		bytes[5] = bytes[4];
		bytes[4] = bytes[3];
		bytes[3] = bytes[2];
		bytes[2] = bytes[1];
		pre--;
		bytes[0] = bytes[0] ^ 0x2a;
		bytes[1] = 0x06 ^ dd_flag;
	}
	j = (bytes[1] >> 3) & 0x07;
	if (bytes[0] < 0x40) {
		static UCHAR *group1[] = { "+", "|", "ADC", "SBB", "&", "-", "^", "CMP" };
		i = (bytes[0] >> 3) & 7;
		if ((bytes[0] & 0x07) == 0x00) {
			clen = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 1;
			strcpy(tmp2, reg8[j]);
op_group1:
			if (group1[i][1] == '\0')
				sprintf(s, "%s %s= %s", tmp, group1[i], tmp2);
			else
				sprintf(s, "%s(%s, %s)", group1[i], tmp, tmp2);
			goto fin;
		}
		if ((bytes[0] & 0x07) == 0x01) {
			clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
			q = tmp2;
			if (dd_flag)
				*q++ = 'E';
			strcpy(q, reg16[j]);
			goto op_group1;
		}
		if ((bytes[0] & 0x07) == 0x02) {
			strcpy(tmp, reg8[j]);
			clen = aksa_ea(&bytes[1], tmp2, 1, adrsiz, segovr) + 1;
			goto op_group1;
		}
		if ((bytes[0] & 0x07) == 0x03) {
			q = tmp;
			if (dd_flag)
				*q++ = 'E';
			strcpy(q, reg16[j]);
			clen = aksa_ea(&bytes[1], tmp2, dlen, adrsiz, segovr) + 1;
			goto op_group1;
		}
		if ((bytes[0] & 0x07) == 0x04) {
			tmp[0] = 'A';
			tmp[1] = 'L';
			tmp[2] = '\0';
			clen = 2;
			q = &bytes[1];
op_group1_imm_b:
			sprintf(tmp2, "0x%02X", *q);
			goto op_group1;
		}
		if ((bytes[0] & 0x07) == 0x05) {
			q = tmp;
			if (dd_flag)
				*q++ = 'E';
			q[0] = 'A';
			q[1] = 'X';
			q[2] = '\0';
			clen = dlen + 1;
			q = &bytes[1];
op_group1_imm_w:
			sprintf(tmp2, "0x%04X", q[0] | q[1] << 8);
			if (dd_flag)
				sprintf(tmp2, "0x%08X", q[0] | q[1] << 8 | q[2] << 16 | q[3] << 24);
			goto op_group1;
		}
		clen = 1;
		c = "ECSDFG"[(*p >> 3) & 0x03];
		if (*p < 0x20) {
			if ((*p & 0x07) == 0x06) {
				strcpy(s, "PUSH(SS)");
				s[5] = c;
				goto fin;
			}
			if (*p != 0x0f) {
				strcpy(s, "POP(SS)");
				s[4] = c;
				goto fin;
			}
			/* 0x0f */
			if (0x80 <= bytes[1] && bytes[1] <= 0x8f) {
				i = bytes[2] | bytes[3] << 8;
				clen = 4;
				sprintf(s, "%s 0x%04X", jcc[bytes[1] & 0x0f], (eip + 4 + i) & 0xffff);
				if (dd_flag) {
					clen = 6;
					i |= bytes[4] << 16 | bytes[5] << 24;
					sprintf(s, "%s 0x%08X", jcc[bytes[1] & 0x0f], eip + 4 + i);
				}
				goto fin;
			}

			printf("0x0F 0x%02X - \n", bytes[1]);
			exit(1);
		}
		if ((*p & 0x07) == 0x06) {
			segovr = c;
op_pre:
			eip++;
			p++;
			pre++;
			goto skip_pre;
		}
		s[0] = (*p < 0x30) ? 'D' : 'A';
		s[1] = 'A';
		s[2] = (*p & 0x08) ? 'S' : 'A';
		s[3] = '\0';
		goto fin;
	}
	if (bytes[0] <= 0x47) { /* 40-47 */
		q = "%s%s++";
op1reg16:
		sprintf(s, q, dd_flag ? "E" : "", reg16[bytes[0] & 7]);
		clen = 1;
		goto fin;
	}
	if (bytes[0] <= 0x4f) { /* 48-4f */
		q = "%s%s--";
		goto op1reg16;
	}
	if (bytes[0] <= 0x57) { /* 50-57 */
		q = "PUSH(%s%s)";
		goto op1reg16;

	}
	if (bytes[0] <= 0x5f) { /* 58-5f */
		q = "POP(%s%s)";
		goto op1reg16;
	}
	if (bytes[0] == 0x60) {
		strcpy(s, dd_flag ? "PUSHAD()" : "PUSHAW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0x61) {
		strcpy(s, dd_flag ? "POPAD()" : "POPAW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0x64) {
		segovr = 'F';
		goto op_pre;
	}
	if (bytes[0] == 0x65) {
		segovr = 'G';
		goto op_pre;
	}
	if (bytes[0] == 0x66) {
		dd_flag ^= 0x01;
		goto op_pre;
	}
	if (bytes[0] == 0x66) {
		adrsiz ^= 0x01;
		goto op_pre;
	}
	if (bytes[0] == 0x68) {
		i = bytes[1] | bytes[2] << 8;
		sprintf(s, "PUSH(0x%04X)", i);
		clen = 3;
		if (dd_flag) {
			sprintf(s, "PUSH(0x%08X)", i | bytes[3] << 16 | bytes[4] << 24);
			clen = 5;
		}
		goto fin;
	}
	if (bytes[0] == 0x6a) {
		clen = 2;
		i = (signed char) bytes[1];
		sprintf(s, "PUSH(0x%02X)", i);
		if (i < 0)
			sprintf(s, "PUSH(- 0x%02X)", - i);
		goto fin;
	}
	if (0x70 <= bytes[0] && bytes[0] <= 0x7f) {
		i = bytes[1];
		if (i & 0x80)
			i -= 0x100;
		sprintf(s, dd_flag ? "%s 0x%08X" : "%s 0x%04X", jcc[bytes[0] & 0x0f], eip + 2 + i);
		clen = 2;
		goto fin;
	}
	if (bytes[0] == 0x80) {
		clen = (i = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 1) + 1;
		q = &bytes[i];
		i = j;
		goto op_group1_imm_b;
	}
	if (bytes[0] == 0x81) {
		clen = (i = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1) + dlen;
		q = &bytes[i];
		i = j;
		goto op_group1_imm_w;
	}
	if (bytes[0] == 0x82) {
		clen = (i = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 1) + 1;
		q = &bytes[i];
		i = j;
		goto op_group1_imm_b;
	}
	if (bytes[0] == 0x83) {
		clen = (i = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr)) + 2;
		sprintf(tmp2, "0x%02X", c = bytes[i + 1]);
		if (c & 0x80)
			sprintf(tmp2, "- 0x%02X", 0x100 - c);
		i = j;
		goto op_group1;
	}
	if (bytes[0] == 0x84) {
		clen = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 1;
		sprintf(s, "TEST(%s, %s)", tmp, reg8[j]);
		goto fin;
	}
	if (bytes[0] == 0x85) {
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		sprintf(s, "TEST(%s%s, %s)", tmp, dd_flag ? "E" : "", reg16[j]);
		goto fin;
	}
	if (bytes[0] == 0x86) {
		clen = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 1;
		sprintf(s, "XCHG(%s, %s)", tmp, reg8[j]);
		goto fin;
	}
	if (bytes[0] == 0x87) {
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		sprintf(s, "XCHG(%s%s, %s)", tmp, dd_flag ? "E" : "", reg16[j]);
		goto fin;
	}
	if (bytes[0] == 0x88) {
		clen = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 1;
		sprintf(s, "%s = %s", tmp, reg8[j]);
		goto fin;
	}
	if (bytes[0] == 0x89) {
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		sprintf(s, "%s = %s%s", tmp, dd_flag ? "E" : "", reg16[j]);
		goto fin;
	}
	if (bytes[0] == 0x8a) {
		clen = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 1;
		sprintf(s, "%s = %s", reg8[j], tmp);
		goto fin;
	}
	if (bytes[0] == 0x8b) {
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		sprintf(s, "%s%s = %s", dd_flag ? "E" : "", reg16[j], tmp);
		goto fin;
	}
	if (bytes[0] == 0x8c) {
		tmp2[0] = "ECSDFG"[j];
		tmp2[1] = '\0';
		if ((bytes[1] & 0xc0) != 0xc0 || dd_flag == 0)
			clen = aksa_ea(&bytes[1], tmp, 2, adrsiz, segovr) + 1;
		else {
			clen = 2;
			tmp[0] = 'E';
			tmp[1] = reg16[bytes[1] & 0x07][0];
			tmp[2] = reg16[bytes[1] & 0x07][1];
			tmp[3] = '\0';
		}
		sprintf(s, "%s = %sS", tmp, tmp2);
		goto fin;
	}
	if (bytes[0] == 0x8d) {
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		sprintf(s, "LEA(%s%s, %s)", dd_flag ? "E" : "", reg16[j], tmp);
		goto fin;
	}
	if (bytes[0] == 0x8e) {
		clen = aksa_ea(&bytes[1], tmp, 2, adrsiz, segovr) + 1;
		sprintf(s, "SS = %s", tmp);
		s[0] = "ECSDFG"[j];
		goto fin;
	}
	if (bytes[0] == 0x90) {
		strcpy(s, "NOP()");
		clen = 1;
		goto fin;
	}
	if (0x91 <= bytes[0] && bytes[0] <= 0x97) {
		sprintf(s, "XCHG(%sAX, %s%s)", dd_flag ? "E" : "", dd_flag ? "E" : "", reg16[bytes[0] & 0x07]);
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0x98) {
		strcpy(s, dd_flag ? "CWDE()" : "CBW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0x99) {
		strcpy(s, dd_flag ? "CDQ()" : "CWD()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0x9a) {
		clen = 5;
		i = bytes[1] | bytes[2] << 8;
		j = bytes[3] | bytes[4] << 8;
		sprintf(s, "CALLF(0x%04X, 0x%04X)", j, i);
		if (dd_flag) {
			clen = 7;
			sprintf(s, "CALLF(0x%04X, 0x%08X)", bytes[5] | bytes[6] << 8, i | j << 16);
		}
		goto fin;
	}
	if (bytes[0] == 0x9c) {
		strcpy(s, dd_flag ? "PUSHFD()" : "PUSHFW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0x9d) {
		strcpy(s, dd_flag ? "POPFD()" : "POPFW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xa4) {
		strcpy(s, "MOVSB()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xa5) {
		strcpy(s, dd_flag ? "MOVSD()" : "MOVSW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xa6) {
		strcpy(s, "CMPSB()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xa7) {
		strcpy(s, dd_flag ? "CMPSD()" : "CMPSW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xa8) {
		clen = 2;
		sprintf(s, "TEST(AL, 0x%02X)", bytes[1]);
		goto fin;
	}
	if (bytes[0] == 0xa9) {
		clen = 1 + dlen;
		i = bytes[1] | bytes[2] << 8;
		sprintf(s, "TEST(AX, 0x%04X)", i);
		if (dd_flag)
			sprintf(s, "TEST(EAX, 0x%08X)", i | bytes[3] << 16 | bytes[4] << 24);
		goto fin;
	}
	if (bytes[0] == 0xaa) {
		strcpy(s, "STOSB()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xab) {
		strcpy(s, dd_flag ? "STOSD()" : "STOSW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xac) {
		strcpy(s, "LODSB()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xad) {
		strcpy(s, dd_flag ? "LODSD()" : "LODSW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xae) {
		strcpy(s, "SCASB()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xaf) {
		strcpy(s, dd_flag ? "SCASD()" : "SCASW()");
		clen = 1;
		goto fin;
	}
	if (0xb0 <= bytes[0] && bytes[0] <= 0xb7) {
		sprintf(s, "%s = 0x%02X", reg8[bytes[0] & 0x07], bytes[1]);
		clen = 2;
		goto fin;
	}
	if (0xb8 <= bytes[0] && bytes[0] <= 0xbf) {
		if (dd_flag) {
			sprintf(s, "E%s = 0x%08X", reg16[bytes[0] & 0x07],
				bytes[1] | bytes[2] << 8 | bytes[3] << 16 | bytes[4] << 24);
			clen = 5;
			goto fin;
		}
		sprintf(s, "%s = 0x%04X", reg16[bytes[0] & 0x07], bytes[1] | bytes[2] << 8);
		clen = 3;
		goto fin;
	}
	if (bytes[0] == 0xc0) {
		clen = aksa_ea(&bytes[1], tmp, 1, adrsiz, segovr) + 2;
		sprintf(tmp2, "0x%02X", (int) bytes[clen - 1]);
op_group2:
		q = group2[j];
		if (*q) {
			sprintf(s, q, tmp, tmp2);
			goto fin;
		}
	}
	if (bytes[0] == 0xc1) {
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 2;
		sprintf(tmp2, "0x%02X", (int) bytes[clen - 1]);
		goto op_group2;
	}
	if (bytes[0] == 0xc3) {
		strcpy(s, "return");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xcb) {
		strcpy(s, "RETF()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xcc) {
		strcpy(s, "INT(0x03)");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xcd) {
		sprintf(s, "INT(0x%02X)", (int) bytes[1]);
		clen = 2;
		goto fin;
	}
	if (bytes[0] == 0xcf) {
		strcpy(s, dd_flag ? "IRETD()" : "IRETW()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xd0) {
		dlen = 1;
op_group2_1:
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		tmp2[0] = '1';
		tmp2[1] = '\0';
		goto op_group2;
	}
	if (bytes[0] == 0xd1)
		goto op_group2_1;
	if (bytes[0] == 0xd2) {
		dlen = 1;
op_group2_cl:
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		tmp2[0] = 'C';
		tmp2[1] = 'L';
		tmp2[2] = '\0';
		goto op_group2;
	}
	if (bytes[0] == 0xd3)
		goto op_group2_cl;
	if (bytes[0] == 0xe3) {
		i = bytes[1];
		if (i & 0x80)
			i -= 0x100;
		sprintf(s, dd_flag ? "if (ECX == 0 /* JECXZ */) goto 0x%08X" : "if (CX == 0 /* JCXZ */) goto 0x%04X", eip + 2 + i);
		clen = 2;
		goto fin;
	}
	if (bytes[0] == 0xe8) {
		if (dd_flag) {
			sprintf(s, "CALL(0x%08X)", eip + 5 + (bytes[1] | bytes[2] << 8 | bytes[3] << 16 | bytes[4] << 24));
			clen = 5;
			goto fin;
		}
		sprintf(s, "CALL(0x%04X)", (eip + 3 + (bytes[1] | bytes[2] << 8)) & 0xffff);
		clen = 3;
		goto fin;
	}
	if (bytes[0] == 0xe9) {
		if (dd_flag) {
			sprintf(s, "JMP(0x%08X)", eip + 5 + (bytes[1] | bytes[2] << 8 | bytes[3] << 16 | bytes[4] << 24));
			clen = 5;
			goto fin;
		}
		sprintf(s, "JMP(0x%04X)", (eip + 3 + (bytes[1] | bytes[2] << 8)) & 0xffff);
		clen = 3;
		goto fin;
	}
	if (bytes[0] == 0xeb) {
		i = bytes[1];
		if (i & 0x80)
			i -= 0x100;
		sprintf(s, dd_flag ? "goto 0x%08X" : "goto 0x%04X", eip + 2 + i);
		clen = 2;
		goto fin;
	}
	if (bytes[0] == 0xec) {
		strcpy(s, "IN(AL, DX)");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xed) {
		strcpy(s, dd_flag ? "IN(EAX, DX)" : "IN(AX, DX)");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xee) {
		strcpy(s, "OUT(DX, AL)");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xef) {
		strcpy(s, dd_flag ? "OUT(DX, EAX)" : "OUT(DX, AX)");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xf2) {
		strcpy(s, "REPNE()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xf3) {
		strcpy(s, "REPE()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xf7) {
		static UCHAR *group3[] = { "NOT", "NEG", "MUL", "IMUL", "DIV", "IDIV" };
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		if (j == 0) {
			j = clen;
			clen += dlen;
			if (dlen == 1)
				sprintf(s, "TEST(%s, 0x%02X)", tmp, bytes[j]);
			if (dlen == 2)
				sprintf(s, "TEST(%s, 0x%04X)", tmp, bytes[j] | bytes[j + 1] << 8);
			if (dlen == 4)
				sprintf(s, "TEST(%s, 0x%08X)", tmp, bytes[j] | bytes[j + 1] << 8 | bytes[j + 2] << 16 | bytes[j + 3] << 24);
			goto fin;
		}
		if (j >= 2) {
			sprintf(s, "%s(%s)", group3[j - 2], tmp);
			goto fin;
		}
	}
	if (bytes[0] == 0xf8) {
		strcpy(s, "CLC()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xf9) {
		strcpy(s, "STC()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xfa) {
		strcpy(s, "CLI()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xfb) {
		strcpy(s, "STI()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xfc) {
		strcpy(s, "CLD()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xfd) {
		strcpy(s, "STD()");
		clen = 1;
		goto fin;
	}
	if (bytes[0] == 0xff) {
		static UCHAR *group5[] = {
			"%s++", "%s--", "CALL(%s)", "CALLF(%s)", "JMP(%s)", "JMPF(%s)", "PUSH(%s)"
		};
		clen = aksa_ea(&bytes[1], tmp, dlen, adrsiz, segovr) + 1;
		if (j <= 6) {
			sprintf(s, group5[j], tmp);
			goto fin;
		}
	}
	strcpy(s, "mikan()");
	clen = 1;
fin:
	clen += pre;
	if (p + clen > p1)
		clen = 0;
	return clen;
}
