/* "edimg.c":ディスクイメージエディタ */
/*	copyright(C) 2004 川合秀実, I.Tak. (KL-01) */

#include <stdio.h>
#include <stdlib.h>

/* x86以外で動かすことは全く考えていない。endian依存部がたくさんある。
	依存をなくすことはそう難しくないが、依存をなくせばその分サイズが増えるか
	条件コンパイルが多数必要になり、非x86上でこのedimgが必要になる状況の
	少なさを勘案すると、endian依存をなくすことはむしろ改悪であると考えた。 */

#define SAR_MODE_WIN32		1
/* Linuxなどでは↑をコメントアウトする */

//#define SAR_MODE_POSIX	1
/* Windowsなどでは↑をコメントアウトする */

typedef unsigned char UCHAR;

#define SIZ_IMGBUF		8 * 1024 * 1024 + 1024
#define SIZ_FILEBUF		2 * 1024 * 1024 + 1024
#define SIZ_SCRIPT		64 * 1024

UCHAR *filebuf0;
UCHAR *imgbuf0;
unsigned int len_filebuf, len_imgbuf = 0, len_sec, len_clu, limit_fat, alloc0;
unsigned short *fat;
UCHAR *dir0, *BPB, *KHBIOS, *fat0, *fat1, *clu0002;
UCHAR flag = 0;
	/* bit0:FAT16, bit1:FAT12, bit2:SF16 */
	/* bit4:bininモード */
const UCHAR *_path = "";
static int bias = 0;

void errend(int i);
char cmdmatch(const char *script, const char *cmd);
char optmatch(const char *script, const char *opt);
const UCHAR *cmd_copy(const char *cmd);
const UCHAR *cmd_ovrcopy(const char *cmd);
const UCHAR *cmd_create(const char *cmd);
const UCHAR *cmd_ovrcreate(const char *cmd);
const UCHAR *cmd_delete(const char *cmd);
const UCHAR *cmd_setattr(const char *cmd);
const UCHAR *cmd_wbinimg(const char *cmd);
const UCHAR *cmd_release(const char *cmd);
const UCHAR *cmd_writedata(const char *cmd);
const UCHAR *cmd_list(const char *cmd);
const UCHAR *cmd_copyall(const char *cmd);
const UCHAR *cmd_exe2bin(const char *cmd);
const UCHAR *opt_imgin(const char *cmd);
const UCHAR *opt_vsiz(const char *cmd);
const UCHAR *opt_imgout(const char *cmd);
const UCHAR *opt_binin(const char *cmd);
const UCHAR *opt_binout(const char *cmd);
const UCHAR *opt_bpath(const char *cmd);
const UCHAR *opt_bias(const char *cmd);
void readfile(const UCHAR *path, int flags);
void writefile(const UCHAR *path, int alloc0, int asiz, int flags);
void ovrwritefile(const UCHAR *path, int alloc0, int asiz, int flags);
void deletefile(const UCHAR *path);
void setattrfile(const UCHAR *path, UCHAR attr);
void exe2bin(const int seg0);
//	void readbin(int bytes, int offset_img, int offset_file);
//	void writebin(int bytes, int offset_img, int offset_file);
const UCHAR *dir_search(const UCHAR *name, UCHAR attr_mask, UCHAR attr_comp);
UCHAR *test_BPB(UCHAR *p);
void bpbfix_sub();
const UCHAR *test_KHBIOS(const UCHAR *p);
void decode_l2d3(int k, const UCHAR *src, UCHAR *dest);
void decode_tek0(int k, const UCHAR *src, UCHAR *dest);

struct sar_attrtime {
	int attr, permission;
	int subsec;
	UCHAR sec, min, hour, day, mon, _dummy[3];
	unsigned int year, year_h;
};
void getattrtime(struct sar_attrtime *s, const UCHAR *path);
void setattrtime(struct sar_attrtime *s, const UCHAR *path, const int flags);
void sar_shifttime(struct sar_attrtime *at, int min, void *opt);

int main(int argc, UCHAR **argv)
{
	UCHAR *script0 = malloc(SIZ_SCRIPT);
//	fat_flags = malloc(65536);
	fat = malloc(65536 * 2);
	filebuf0 = malloc(SIZ_FILEBUF);
	imgbuf0 = malloc(SIZ_IMGBUF);
	UCHAR *p, *q, *r, *script1;
	int i;
	FILE *fp;
	if (imgbuf0 == NULL)
		errend(1); /* out of memory */

	/* スクリプト準備 */
	q = script0;
	while ((p = *++argv) != NULL) {
		if (*p != '@') {
			r = ++q;
			while ((*q++ = *p++) != '\0') {
				if (q - script0 >= SIZ_SCRIPT - 4)
					errend(2); /* script too long */
			}
			if (q - r > 255 + 1)
				errend(3); /* script too long */
			*(r - 1) = (q - r) - 1;
			continue;
		}
		p++;
		fp = fopen(p, "rb");
		if (fp == NULL)
			errend(4); /* script file open error */
		i = fread(filebuf0, 1, SIZ_FILEBUF, fp);
		if (i >= SIZ_FILEBUF)
			errend(5); /* script file open error */
		script1 = filebuf0 + i;
		p = filebuf0;
		for (;;) {
			while (p < script1 && *p <= ' ')
				p++;
			if (p >= script1)
				break;
			r = ++q;
			while (p < script1 && *p > ' ') {
				if (q - script0 >= SIZ_SCRIPT - 4)
					errend(6); /* script too long */
				*q++ = *p++;
			}
			if (q - r > 255)
				errend(7); /* script too long */
			*(r - 1) = q - r;
			*q++ = '\0';
		}
	}
	*q++ = '\0';
	script1 = q;

	/* スクリプト解釈 */
	p = script0;
	for (;;) {
		if (*p == '\0')
			break;
		if (cmdmatch(p, "copy")) {
			p = (UCHAR *) cmd_copy(p);
			continue;
		}
		if (cmdmatch(p, "ovrcopy")) {
			p = (UCHAR *) cmd_ovrcopy(p);
			continue;
		}
		if (cmdmatch(p, "create")) {
			p = (UCHAR *) cmd_create(p);
			continue;
		}
		if (cmdmatch(p, "ovrcreate")) {
			p = (UCHAR *) cmd_ovrcreate(p);
			continue;
		}
		if (cmdmatch(p, "delete")) {
			p = (UCHAR *) cmd_delete(p);
			continue;
		}
		if (cmdmatch(p, "setattr")) {
			p = (UCHAR *) cmd_setattr(p);
			continue;
		}
		if (cmdmatch(p, "wbinimg")) {
			p = (UCHAR *) cmd_wbinimg(p);
			continue;
		}
		if (cmdmatch(p, "release")) {
			p = (UCHAR *) cmd_release(p);
			continue;
		}
		if (cmdmatch(p, "writedata")) {
			p = (UCHAR *) cmd_writedata(p);
			continue;
		}
		if (cmdmatch(p, "list")) {
			p = (UCHAR *) cmd_list(p);
			continue;
		}
		if (cmdmatch(p, "copyall")) {
			p = (UCHAR *) cmd_copyall(p);
			continue;
		}
		if (cmdmatch(p, "exe2bin")) {
			p = (UCHAR *) cmd_exe2bin(p);
			continue;
		}
		if (cmdmatch(p, "opt")) {
			p += *p + 2;
			continue;
		}
		if (optmatch(p, "imgin")) {
			p = (UCHAR *) opt_imgin(p);
			continue;
		}
		if (optmatch(p, "vsiz")) {
			p = (UCHAR *) opt_vsiz(p);
			continue;
		}
		if (optmatch(p, "imgout")) {
			p = (UCHAR *) opt_imgout(p);
			continue;
		}
		if (optmatch(p, "binin")) {
			p = (UCHAR *) opt_binin(p);
			continue;
		}
		if (optmatch(p, "binout")) {
			p = (UCHAR *) opt_binout(p);
			continue;
		}
		if (optmatch(p, "_path")) {
			p = (UCHAR *) opt_bpath(p);
			continue;
		}
		if (optmatch(p, "bias")) {
			p = (UCHAR *) opt_bias(p);
			continue;
		}
		if (cmdmatch(p, "/*")) {
			i = 1;
			do {
				p += *p + 2;
				if (*p == '\0')
					errend(9); /* comment nesting error */
				if (cmdmatch(p, "/*"))
					i++;
				if (cmdmatch(p, "*/"))
					i--;
			} while (i > 0);
			p += *p + 2;
			continue;
		}
		fputs("script syntax error. : ", stderr);
		fputs(p + 1, stderr);
		errend(8); /* script syntax error */
	}
	return 0;
}

