typedef unsigned char UCHAR;

int tek_checkformat(int siz, UCHAR *p); /* 展開後のサイズを返す */
	/* -1:非osacmp */
	/* -2:osacmpだが対応できない */

int tek_decode(int siz, UCHAR *p, UCHAR *q); /* 成功したら0 */
	/* 正の値はフォーマットの異常・未対応、負の値はメモリ不足 */

static unsigned int tek_getnum_s7s(UCHAR **pp);
static unsigned int tek_getnum_s7(UCHAR **pp);
int tek_lzrestore_stk2(int srcsiz, UCHAR *src, int outsiz, UCHAR *outbuf);

int tek_checkformat(int siz, UCHAR *p)
{
	static UCHAR header[] = "\xff\xff\xff\x01\x00\x00\x00" "OSASKCMP";
	int i;
	if (siz < 17)
		return -1;
	for (i = 0; i < 15; i++) {
		if (p[i + 1] != header[i])
			return -1;
	}
	if (p[0] != 0x85)
		return -2;
	p += 16;
	return tek_getnum_s7s(&p);
}

int tek_decode(int siz, UCHAR *p, UCHAR *q)
{
	UCHAR *p1 = p + siz;
	int dsiz, hed, bsiz, st = 0;
	p += 16;
	if ((dsiz = tek_getnum_s7s(&p)) > 0) {
		hed = tek_getnum_s7s(&p);
		bsiz = 1 << (((hed >> 1) & 0x0f) + 8);
		if (dsiz > bsiz || (hed & 0x21) != 0x01)
			return 1;
		if (hed & 0x40)
			tek_getnum_s7s(&p); /* オプション情報へのポインタを読み飛ばす */
		st = tek_lzrestore_stk2(p1 - p, p, dsiz, q);
	}
	return st;
}

static unsigned int tek_getnum_s7s(UCHAR **pp)
/* これは必ずbig-endian */
/* 下駄がないので中身をいじりやすい */
{
	unsigned int s = 0;
	UCHAR *p = *pp;
	do {
		s = s << 7 | *p++;
	} while ((s & 1) == 0);
	s >>= 1;
	*pp = p;
	return s;
}

static unsigned int tek_getnum_s7(UCHAR **pp)
/* これは必ずbig-endian */
{
	unsigned int s = 0, b = 0, a = 1;
	UCHAR *p = *pp;
	for (;;) {
		s = s << 7 | *p++;
		if (s & 1)
			break;
		a <<= 7;
		b += a;
	}
	s >>= 1;
	*pp = p;
	return s + b;
}

int tek_lzrestore_stk2(int srcsiz, UCHAR *src, int outsiz, UCHAR *q)
{
	int cp, ds, repdis[4], i, j;
	UCHAR *q1 = q + outsiz, *s7ptr = src, *q0 = q, bylz, cbylz;
	for (j = 0; j < 4; j++)
		repdis[j] = -1 - j;
	bylz = cbylz = 0;
	if (outsiz) {
		if (tek_getnum_s7s(&s7ptr))
			return 1;
		do {
			/* byフェーズ */
			j = 0;
			do {
				j++;
				if (j >= 17) {
					j += tek_getnum_s7s(&s7ptr);
					break;
				}
				if (cbylz == 0) {
					cbylz = 8;
					bylz = *s7ptr++;
				}
				cbylz--;
				i = bylz & 1;
				bylz >>= 1;
			} while (i == 0);
			do {
				*q++ = *s7ptr++;
			} while (--j);
			if (q >= q1)
				break;

			/* lzフェーズ */
			j = 0;
			do {
				j++;
				if (j >= 17) {
					j += tek_getnum_s7s(&s7ptr);
					break;
				}
				if (cbylz == 0) {
					cbylz = 8;
					bylz = *s7ptr++;
				}
				cbylz--;
				i = bylz & 1;
				bylz >>= 1;
			} while (i == 0);
			do {
				i = *s7ptr++;
				cp = i >> 4;
				i &= 0x0f;
				if ((i & 1) == 0)
					i |= (tek_getnum_s7(&s7ptr) + 1) << 4;
				i >>= 1;
				ds = ~(i - 6);
				if (i < 4)
					ds = repdis[i];
				if (i == 4)
					ds = repdis[0] - tek_getnum_s7(&s7ptr) - 1;
				if (i == 5)
					ds = repdis[0] + tek_getnum_s7(&s7ptr) + 1;
				if (cp == 0)
					cp = tek_getnum_s7(&s7ptr) + 16;
				cp++;
				if (i > 0) {
					if (i > 1) {
						if (i > 2)
							repdis[3] = repdis[2];
						repdis[2] = repdis[1];
					}
					repdis[1] = repdis[0];
					repdis[0] = ds;
				}
				if (q + ds < q0)
					goto err;
				if (q + cp > q1)
					cp = q1 - q;
				do {
					*q = *(q + ds);
					q++;
				} while (--cp);
			} while (--j);
		} while (q < q1);
	}
	return 0;
err:
	return 1;
}