void errend(int i)
{
	static const UCHAR *msg[] = {
		"out of memory.\n",
		"script too long.\n",
		"script too long.\n",
		"script file open error.\n",
		"script file open error.\n",
		"script too long.\n",
		"script too long.\n",
		"\n",
		"comment nesting error.\n",
		"copy command error.\n",
		"ovrcopy command error.\n",
		"\n",
		"\n",
		"\n",
		"\n",
		"\n",
		"opt-imgin format error.\n",
		"disk-image full.\n",
		"create command error.\n",
		"ovrcreate command error.\n",
		"delete command error.\n",
		"setattr command error.\n",
		"opt-vsiz error.\n", /* 23 */
		"\n",
		"wbinimg command error.\n",
		"release command error.\n",
		"bin-file too large.\n",
		"\n",
		"\n",
		"writedata command error.\n", /* 30 */
		"list command error.\n",
		"not SF16 error.\n",
		"efat error.\n",
		"nofrag error.\n",
		"copyall command error.\n",
		"exe2bin command error.\n",
		"imgout BPB data error.\n"
	};
	fputs(msg[i - 1], stderr);
	exit(i);
}

char cmdmatch(const char *script, const char *cmd)
{
	script++;
	for (;;) {
		if (*cmd != *script)
			return 0;
		if (*cmd == '\0')
			return 1;
		cmd++;
		script++;
	}
}

char optmatch(const char *script, const char *opt)
{
	script++;
	for (;;) {
		if (*opt == '\0') {
			if (*script == ':')
				return 1;
			break;
		}
		if (*opt != *script)
			break;
		opt++;
		script++;
	}
	return 0;
}

const UCHAR *pathfix(const UCHAR *path, char flg)
{
	static UCHAR pathbuf[1024], pathbuf2[1024];
	static const UCHAR *defname;
	UCHAR *p;
	const UCHAR *q, *r;

	if (path[0] == '_' && path[1] == ':') {
		p = pathbuf2;
		r = _path;
		while ((*p = *r) != '\0') {
			p++;
			r++;
			if ((unsigned int) (p - pathbuf2) >= (sizeof pathbuf) - 1)
				goto toolong;
		}
		r = path + 2;
		while ((*p = *r) != '\0') {
			p++;
			r++;
			if ((unsigned int) (p - pathbuf2) >= (sizeof pathbuf) - 1)
				goto toolong;
		}
		path = pathbuf2;
	}
	if (flg == 1) {
		p = (UCHAR *) path;
		while (*p != '\0')
			p++;
		if (p - path >= 1) {
			if (p[-1] == '/')
				goto fix;
			if (p[-1] == '\\')
				goto fix;
			if (p[-1] == ':') {
	fix:
				if ((unsigned int) (p - path) >= sizeof pathbuf) {
toolong:
					fputs("too long path. : ", stderr);
					fputs(path, stderr);
					errend(12);
				}
				p = pathbuf;
				do {
					*p++ = *path++;
				} while (*path != '\0');
				path = defname;
				while (*path != '\0') {
					if ((unsigned int) (p - pathbuf) >= (sizeof pathbuf) - 1) {
						fputs("too long path. : ", stderr);
						fputs(pathbuf, stderr);
						errend(12);
					}
					*p++ = *path++;
				}
				*p = '\0';
				path = pathbuf;
			}
		}
	}
	if (flg == 0) {
		q = path;
		r = path;
		if (*q != '\0') {
			do {
				if (*q == ':')
					r = q + 1;
				if (*q == '/')
					r = q + 1;
				if (*q == '\\')
					r = q + 1;
				q++;
			} while (*q != '\0');
		}
		defname = r;
	}
	return path;
}

unsigned int tek1_getnum_s7s(UCHAR **pp)
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

int tek1_decode1(int siz, UCHAR *p, UCHAR *q);
int tek1_decode2(int siz, UCHAR *p, UCHAR *q);
int tek1_decode5(int siz, UCHAR *p, UCHAR *q);

int autodecomp(int siz0, UCHAR *p0, int siz);

int autodecomp2(int siz0, UCHAR *p0, int siz)
{
	unsigned char *b = p0, *c;
	int s, i;
	if ((*(int *) &b[0x08] == 0x5341534f) && (*(int *) &b[0x0c] == 0x504d434b)) {
		if (*(int *) &b[0x04] == 0x00000001) {
			unsigned int t = *(int *) &b[0x00];
			if (0xffffff81 <= t && t <= 0xffffff82) {
				s = *(int *) &b[0x10];
				if (s + siz - 0x14 <= siz0) {
					c = b + siz0 - siz;
					for (i = siz - 1; i >= 0x10; i--)
						c[i] = b[i];
					c += 0x14;
					if (t == 0xffffff81)
						decode_l2d3(s, c, b);
					if (t == 0xffffff82)
						decode_tek0(s, c, b);
					siz = s;
				}
			} else if (0xffffff83 <= t && t <= 0xffffff89) {
				s = autodecomp(siz0, b, siz);
				if (s >= 0)
					siz = s;
			}
		}
	}
	return siz;
}

const UCHAR *cmd_copy(const char *cmd)
{
	char nocmp = 0;
	cmd += *cmd + 2;
	if (optmatch(cmd, "nocmp")) {
		cmd += *cmd + 2;
		nocmp = 1;
	}
	if (optmatch(cmd, "from") == 0)
		errend(10); /* copy command error */
	readfile(pathfix(cmd + (4 + 2), 0), 0x0f);
	cmd += *cmd + 2;
	if (nocmp)
		len_filebuf = autodecomp2(SIZ_FILEBUF, filebuf0, len_filebuf);
	if (optmatch(cmd, "to") == 0)
		errend(10); /* copy command error */
	writefile(pathfix(cmd + (2 + 2), 1), 2, -1, 0x07);
	return cmd + (*cmd + 2);
}

const UCHAR *cmd_ovrcopy(const char *cmd)
{
	char nocmp = 0;
	cmd += *cmd + 2;
	if (optmatch(cmd, "nocmp")) {
		cmd += *cmd + 2;
		nocmp = 1;
	}
	if (optmatch(cmd, "from") == 0)
		errend(11); /* ovrcopy command error */
	readfile(pathfix(cmd + (4 + 2), 0), 0x0f);
	cmd += *cmd + 2;
	if (nocmp)
		len_filebuf = autodecomp2(SIZ_FILEBUF, filebuf0, len_filebuf);
	if (optmatch(cmd, "to") == 0)
		errend(11); /* ovrcopy command error */
	ovrwritefile(pathfix(cmd + (2 + 2), 1), 2, -1, 0x04); /* 更新日のみ更新 */
	return cmd + (*cmd + 2);
}

int getnum(const UCHAR *p)
{
	int i = 0, base = 10, sign = 1;
	UCHAR c;
	if (*p == '-') {
		p++;
		sign = -1;
	}
	if (*p == '0') {
		p++;
		base = 8;
		c = *p;
		if (c >= 'a')
			c -= 'a' - 'A';
		if (c == 'X') {
			p++;
			base = 16;
		}
		if (c == 'O') {
			p++;
			base = 8;
		}
		if (c == 'B') {
			p++;
			base = 2;
		}
	}
	for (;;) {
		c = *p++;
		if ('0' <= c && c <= '9')
			c -= '0'; 
		else if ('A' <= c && c <= 'F')
			c -= 'A' - 10;
		else if ('a' <= c && c <= 'f')
			c -= 'a' - 10;
		else
			break;
		if (c >= base)
			break;
		i = i * base + c;
	}
	if (c >= 'a')
		c -= 'a' - 'A';
	if (c == 'K')
		i <<= 10;
	if (c == 'M')
		i <<= 20;
	if (c == 'G')
		i <<= 30;
	return i * sign;
}

const UCHAR *cmd_create(const char *cmd)
{
	int i, asiz = -1;
	const UCHAR *p; 
	cmd += *cmd + 2;
	if (optmatch(cmd, "file") == 0)
		errend(19); /* create command error */
	p = cmd + (4 + 2);
	cmd += *cmd + 2;
	if (optmatch(cmd, "size") == 0)
		errend(19); /* create command error */
	len_filebuf = getnum(cmd + (4 + 2));
	for (i = 0; (unsigned int) i < len_filebuf; i++)
		filebuf0[i] = 0x00;
	if (len_filebuf >= SIZ_FILEBUF)
		errend(19); /* create command error */
	cmd += *cmd + 2;
	i = 2;
optloop:
	if (optmatch(cmd, "asiz")) {
		asiz = (getnum(cmd + (4 + 2)) + len_clu - 1) / len_clu;
		cmd += *cmd + 2;
		goto optloop;
	}
	if (optmatch(cmd, "begin")) {
		i = getnum(cmd + (5 + 2));
		cmd += *cmd + 2;
		goto optloop;
	}
	writefile(pathfix(p, 2), i, asiz, 0x00);
	return cmd;
}

const UCHAR *cmd_ovrcreate(const char *cmd)
{
	int i, asiz = -1;
	const UCHAR *p; 
	cmd += *cmd + 2;
	if (optmatch(cmd, "file") == 0)
		errend(20); /* ovrcreate command error */
	p = cmd + (4 + 2);
	cmd += *cmd + 2;
	if (optmatch(cmd, "size") == 0)
		errend(20); /* ovrcreate command error */
	len_filebuf = getnum(cmd + (4 + 2));
	for (i = 0; (unsigned int) i < len_filebuf; i++)
		filebuf0[i] = 0x00;
	if (len_filebuf >= SIZ_FILEBUF)
		errend(20); /* ovrcreate command error */
	cmd += *cmd + 2;
	i = 2;
optloop:
	if (optmatch(cmd, "asiz")) {
		asiz = (getnum(cmd + (4 + 2)) + len_clu - 1) / len_clu;
		cmd += *cmd + 2;
		goto optloop;
	}
	if (optmatch(cmd, "begin")) {
		i = getnum(cmd + (5 + 2));
		cmd += *cmd + 2;
		goto optloop;
	}
	ovrwritefile(pathfix(p, 2), i, asiz, 0x00);
	return cmd;
}

const UCHAR *cmd_delete(const char *cmd)
{
	cmd += *cmd + 2;
	if (optmatch(cmd, "file") == 0)
		errend(21); /* delete command error */
	deletefile(pathfix(cmd + (4 + 2), 2));
	return cmd + (*cmd + 2);
}

const UCHAR *cmd_setattr(const char *cmd)
{
	const UCHAR *p;
	UCHAR attr;
	cmd += *cmd + 2;
	if (optmatch(cmd, "file") == 0)
		errend(22); /* setattr command error */
	p = cmd + (4 + 2);
	cmd += *cmd + 2;
	if (optmatch(cmd, "attr") == 0)
		errend(22); /* setattr command error */
	attr = getnum(cmd + (4 + 2));
	setattrfile(pathfix(p, 2), attr);
	return cmd + (*cmd + 2);
}

const UCHAR *cmd_wbinimg(const char *cmd)
{
	unsigned int len, from, to, i;
	UCHAR *p, *q;
	cmd += *cmd + 2;
	if ((flag & 0x13) == 0) {
err:
		errend(25); /* wbinimg command error */
	}
	if (optmatch(cmd, "src") == 0)
		goto err;
	readfile(pathfix(cmd + (3 + 2), 2), 0);
	cmd += *cmd + 2;
	if (optmatch(cmd, "len") == 0)
		goto err;
	len = getnum(cmd + (3 + 2));
	cmd += *cmd + 2;
	if (optmatch(cmd, "from") == 0)
		goto err;
	from = getnum(cmd + (4 + 2));
	cmd += *cmd + 2;
	if (optmatch(cmd, "to") == 0)
		goto err;
	to = getnum(cmd + (2 + 2));
	p = filebuf0 + from;
	q = BPB + to;
	for (i = 0; i < len; i++)
		q[i] = p[i]; 
	return cmd + (*cmd + 2);
}

const UCHAR *cmd_release(const char *cmd)
{
	unsigned int i, j;
	UCHAR *p;
	if ((flag & 0x03) == 0) {
		errend(26); /* release command error */
	}
optloop:
	cmd += *cmd + 2;
	if (optmatch(cmd, "mini")) {
		while (limit_fat > 2 && fat[limit_fat - 1] == 0)
			limit_fat--;
		len_imgbuf = clu0002 + (limit_fat - 2) * len_clu - imgbuf0;
		goto optloop;
	}
	if (optmatch(cmd, "zerofill")) {
		p = clu0002;
		for (j = 2; j < limit_fat; j++, p += len_clu) {
			if (fat[j] == 0) {
				for (i = 0; i < len_clu; i++)
					p[i] = 0x00;
			}
		}
		goto optloop;
	}
	if (optmatch(cmd, "efat")) {
		if ((flag & 0x04) == 0)
			errend(32);
		fat[0] ^= 0x0007;
		for (i = 2; i < 0xfff6; i++) {
			if (fat[i] == 0xfffe)
				errend(33);
			if (fat[i] == i + 1)
				fat[i] = 0xfffe;
		}
		BPB[0x47] |= 0x10;
		goto optloop;
	}
	if (optmatch(cmd, "nofrag")) {
		/* たぶんefatのあとに実行しても正しく判定できる */
		if ((flag & 0x04) == 0)
			errend(33);
		for (i = 2; i < limit_fat; i++) {
			if (2 <= fat[i] && fat[i] < 0xfff7 && fat[i] != i + 1)
				errend(35);
		}
		BPB[0x47] |= 0x20;
		goto optloop;
	}
	if (optmatch(cmd, "minibpb")) {
		while (limit_fat > 2 && fat[limit_fat - 1] == 0)
			limit_fat--;
		len_imgbuf = clu0002 + (limit_fat - 2) * len_clu - imgbuf0;
		bpbfix_sub();
		goto optloop;
	}
	return cmd;
}

const UCHAR *cmd_writedata(const char *cmd)
{
	unsigned int ofs, data, rep;
	const UCHAR *p;
	UCHAR datasize, tmp;
	if ((flag & 0x13) == 0) {
err:
		errend(30); /* writedata command error */
	}
	cmd += *cmd + 2;
	if (optmatch(cmd, "offset") == 0)
		goto err;
	ofs = getnum(cmd + (6 + 2));
	rep = 1;
	for (;;) {
		cmd += *cmd + 2;
		if (optmatch(cmd, "repeat")) {
			rep *= getnum(cmd + (6 + 2));
			continue;
		}
		datasize = 0;
		if (optmatch(cmd, "byte"))
			datasize = 1;
		if (optmatch(cmd, "word"))
			datasize = 2;
		if (optmatch(cmd, "dwrd"))
			datasize = 4;
		if (datasize == 0)
			break;
		if (rep) {
			do {
				p = cmd + (4 + 2);
				do {
					data = getnum(p);
					while (*p != ',' && *p != '\0')
						p++;
					p++;
					tmp = datasize;
					do {
						BPB[ofs++] = data & 0xff;
						data >>= 8;
					} while (--tmp != 0);
				} while (p[-1] == ',');
			} while (--rep);
		}
		rep = 1;
	}
	return cmd;
}

void setdec(UCHAR *s, unsigned int i, int max)
{
	do {
		*s-- = (i % 10) | '0';
		i /= 10;
	} while (--max > 0 && i != 0);
	return;
}

const UCHAR *cmd_list(const char *cmd)
{
	UCHAR s[68];
	const UCHAR *p = dir0;
	unsigned int i;
	if ((flag & 0x03) == 0)
		errend(31); /* list command error */
	do {
		if (*p == '\0')
			break;
		if (*p != 0xe5 && (p[11] & 0x08) == 0) {
			*(int *) &s[0] = *(int *) &p[0];
			*(int *) &s[4] = *(int *) &p[4];
			*(int *) &s[8] = (*(int *) &p[8]) << 8 | ' ';
			i = 0x20202020;
			*(int *) &s[16] = *(int *) &s[12] = i;
			*(int *) &s[32] = *(int *) &s[28] = i;
			*(int *) &s[40] = *(int *) &s[36] = i;
			*(int *) &s[48] = *(int *) &s[44] = i;
			*(int *) &s[56] = *(int *) &s[52] = i;
			*(int *) &s[64] = 0x000a2020;
			*(int *) &s[24] = *(int *) &s[20] = 0x2d2d2d2d;
			s[19] = '[';
			s[28] = ']';
			if (p[11] & 0x10) {
				*(int *) &s[12] = 0x49443c20;
				*(short *) &s[12] = 0x3e52;
				s[23] = 'd';
			}
			if (p[11] & 0x80)
				s[20] = '?';
			if (p[11] & 0x40)
				s[21] = '?';
			if (p[11] & 0x20)
				s[22] = 'a';
			if (p[11] & 0x04)
				s[25] = 's';
			if (p[11] & 0x02)
				s[26] = 'h';
			if (p[11] & 0x01)
				s[27] = 'r';
			setdec(&s[38], *(int *) &p[28], 9);
			if ((i = *(unsigned short *) &p[24]) != 0) {
				setdec(&s[42], (i >> 9) + 80, 2);
				s[43] = '-';
				setdec(&s[45], ((i >> 5) & 0x0f) + 100, 2);
				s[46] = '-';
				setdec(&s[48], (i & 0x1f) + 100, 2);
				i = *(unsigned short *) &p[22];
				setdec(&s[51], i >> 11, 2);
				s[52] = ':';
				setdec(&s[54], ((i >> 5) & 0x3f) + 100, 2);
				s[55] = ':';
				setdec(&s[57], ((i & 0x1f) << 1) + 100, 2);
			}
			s[60] = '#';
			setdec(&s[65], 100000 + *(unsigned short *) &p[26], 5);
			fputs(s, stdout);
		}
		p += 32;
	} while (p < clu0002);
	return cmd + (*cmd + 2);
}

const UCHAR *cmd_copyall(const char *cmd)
{
	UCHAR s[16], *t;
	const UCHAR *p = dir0;
	unsigned int i;
	if ((flag & 0x03) == 0) {
err:
		errend(35); /* copyall command error */
	}
	cmd += *cmd + 2;
	if (optmatch(cmd, "from") == 0)
		goto err;
	cmd += *cmd + 2;
	if (optmatch(cmd, "to") == 0)
		goto err;
	s[0] = '@';
	s[1] = ':';
	do {
		if (*p == '\0')
			break;
		if (*p != 0xe5 && (p[11] & 0x18) == 0) { /* ディレクトリとボリュームラベルは排除 */
			t = &s[2];
			for (i = 0; i < 8; i++) {
				if (p[i] == ' ')
					break;
				*t++ = p[i];
			}
	//		if (s[2] == 0x05)
	//			s[2] = 0xe5;
			if (p[8] != ' ') {
				*t++ = '.';
				for (i = 0; i < 3; i++) {
					if (p[8 + i] == ' ')
						break;
					*t++ = p[8 + i];
				}
			}
			*t = '\0';
			readfile(pathfix(s, 0), 0x0f);
			writefile(pathfix(cmd + (2 + 2), 1), 2, -1, 0x07);
		}
		p += 32;
	} while (p < clu0002);
	return cmd + (*cmd + 2);
}

const UCHAR *cmd_exe2bin(const char *cmd)
{
	int seg;
	cmd += *cmd + 2;
	if (optmatch(cmd, "seg") == 0)
		errend(36);
	seg = getnum(cmd + (3 + 2));
	exe2bin(seg);
	return cmd + (*cmd + 2);
}

static UCHAR FAT_filename[11];

const UCHAR *dir_search(const UCHAR *name, UCHAR attr_mask, UCHAR attr_comp)
{
	UCHAR c, *p;
	int i;
	if ((flag & 0x03) == 0)
		goto err;
	p = FAT_filename;
	do {
		c = *name++;
		if (c == '\0')
			break;
		if ('a' <= c && c <= 'z')
			c -= 'a' - 'A';
		if (c == '.') {
			while (p < FAT_filename + 8)
				*p++ = ' ';
			continue;
		}
		*p++ = c;
	} while (p < FAT_filename + 11);
	while (p < FAT_filename + 11)
		*p++ = ' ';
	p = dir0;
	do {
		if (*p == '\0')
			break;
		c = 0;
		for (i = 0; i < 11; i++)
			c |= p[i] ^ FAT_filename[i];
		c |= (p[11] & attr_mask) ^ attr_comp;
		if (c == 0)
			return p;
		p += 32;
	} while (p < clu0002);
err:
	return NULL;
}

static struct sar_attrtime fbuf_at;

void readfile(const UCHAR *path, int flags)
/* flags :
	0x01:アトリビュートロード
	0x02:アトリビュートリセット
	0x04:タイムロード
	0x08:タイムリセット
*/
{
	FILE *fp;
	UCHAR *q;
	const UCHAR *p, *r;
	int i, j;
	unsigned int k;
	struct sar_attrtime file_at;
	if (flags & 0x02) {
		fbuf_at.attr &= 0;
		fbuf_at.permission = 0700;
	}
	if (flags & 0x08)
		fbuf_at.subsec |= -1;
	if (path[0] == '@' && path[1] == ':')
		goto image;
	fp = fopen(path, "rb");
	if (fp == NULL) {
err:
		fputs("readfile error. : ", stderr);
		fputs(path, stderr);
		errend(13);
		return; /* 本当はこのreturnはいらない。warningを黙らせるため */
	}
	len_filebuf = fread(filebuf0, 1, SIZ_FILEBUF, fp);
	if (len_filebuf >= SIZ_FILEBUF)
		goto err;
	fclose(fp);
	if (flags & 0x05) {
		getattrtime(&file_at, path);
		if (flags & 0x01) {
			fbuf_at.attr       = file_at.attr;
			fbuf_at.permission = file_at.permission;
		}
		if (flags & 0x04) {
			fbuf_at.subsec = file_at.subsec;
			fbuf_at.sec    = file_at.sec;
			fbuf_at.min    = file_at.min;
			fbuf_at.hour   = file_at.hour;
			fbuf_at.day    = file_at.day;
			fbuf_at.mon    = file_at.mon;
			fbuf_at.year   = file_at.year;
			fbuf_at.year_h = file_at.year_h;
		}
	}
	return;
image:
	r = path + 2;
	if (*r == '\\')
		r++;
	if (*r == '/')
		r++;
	p = dir_search(r, 0xd8, 0x00);
	if (p == NULL)
		goto err;
	len_filebuf = *(unsigned int *) &p[0x1c];
	if (len_filebuf + len_clu > SIZ_FILEBUF)
		goto err;
	i = len_filebuf;
	j = p[0x1a] | p[0x1b] << 8;
	q = filebuf0;
	do {
		if (j < 2)
			goto err;
		if (j >= 0xfff7)
			goto err;
		r = clu0002 + (j - 2) * len_clu;
		if (r + len_clu > imgbuf0 + SIZ_IMGBUF)
			goto err;
		for (k = 0; k < len_clu; k++)
			q[k] = r[k];
		q += len_clu;
		j = fat[j];
		i -= len_clu;
	} while (i > 0);
	if (flags & 0x01) {
		fbuf_at.attr       = (p[0x0b] & 0x07) << 7;
		fbuf_at.permission = 0700;
		if (p[0x0b] & 0x20)
			fbuf_at.attr |= 0x400;
	}
	if (flags & 0x04) {
		i = p[0x18] | p[0x19] << 8;
		fbuf_at.subsec |= -1;
		if (i) {
			fbuf_at.subsec &= 0;
			fbuf_at.year_h &= 0;
			fbuf_at.year    = 1980 + (i >> 9); /* bit9-15 */
			fbuf_at.mon     = (i >> 5) & 0x0f; /* bit5-8 */
			fbuf_at.day     = i & 0x1f; /* bit0-4 */
			i = p[0x16] | p[0x17] << 8;
			fbuf_at.hour    = i >> 11; /* bit11-15 */
			fbuf_at.min     = (i >> 5) & 0x3f; /* bit5-10 */
			fbuf_at.sec     = (i << 1) & 0x3f; /* bit0-4 */
			sar_shifttime(&fbuf_at, - bias, NULL);
		}
	}
	return;
}

int free_cluster(unsigned int i)
{
	while (i < limit_fat) {
		if (fat[i] == 0)
			return i;
		i++;
	}
	errend(18); /* disk-image full */
	return 0;
}

void resizefile(UCHAR *entry, int clusters, int alloc0)
{
	int i = *(unsigned short *) &entry[0x1a], j;
	if (clusters == 0) {
		if (i == 0)
			return;
		*(unsigned short *) &entry[0x1a] = 0;
freeloop:
		do {
			j = fat[i];
			fat[i] = 0;
			i = j;
		} while (j < 0xfff7);
		return;
	}
	if (i == 0) {
		i = alloc0 = free_cluster(alloc0);
		*(unsigned short *) &entry[0x1a] = i;
		fat[alloc0++] = 0xffff;
	}
	for (;;) {
		clusters--;
		j = fat[i];
		if (clusters == 0) {
			if (j >= 0xfff8)
				return;
			fat[i] = 0xffff;
			i = j;
			if (j < 0xfff7)
				goto freeloop;
			return;
		}
		if (j >= 0xfff8) {
			j = alloc0 = free_cluster(alloc0);
			fat[i] = j;
			fat[alloc0++] = 0xffff;
		}
		i = j;
	}
}

UCHAR *dir_create(const UCHAR *name, UCHAR attr_mask, UCHAR attr_comp, UCHAR attr_create)
{
	UCHAR *p;
	int i;
	p = (UCHAR *) dir_search(name, attr_mask, attr_comp);
	if (p)
		return p;
	for (p = dir0; p < clu0002; p += 32) {
		if (*p == 0x00) {
			if (p + 32 < clu0002)
				p[32] = 0x00;
			goto find;
		}
		if (*p == 0xe5)
			goto find;
	}
	errend(18); /* disk-image full */
find:
	for (i = 0; i < 11; i++)
		p[i] = FAT_filename[i];
	p[11] = attr_create;
	for (i = 12; i < 32; i++)
		p[i] = 0x00;
	return p;
}

void writefile(const UCHAR *path, int alloc0, int asiz, int flags)
/* deleteしてからwritefileするとクラスタ位置も確保し直すことになる */
/* flags :
	0x01:アトリビュートストア
	0x02:パーミッションストア
	0x04:タイムストア
*/
{
	FILE *fp;
	UCHAR *q;
	const UCHAR *r;
	int i, j;
	unsigned int k;
	if (path[0] == '@' && path[1] == ':')
		goto image;
	fp = fopen(path, "wb");
	if (fp == NULL) {
err:
		fputs("writefile error. : ", stderr);
		fputs(path, stderr);
		errend(14);
		return;
	}
	if (fwrite(filebuf0, 1, len_filebuf, fp) != len_filebuf)
		goto err;
	fclose(fp);
	if (flags & 0x07)
		setattrtime(&fbuf_at, path, flags);
	return;
image:
	if (asiz == -1)
		asiz = (len_filebuf + len_clu - 1) / len_clu;
	if ((flag & 0x03) == 0)
		errend(18); /* disk-image full */
	r = path + 2;
	if (*r == '\\')
		r++;
	if (*r == '/')
		r++;
	q = dir_create(r, 0xd8, 0x00, 0x00);
	resizefile(q, asiz, alloc0);
	*(unsigned int *) &q[0x1c] = len_filebuf;
	i = len_filebuf;
	j = q[0x1a] | q[0x1b] << 8;
	r = filebuf0;
	if (flags & 0x01) {
		q[0x0b] = (fbuf_at.attr >> 7) & 0x07;
		if (fbuf_at.attr & 0x0400)
			q[0x0b] |= 0x20;
	}
	if (flags & 0x04) {
		struct sar_attrtime file_at = fbuf_at;
		q[0x16] = 0;
		q[0x17] = 0;
		q[0x18] = 0;
		q[0x19] = 0;
		sar_shifttime(&file_at, bias, NULL);
		if (fbuf_at.subsec != -1) {
			k = (file_at.year - 1980) << 9 | file_at.mon << 5 | file_at.day;
			q[0x18] =  k       & 0xff;
			q[0x19] = (k >> 8) & 0xff;
			k = file_at.hour << 11 | file_at.min << 5 | file_at.sec >> 1;
			q[0x16] =  k       & 0xff;
			q[0x17] = (k >> 8) & 0xff;
		}
	}
	do {
		if (j < 2)
			goto err;
		if (j >= 0xfff7)
			goto err;
		q = clu0002 + (j - 2) * len_clu;
		if (q + len_clu > imgbuf0 + SIZ_IMGBUF)
			goto err;
		if ((unsigned int) i >= len_clu) {
			for (k = 0; k < len_clu; k++)
				q[k] = r[k];
			r += len_clu;
		} else {
			for (k = 0; k < (unsigned int) i; k++)
				q[k] = r[k];
			do {
				q[k++] = 0x00;
			} while (k < len_clu);
		}
		j = fat[j];
		i -= len_clu;
	} while (i > 0);
	return;
}

void ovrwritefile(const UCHAR *path, int alloc0, int asiz, int flags)
{
	FILE *fp;
	UCHAR *q;
	const UCHAR *r;
	int i, j;
	unsigned int k;
	if (asiz == -1)
		asiz = (len_filebuf + len_clu - 1) / len_clu;
	if (path[0] == '@' && path[1] == ':')
		goto image;
	fp = fopen(path, "r+b");
	if (fp == NULL)
		fp = fopen(path, "wb");
	if (fp == NULL) {
err:
		fputs("ovrwritefile error. : ", stderr);
		fputs(path, stderr);
		errend(15);
		return;
	}
	if (fwrite(filebuf0, 1, len_filebuf, fp) != len_filebuf)
		goto err;
	fclose(fp);
	if (flags & 0x07)
		setattrtime(&fbuf_at, path, flags);
	return;
image:
	if ((flag & 0x03) == 0)
		errend(18); /* disk-image full */
	r = path + 2;
	if (*r == '\\')
		r++;
	if (*r == '/')
		r++;
	q = dir_create(r, 0xd8, 0x00, 0x00);
	i = *(unsigned int *) &q[0x1c];
	if ((unsigned int) i < len_filebuf) {
		resizefile(q, asiz, alloc0);
		*(unsigned int *) &q[0x1c] = len_filebuf;
	}
	i = len_filebuf;
	j = q[0x1a] | q[0x1b] << 8;
	r = filebuf0;
	if (flags & 0x01) {
		q[0x0b] = (fbuf_at.attr >> 7) & 0x07;
		if (fbuf_at.attr & 0x0400)
			q[0x0b] |= 0x20;
	}
	if (flags & 0x04) {
		struct sar_attrtime file_at = fbuf_at;
		q[0x16] = 0;
		q[0x17] = 0;
		q[0x18] = 0;
		q[0x19] = 0;
		sar_shifttime(&file_at, bias, NULL);
		if (fbuf_at.subsec != -1) {
			k = (file_at.year - 1980) << 9 | file_at.mon << 5 | file_at.day;
			q[0x18] =  k       & 0xff;
			q[0x19] = (k >> 8) & 0xff;
			k = file_at.hour << 11 | file_at.min << 5 | file_at.sec >> 1;
			q[0x16] =  k       & 0xff;
			q[0x17] = (k >> 8) & 0xff;
		}
	}
	do {
		if (j < 2)
			goto err;
		if (j >= 0xfff7)
			goto err;
		q = clu0002 + (j - 2) * len_clu;
		if (q + len_clu > imgbuf0 + SIZ_IMGBUF)
			goto err;
		if ((unsigned int) i >= len_clu) {
			for (k = 0; k < len_clu; k++)
				q[k] = r[k];
			r += len_clu;
		} else {
			for (k = 0; k < (unsigned int) i; k++)
				q[k] = r[k];
		}
		j = fat[j];
		i -= len_clu;
	} while (i > 0);
	return;
}

void deletefile(const UCHAR *path)
{
	UCHAR *p;
	const UCHAR *r;
	if (path[0] == '@' && path[1] == ':')
		goto image;
	if (remove(path)) {
skip:
		fputs("warning: skip delete. : ", stderr);
		fputs(path, stderr);
		fputs("\n", stderr);
	}
	return;
image:
	if ((flag & 0x03) == 0)
		errend(21); /* delete command error */
	r = path + 2;
	if (*r == '\\')
		r++;
	if (*r == '/')
		r++;
	p = (UCHAR *) dir_search(r, 0xd8, 0x00);
	if (p == NULL)
		goto skip;
	resizefile(p, 0, 0);
	*p = 0xe5;
	return;
}

void setattrfile(const UCHAR *path, UCHAR attr)
{
	UCHAR *p;
	const UCHAR *r;
	if (path[0] == '@' && path[1] == ':')
		goto image;
	errend(22); /* setattr command error */
image:
	if ((flag & 0x03) == 0)
		errend(22); /* setattr command error */
	r = path + 2;
	if (*r == '\\')
		r++;
	if (*r == '/')
		r++;
	p = (UCHAR *) dir_search(r, 0xd8, 0x00);
	if (p == NULL)
		errend(22); /* setattr command error */
	p[11] = attr;
	return;
}

void exe2bin(const int seg0)
{
	UCHAR *rtbl;
	int i, j, bin0;
	if (flag != 0x10 || len_imgbuf < 512)
		errend(36);
	rtbl = imgbuf0 + (imgbuf0[0x18] | imgbuf0[0x19] << 8);
	bin0 = imgbuf0[0x08] << 4 | imgbuf0[0x09] << 12;
	if (len_imgbuf <= bin0 || rtbl >= imgbuf0 + bin0)
		errend(36);
	while (rtbl < imgbuf0 + bin0 && (i = (rtbl[0] | rtbl[1] << 8) + (rtbl[2] << 4 | rtbl[3] << 12)) != 0) {
		rtbl += 4;
		j = (imgbuf0[bin0 + i] | imgbuf0[bin0 + i + 1] << 8) + seg0;
		imgbuf0[bin0 + i    ] =  j       & 0xff;
		imgbuf0[bin0 + i + 1] = (j >> 8) & 0xff;
	}
	len_imgbuf -= bin0;
	for (i = 0; i < len_imgbuf; i++)
		imgbuf0[i] = imgbuf0[bin0 + i];
	return;
}

const UCHAR *opt_imgin(const char *cmd)
{
	FILE *fp;
	UCHAR *bpb;
	int i;
	fp = fopen(cmd + (5 + 2), "rb");
	if (fp == NULL) {
err:
		fputs("opt-imgin load error. : ", stderr);
		fputs(cmd + (5 + 2), stderr);
		errend(16);
	}
	len_imgbuf = fread(imgbuf0, 1, SIZ_IMGBUF, fp);
	fclose(fp);
	if (len_imgbuf <= 20)
		goto err;
	if (len_imgbuf >= SIZ_IMGBUF)
		goto err;
	bpb = imgbuf0;
	len_imgbuf = autodecomp2(SIZ_IMGBUF, imgbuf0, len_imgbuf);
	if (len_imgbuf <= 512)
		goto err;
	for (i = len_imgbuf; i < SIZ_IMGBUF; i++)
		imgbuf0[i] = '\0';

retry:
	KHBIOS = (UCHAR *) test_KHBIOS(bpb);
	if (KHBIOS == NULL) {
		if ((*(int *) &bpb[0x8] == 0x54434350) && (*(int *) &bpb[0xc] == 0x30304c4f)) {
			/* PCCTOL00を検出 */
			bpb += 65536;
			goto retry;
		}
	}
	if (KHBIOS != NULL) {
		/* KHBIOS情報を使ってパーティション開始位置を探索 */

	}
	BPB = test_BPB(bpb);
	if (BPB == NULL) {
		/* AT互換機HDDイメージだと仮定して、第一パーティションを探す */
		if (bpb[0x1c9] == 0x00) {
			i = bpb[0x1c6] | bpb[0x1c7] << 8 | bpb[0x1c8] << 16;
			if (i < SIZ_IMGBUF / 512)
				BPB = test_BPB(&bpb[i << 9]);
		}
	}
	if (BPB == NULL)
		errend(17); /* opt-imgin format error */
	return cmd + (*cmd + 2);
}

const UCHAR *test_KHBIOS(const UCHAR *p)
{
	return NULL; /* 未完成による手抜き */
}

UCHAR *test_BPB(UCHAR *p)
{
	int i, len_sys, len_fat, len_dir;
	const UCHAR *q;
	unsigned short *s;
	if (p[0x0b] != 0x00)
		goto err; /* 128バイト/セクタは扱えないことにする */
	if (p[0x0c] == 0x00)
		goto err;
	if (p[0x0c] & (p[0x0c] - 1))
		goto err;
	if (p[0x0d] == 0x00)
		goto err;
	if (p[0x0d] & (p[0x0d] - 1))
		goto err;
	if (p[0x10] != 0x02 && p[0x10] != 0x01)
		goto err;
	len_sys = p[0x0e] | p[0x0f] << 8;
	len_dir = p[0x11] | p[0x12] << 8;
	len_fat = p[0x16] | p[0x17] << 8;
	if (len_dir == 0)
		goto err; /* 多分FAT32 */
	if (len_fat == 0)
		goto err; /* 多分FAT32 */
	flag &= ~0x7;
	len_sec = p[0x0c] << 8;
	i = p[0x13] | p[0x14] << 8;
	if (i == 0)
		i = p[0x20] | p[0x21] << 8 | p[0x22] << 16 | p[0x23] << 24;
	i -= len_sys;
	i -= len_fat * p[0x10];
	i -= (len_dir * 32) / len_sec;
	if (i < 0)
		goto err;
	i /= p[0x0d];
	limit_fat = i + 2;
	if (p[0x36] == 'F' && p[0x37] == 'A' && p[0x38] == 'T' && p[0x3b] == ' ' && p[0x3c] == ' ' && p[0x3d] == ' ') {
		if (p[0x39] == '1') {
			if (p[0x3a] == '6') {
				flag |= 0x01; /* FAT16 */
				if (p[0x40] == 'S' && p[0x41] == 'F' && p[0x42] == '1' && p[0x43] == '6') {
					limit_fat = p[0x44] | p[0x45] << 8;
					flag |= 0x04; /* SF16 */
				}
			}
			if (p[0x3a] == '2')
				flag |= 0x02; /* FAT12 */
		}
	} else { /* 伝統的な容量による判定 */
		if (i > 0xff5)
			flag |= 0x01; /* FAT16 */
		else
			flag |= 0x02; /* FAT12 */
	}
	if ((flag & 0x03) == 0)
		goto err;
	len_fat *= len_sec;
	fat0 = (UCHAR *) p + len_sys * len_sec;
	fat1 = fat0;
	if (p[0x10] == 0x02)
		fat1 += len_fat;
	dir0 = fat1 + len_fat;
	clu0002 = dir0 + len_dir * 32;
	len_clu = len_sec * p[0x0d];

	i = clu0002 + (limit_fat - 2) * len_clu - imgbuf0;
	if (i > SIZ_IMGBUF) {
		limit_fat = (imgbuf0 + SIZ_IMGBUF - clu0002) / len_clu + 2;
		i = clu0002 + (limit_fat - 2) * len_clu - imgbuf0;
	}
	if (len_imgbuf < (unsigned) i)
		len_imgbuf = i;

	/* FATのローディング */
	s = fat;
	q = fat0;
	if (flag & 1) {
		do {
			*s++ = *(unsigned short *) q;
			q += 2;
			len_fat -= 2;
		} while (len_fat != 0);
		if (flag & 4) {
			if (p[0x47] & 0x10) {
				/* efatを復元 */
				fat[0] ^= 0x0007;
				for (i = 2; i < 0xfff6; i++) {
					if (fat[i] == 0xfffe)
						fat[i] = i + 1;
				}
			}
			p[0x47] &= ~0x30;
		}
	}
	if (flag & 2) {
		do {
			s[0] = q[0] | (q[1] & 0x0f) << 8;
			s[1] = ((q[1] >> 4) & 0x0f) | q[2] << 4;
			if (s[0] >= 0xff7)
				s[0] |= 0xf000;
			if (s[1] >= 0xff7)
				s[1] |= 0xf000;
			q += 3;
			s += 2;
			len_fat -= 3;
		} while (len_fat > 0);
	}
	return p;
err:
	return NULL;
}

void bpbfix_sub()
{
	UCHAR *p = BPB;
	unsigned int i = (imgbuf0 + len_imgbuf - p) / len_sec;
	p[0x13] = 0x00;
	p[0x14] = 0x00;
	if (i <= 0xffff) {
		p[0x13] =  i       & 0xff;
		p[0x14] = (i >> 8) & 0xff;
	}
	*(unsigned int *) &p[0x20] = i;
	if (flag & 0x04) {
		*(unsigned int *) &p[0x48] = i;
		*(unsigned short *) &p[0x44] = limit_fat;
	}
	return;
}

const UCHAR *opt_vsiz(const char *cmd)
{
	int i = getnum(cmd + (4 + 2));
	if (flag & 0x03) {
		i -= clu0002 - BPB;
		if (i < 0)
			i = 0;
		i /= len_clu;
		limit_fat = i + 2;
		len_imgbuf = clu0002 + i * len_clu - imgbuf0;
		bpbfix_sub();
		i = clu0002 + (limit_fat - 2) * len_clu - imgbuf0;
		if (i > SIZ_IMGBUF) {
			limit_fat = (imgbuf0 + SIZ_IMGBUF - clu0002) / len_clu + 2;
			i = clu0002 + (limit_fat - 2) * len_clu - imgbuf0;
		}
		if (len_imgbuf < (unsigned) i)
			len_imgbuf = i;
	} else if (flag & 0x10) {
		if (i > SIZ_IMGBUF)
			errend(27); /* bin-file too large */
		len_imgbuf = i;
	} else
		errend(23);

	return cmd + (*cmd + 2);
}

const UCHAR *opt_imgout(const char *cmd)
{
	FILE *fp;
	int len_fat = (BPB[0x16] | BPB[0x17] << 8) * len_sec, i, j;

	if ((BPB[0x0b] | BPB[0x0c] << 8) != len_sec || fat1 - imgbuf0 + len_fat > len_imgbuf)
		errend(37);

	if (flag & 1) {
		for (i = 0; i < len_fat; i++)
			fat0[i] = ((UCHAR *) fat)[i];
	}
	if (flag & 2) {
		j = 0;
		for (i = 0; i < len_fat; i += 3) {
			if (i + 1 < len_fat) {
				fat0[i]     = fat[j] & 0xff;
				fat0[i + 1] = (fat0[i + 1] & 0xf0) | ((fat[j] >> 8) & 0x0f);
			}
			if (i + 2 < len_fat) {
				fat0[i + 1] = (fat0[i + 1] & 0x0f) | ((fat[j + 1] << 4) & 0xf0);
				fat0[i + 2] = (fat[j + 1] >> 4) & 0xff;
			}
			j += 2;
		}
	}
	if (fat1 > fat0) {
		if ((flag & 4) != 0 && (BPB[0x47] & 0x10) != 0) {
			for (i = 0; i < len_fat; i++)
				fat1[i] = 0;
		} else {
			for (i = 0; i < len_fat; i++)
				fat1[i] = fat0[i];
		}
	}

	fp = fopen(cmd + (6 + 2), "wb");
	if (fp == NULL) {
err:
		fputs("opt-imgout store error. : ", stderr);
		fputs(cmd + (6 + 2), stderr);
		errend(24);
	}
	i = fwrite(imgbuf0, 1, len_imgbuf, fp);
	fclose(fp);
	if ((unsigned int) i != len_imgbuf)
		goto err;

	return cmd + (*cmd + 2);
}

const UCHAR *opt_binin(const char *cmd)
{
	FILE *fp;
	fp = fopen(cmd + (5 + 2), "rb");
	if (fp == NULL) {
err:
		fputs("opt-binin load error. : ", stderr);
		fputs(cmd + (5 + 2), stderr);
		errend(28);
	}
	len_imgbuf = fread(imgbuf0, 1, SIZ_IMGBUF, fp);
	fclose(fp);
	if (len_imgbuf >= SIZ_IMGBUF)
		goto err;
	flag = 0x10;
	BPB = imgbuf0;
	return cmd + (*cmd + 2);
}

const UCHAR *opt_binout(const char *cmd)
{
	FILE *fp;
	unsigned int i;
	fp = fopen(cmd + (6 + 2), "wb");
	if (fp == NULL) {
err:
		fputs("opt-binout store error. : ", stderr);
		fputs(cmd + (6 + 2), stderr);
		errend(29);
	}
	i = fwrite(imgbuf0, 1, len_imgbuf, fp);
	fclose(fp);
	if (i != len_imgbuf)
		goto err;
	return cmd + (*cmd + 2);
}

const UCHAR *opt_bpath(const char *cmd)
{
	_path = cmd + (5 + 2);
	return cmd + (*cmd + 2);
}

const UCHAR *opt_bias(const char *cmd)
{
	bias = getnum(cmd + (4 + 2)) * 60;
	return cmd + (*cmd + 2);
}

#if 0
void set_efatflag()
{
	UCHAR *p;
	int i;
	for (i = 0; i < limit_fat; i++)
		fat_flags[i] = 0x00;
	for (p = dir0; p < clu0002; p += 32) {
		if (*p == '\0')
			break;
		if (*p != 0xe5 && (p[11] & 0x08) == 0) {
			i = p[26] | p[27] << 8;
			if (2 <= i && i < limit_fat)
				fat_flags[i] = 0x01;
			if (p[11] & 0x10)
				errend(32);
		}
	}
	fat_flags[limit_fat] = 0x01;
	return;
}
#endif

/* l2d3関係 */

static const UCHAR *getbc_ptr;
static UCHAR getbc_count, getbc_byte;

int getbc(int bits)
{
	int ret = 0;
	do {
		if (getbc_count == 8)
			getbc_byte = *getbc_ptr++;
		if (--getbc_count == 0)
			getbc_count = 8;
		ret <<= 1;
		if (getbc_byte & 0x80)
			ret |= 0x01;
		getbc_byte <<= 1;
	} while (--bits);
	return ret;
}

int getbc0(int bits, int ret)
/* 初期値付き */
{
	do {
		if (getbc_count == 8)
			getbc_byte = *getbc_ptr++;
		if (--getbc_count == 0)
			getbc_count = 8;
		ret <<= 1;
		if (getbc_byte & 0x80)
			ret |= 0x01;
		getbc_byte <<= 1;
	} while (--bits);
	return ret;
}

void decode_l2d3(int k, const UCHAR *src, UCHAR *dest)
{
	int len, distance, j, i;
	getbc_count = 8;
	getbc_ptr = src;

	for (i = 0; i < k; ) {
		j = getbc(1);
		if (j > 0) {
			j = getbc(8);
			dest[i++] = j;
			continue;
		}
		/* len */
		j = getbc(2);
		len = j;
		if (j == 0) {
			j = getbc(4);
			len = j + 3;
			if (j == 0) {
				j = getbc(8);
				len = j + 18;
				if (j == 0) {
					j = getbc(16);
					len = j;
					if (j <= 127)
						len = getbc0(j, 1); /* 最初のbitは1に決まっているから */
				}
			}
		}
		distance = -1;
		do {
			distance = getbc0(3, distance);
			j = getbc(1);
		} while (j);
		do {
			dest[i] = dest[i + distance];
			i++;
		} while (--len);
	}
	return;
}

int getnum_l1a()
{
	int i = 1, j;
	for (;;) {
		j = getbc(1);
		if (j < 0)
			return j;
		if (j)
			break;
		i = getbc0(1, i);
		if (i < 0)
			break;
	}
	return i;
}

int getnum_l1b()
{
	int i = getnum_l1a();
	if (i < 0)
		return i;
	if (i == 1) {
		i = getbc(1);
		if (i < 0)
			return i;
	}
	return i + 1;
}

int getnum_df(unsigned int s)
{
	int d = -1, t;
	for (;;) {
		do {
			d = getbc0(1, d);
			t = s & 1;
			s >>= 1;
		} while (t == 0);
		if (s == 0)
			break;
		if (getbc(1))
			break;
	//	if (d == -1)
	//		return 0;
	}
	return d;
}

int getnum_s8()
{
	int s;
	s = getbc(8);
	while (getbc(1) == 0)
		s = getbc0(8, s);
	return s;
}

const int getnum_l0a(int z)
{
	static int l[4] = { 0x7fffffff, 4, 8, 16 };
	int i = 1, j;
	z = l[z];
	while (i < z) {
		j = getbc(1);
		if (j < 0)
			return j;
		if (j)
			return i;
		i++;
	}
	j = getbc(1);
	if (j < 0)
		return j;
	if (j)
		return i;
	j = getnum_l1b();
	if (j < 0)
		return j;
	return j + i;
}

void decode_tek0(int k, const UCHAR *src, UCHAR *dest)
{
	int len, distance, j, i, z0, z1;
	unsigned int dis_s, l_ofs, method;

	getbc_count = 8;
	getbc_ptr = src;

	/* ヘッダ読み込み */
	dis_s = getnum_s8();
	l_ofs = getbc(2);
	method = getbc(1); /* l1a/l1b */
	z0 = getbc(2);
	z1 = getbc(2);

	for (i = 0; i < k; ) {
		/* "0"-phase (非圧縮フェーズ) */
		j = getnum_l0a(z0);
	//	if (j < 0)
	//		break;
		do {
			len = getbc(8);
			if (len < 0)
				break;
			dest[i++] = len;
		} while (--j);

		if (i >= k)
			break;

		/* "1"-phase (圧縮フェーズ) */
		j = getnum_l0a(z1);
	//	if (j < 0)
	//		break;
		do {
			distance = getnum_df(dis_s);
			if (method == 0)
				len = getnum_l1a();
			else
				len = getnum_l1b();
			if (len < 0)
				break;
			len += l_ofs;
			do {
				dest[i] = dest[i + distance];
				i++;
			} while (--len);
		} while (--j);
	}
	return;
}

void sar_shifttime(struct sar_attrtime *at, int min, void *opt)
/* ただ足すだけ、引くだけという単純なもの */
/* 夏時間なんてしりません */
/* ちゃんとしたかったら改造してください */
{
	static UCHAR days[] = {
		31, 28, 31, 30, 31, 60, 31, 31, 30, 31, 30, 31
	};
	UCHAR max;
	if (min >= 0) {
		min += at->min;
		at->min = min % 60;
		if (min /= 60) {
			min += at->hour;
			at->hour = min % 24;
			at->day += min / 24;
			max = days[at->mon - 1];
			if (at->mon == 2 && (at->year & 3) == 0) {
				if ((at->year % 100) != 0 || (at->year % 400) == 0)
					max++;
			}
			if (at->day > max) {
				at->day -= max;
				at->mon++;
				if (at->mon > 12) {
					at->mon = 1;
					at->year++;
				}
			}
		}
	} else {
		int tmp;
		min += at->min;
		tmp = min % 60;
		min /= 60;
		while (tmp < 0) {
			tmp += 60;
			min--;
		}
		at->min = tmp;
		if (min < 0) {
			min += at->hour;
			tmp = min % 24;
			min /= 24;
			while (tmp < 0) {
				tmp += 24;
				min--;
			}
			at->hour = tmp;
			at->day += min;
			if (at->day <= 0) {
				at->mon--;
				if (at->mon <= 0) {
					at->mon += 12;
					at->year--;
				}
				max = days[at->mon - 1];
				if (at->mon == 2 && (at->year & 3) == 0) {
					if ((at->year % 100) != 0 || (at->year % 400) == 0)
						max++;
				}
				at->day += max;
			}
		}
	}
	return;
}

#if (defined(SAR_MODE_WIN32))

	#if (!defined(__stdcall))
		#define	__stdcall	__attribute__((__stdcall__))
	#endif

	#define FILE_ATTRIBUTE_READONLY		0x01
	#define FILE_ATTRIBUTE_HIDDEN		0x02
	#define FILE_ATTRIBUTE_SYSTEM		0x04
	#define FILE_ATTRIBUTE_DIRECTORY	0x10
	#define FILE_ATTRIBUTE_ARCHIVE		0x20
	#define FILE_ATTRIBUTE_NORMAL		0x80
	#define FILE_FLAG_BACKUP_SEMANTICS	0x02000000
	#define FILE_SHARE_READ				1
	#define FILE_SHARE_WRITE			2
	#define FILE_SHARE_DELETE			4
	#define GENERIC_READ				0x80000000
	#define GENERIC_WRITE				0x40000000
	#define OPEN_EXISTING				3

	struct FILETIME {
		unsigned int dwLowDateTime, dwHighDateTime;
	};

	struct SYSTEMTIME {
		short wYear, wMonth, wDayOfWeek, wDay;
		short wHour, wMinute, wSecond, wMilliseconds;
	};

	struct TIME_ZONE_INFORMATION {
		int Bias;
		char StandardName[64];
		struct SYSTEMTIME StandardDate;
		int StandardBias;
		char DaylightName[64];
		struct SYSTEMTIME DaylightDate;
		int DaylightBias;
	};

	int __stdcall GetFileAttributesA(const char *lpFileName);
	int __stdcall SetFileAttributesA(const char *lpFileName, int dwFileAttributes);
	int __stdcall GetFileTime(int hFile, struct FILETIME *lpCreationTime,
		struct FILETIME *lpLastAccessTime, struct FILETIME *lpLastWriteTime);
	int __stdcall SetFileTime(int hFile, const struct FILETIME *lpCreationTime,
		const struct FILETIME *lpLastAccessTime, const struct FILETIME *lpLastWriteTime);
	int __stdcall SystemTimeToFileTime(const struct SYSTEMTIME *lpSystemTime, struct FILETIME *lpFileTime);
	int __stdcall FileTimeToSystemTime(const struct FILETIME *lpFileTime, struct SYSTEMTIME *lpSystemTime);
	int __stdcall GetTimeZoneInformation(struct TIME_ZONE_INFORMATION *lpTimeZoneInformation);
	int __stdcall CreateFileA(const char *name, int access, int share, void *security, int option, int flags, int template);
	int __stdcall CloseHandle(int handle);

#elif (defined(SAR_MODE_POSIX))
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <unistd.h>
	#include <utime.h>
	#include <time.h>		/* ANSI-C, time_tと日時の変換に使う */
#endif


void getattrtime(struct sar_attrtime *s, const UCHAR *path)
/* s->attrのbit0-3,5-6は保存すること */
{
	#if (defined(SAR_MODE_WIN32))
		int i;
		s->attr &= 0x06f;
		i = GetFileAttributesA(path);
		if (i & FILE_ATTRIBUTE_READONLY)
			s->attr |= 0x080;
		if (i & FILE_ATTRIBUTE_HIDDEN)
			s->attr |= 0x100;
		if (i & FILE_ATTRIBUTE_SYSTEM)
			s->attr |= 0x200;
		if (i & FILE_ATTRIBUTE_ARCHIVE)
			s->attr |= 0x400;
		s->subsec |= -1;
		i = CreateFileA(path, GENERIC_READ,
			FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
			NULL, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, 0);
		if (i != -1) {
			struct FILETIME ft;
			struct SYSTEMTIME st;
			GetFileTime(i, NULL, NULL, &ft);
			CloseHandle(i);
			FileTimeToSystemTime(&ft, &st);
			s->subsec = st.wMilliseconds << 20;
			s->sec = st.wSecond;
			s->min = st.wMinute;
			s->hour = st.wHour;
			s->day = st.wDay;
			s->mon = st.wMonth;
			s->year = st.wYear;
			s->year_h = 0;
		}
		s->permission = 0700;
	#elif (defined(SAR_MODE_POSIX))
		/* POSIXにしてみるテスト */
		struct stat buf;
		s->attr &= 0x6f;
		s->subsec = -1;
		if (stat(path, &buf) == 0) {
			struct tm gm;
			s->permission = buf.st_mode & 0777; /* SUIDとか一応消す */
			/* ANSI-C */
			if (gmtime_r(&buf.st_mtime, &gm)) {
				s->subsec = 0;
				s->sec  = gm.tm_sec;
				s->min  = gm.tm_min;
				s->hour = gm.tm_hour;
				s->day  = gm.tm_mday;
				s->mon  = gm.tm_mon + 1;
				s->year = gm.tm_year + 1900;
				s->year_h = 0;
			}
		}
	#else
		s->attr &= 0x6f;
		s->permission = 0700;
		s->subsec |= -1; /* subsec == -1 : 更新時刻情報なし */
	#endif
	return;
}

void setattrtime(struct sar_attrtime *s, const UCHAR *path, const int flags)
{
	#if (defined(SAR_MODE_WIN32))
		int i;
		i = GetFileAttributesA(path);
		i &= ~FILE_ATTRIBUTE_READONLY & ~FILE_ATTRIBUTE_HIDDEN &
			~FILE_ATTRIBUTE_SYSTEM & ~FILE_ATTRIBUTE_ARCHIVE & ~FILE_ATTRIBUTE_NORMAL;
		if (s->attr & 0x080)
			i |= FILE_ATTRIBUTE_READONLY;
		if (s->attr & 0x100)
			i |= FILE_ATTRIBUTE_HIDDEN;
		if (s->attr & 0x200)
			i |= FILE_ATTRIBUTE_SYSTEM;
		if (s->attr & 0x400)
			i |= FILE_ATTRIBUTE_ARCHIVE;
		if (flags & 0x01)
			SetFileAttributesA(path, i);
		if (flags & 0x04) {
			if (s->subsec != -1) {
				struct SYSTEMTIME st;
				struct FILETIME ft;
				int h;
				st.wMilliseconds = s->subsec >> 20;
				st.wSecond = s->sec;
				st.wMinute = s->min;
				st.wHour = s->hour;
				st.wDay = s->day;
				st.wMonth = s->mon;
				st.wYear = s->year;
				SystemTimeToFileTime(&st, &ft);
				h = CreateFileA(path, GENERIC_WRITE,
					FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
					NULL, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, 0);
				if (h != -1) {
					SetFileTime(h, &ft, &ft, &ft); /* とりあえずすべてこの日時にしてみる */
					CloseHandle(h);
				}
			}
		}
	#elif (defined(SAR_MODE_POSIX))
		struct tm gm;
		struct utimbuf buf;
		char *tz;

		gm.tm_sec  = s->sec;
		gm.tm_min  = s->min;
		gm.tm_hour = s->hour;
		gm.tm_mday = s->day;
		gm.tm_mon  = s->mon - 1;
		gm.tm_year = s->year - 1900;

		/* GNU拡張timegmの代わり */
		tz = getenv("TZ"); /* TZを保存 */
		setenv("TZ", "", 1); /* TZを消去 */
		tzset();
		buf.modtime = buf.actime = mktime(&gm);
		if (tz)
			setenv("TZ", tz, 1);
		else
			unsetenv("TZ");
		tzset();	/* TZ復元 */

		if (flags & 0x04) {
			if (buf.modtime != -1)
				utime(path, &buf);
		}
		if (flags & 0x02)
			chmod(path, s->permission); /* 失敗しても気にしない */
	#else
		/* 何もしない */
	#endif
	return;
}
