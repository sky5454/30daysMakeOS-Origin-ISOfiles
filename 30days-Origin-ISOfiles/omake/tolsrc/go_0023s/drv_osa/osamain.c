
#include "../include/setjmp.h"
#include "../include/string.h"
#include "stdlib.h"
#include "guigui00.h"

int GOL_abortcode;
jmp_buf setjmp_env;

#define SIZ_MEMTEMP		(128 * 1024)

static UCHAR *memtemp0, *memtemp1;
static int mt_size0 = 0, mt_size1 = 0;

struct STR_CC1MAIN {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

struct STR_GAS2NASK {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

struct STR_NASKMAIN {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *listname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *list0, *list1; /* 出力ファイル(list0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

struct STR_OBJ2BIM {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *mapname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *map0, *map1; /* 出力ファイル(map0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

struct STR_BIM2BIN {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

struct STR_SJISCONV { /* STR_GAS2NASKとコンパチ */
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

struct CONSOLE {
	int x_size, y_size, x_cur, y_cur, color;
	int ibuf_rptr, ibuf_wptr, ebuf_rptr, ebuf_wptr, curflag;
	unsigned char *cons_buf, *input_buf, *echo_buf;
	struct LIB_TEXTBOX *textbox;
};

static int getsignalw();

struct CONSOLE *copen(const int x_size, const int y_size,
	struct LIB_WINDOW *window, const int x0, const int y0, const int color, const int backcolor);
void cputc(int c, struct CONSOLE *cons);
void cputs(const unsigned char *str, struct CONSOLE *cons);
const int cgetc(struct CONSOLE *cons);
void cgets(unsigned char *str, int n, struct CONSOLE *cons);
const int cungetc(const int c, struct CONSOLE *cons);
void cons_cursoron(struct CONSOLE *cons);
void cons_cursoroff(struct CONSOLE *cons);
const int cons_keyin(struct CONSOLE *cons, int c);
const int cons_readycgetc(struct CONSOLE *cons);
const int cons_readycgets(struct CONSOLE *cons);

#define	cons_readyinput(cons)	cons_readycgets(cons)

void waitready(struct CONSOLE *cons);
int execute(UCHAR *p, struct CONSOLE *cons);
int osamap(UCHAR *f, int slot, int limit, UCHAR *fp, int opt, int rw);
int cc1main(struct STR_CC1MAIN *str_cc1main);
int gas2nask_main(struct STR_GAS2NASK *params);
int naskmain(struct STR_NASKMAIN *params);
int obj2bim_main(struct STR_OBJ2BIM *params);
int bim2bin_main(struct STR_BIM2BIN *params);
int sjisconv_main(struct STR_SJISCONV *params);

#define AUTO_MALLOC		0
#define REWIND_CODE		1

static int *sig_ptr, *signalbox0;
static UCHAR cmdlinbuf0[1024];
static struct CONSOLE *stdin;
static UCHAR osaname[] = "        .   ";

void OsaskMain()
{
	struct LIB_WINDOW *window;
	struct LIB_TEXTBOX *wintitle;
	struct CONSOLE *stdout;

	/* ライブラリの初期化(必ず最初にやらなければならない) */
	lib_init(AUTO_MALLOC);

	/* シグナルボックス初期化 */
    sig_ptr = signalbox0 = lib_opensignalbox(256, AUTO_MALLOC, 0, REWIND_CODE);

	/* ウィンドウのオープン */
	window = lib_openwindow(AUTO_MALLOC, 0x0200, 480, 240);
	wintitle = lib_opentextbox(0x1000, AUTO_MALLOC, 0, 7, 1, 0, 0, window, 0x00c0, 0);

	/* コンソールのオープン */
	stdin = stdout = copen(60, 15, window, 0,  0, 0, 15);

	/* ウィンドウタイトルなどを表示 */
	lib_putstring_ASCII(0x0000, 0, 0, wintitle,  0, 0, "osaskgo");

	/* シグナル定義 */
	lib_definesignal1p0(0x7e - 0x20, 0x0100, 0x20, window, 128 + 0x20); /* ASCIIキャラクター入力 */
	lib_definesignal1p0(0, 0x0100, 0xa0, window, 128 + '\n'); /* Enter入力 */
	lib_definesignal1p0(0, 0x0100, 0xa1, window, 128 + '\b'); /* Backspace入力 */
	lib_definesignal0p0(0, 0, 0, 0);

	memtemp0 = malloc(SIZ_MEMTEMP);
	memtemp1 = malloc(SIZ_MEMTEMP);

	/* メインループ */
	for (;;) {
		int i, j;
		UCHAR *p, *fp0, c;
		fp0 = (UCHAR *) lib_readCSd(0x0010);
		lib_unmapmodule(0, 520 * 1024, fp0);
		cputc('>', stdout);
		if (!cons_readyinput(stdin))
			waitready(stdin);
		cgets(cmdlinbuf0, sizeof cmdlinbuf0, stdin);
		if (i = strlen(cmdlinbuf0) > sizeof cmdlinbuf0 - 3) {
			cputs("[ERROR : too long command-line.]\n", stdout);
			continue;
		}
		for (p = cmdlinbuf0; *p != '\0' && *p <= ' '; p++);
		for (i = 0; p[i] != '\0'; i++) {
			if (p[i] == '\r')
				p[i] = '\0';
			if (p[i] == '\n')
				p[i] = '\0';
		}
		if (*p == '\0')
			continue;
		if ((i = execute(p, stdout)) > 0) {
			cputs("[ERROR : abnormal termination.]\n", stdout);
			continue;
		}
		if (i == -1) {
			/* コマンドが見付からない */
			/* pをファイル名に変換してバッチファイルとしてオープン */
			/* そして一行ずつexecuteする */
			i = osamap(p, 0x210, 4096, fp0 + 516 * 1024, 0, 5 /* ReadOnly */);
			if (i == -1) {
				cputs("[ERROR : fail to open batch.]\n", stdout);
				continue;
			}
			p = fp0 + 516 * 1024;

			/* i:ファイルサイズ, p:ファイルポインタ */
			while (i) {
				if (*p <= ' ') {
					i--;
					cputc(*p++, stdout);
					continue;
				}
				j = 0;
				for (;;) {
					if (i == 0)
						break;
					c = *p++;
					i--;
					cputc(c, stdout);
					if (c == '\r')
						continue;
					if (c == '\n')
						break;
					cmdlinbuf0[j++] = c;
					if (j > sizeof cmdlinbuf0 - 3) {
						/* コマンドラインが長すぎる */
						do {
							if (i == 0)
								break;
							c = *p++;
							i--;
							cputc(c, stdout);
						} while (c != '\n');
						cputs("[ERROR : too long command-line.]\n", stdout);
						goto batch_error_skip;
					}
				}
				cmdlinbuf0[j] = '\0';
				if (execute(cmdlinbuf0, stdout)) {
					cputs("[ERROR : abnormal termination.]\n", stdout);
					goto batch_error_skip;
				}
			}
batch_error_skip:
			;
		}
	}
}

int osaout(UCHAR *f, int size, UCHAR *buf);
int osaoutb(UCHAR *f, int size, UCHAR *buf);

void refresh_static_sub();

extern int _gg00_malloc_base, _gg00_malloc_addr0;

static void refresh_static()
{
	int *sigp = sig_ptr, *sigp0 = signalbox0;
	struct CONSOLE *cons = stdin;
	UCHAR *mt0 = memtemp0, *mt1 = memtemp1;
	int mt0s = mt_size0, mt1s = mt_size1;
	int mallocptr = _gg00_malloc_base;
	int malloc0 = _gg00_malloc_addr0;
	refresh_static_sub();
	sig_ptr = sigp;
	signalbox0 = sigp0;
	stdin = cons;
	memtemp0 = mt0;
	memtemp1 = mt1;
	mt_size0 = mt0s;
	mt_size1 = mt1s;
	_gg00_malloc_base = mallocptr;
	_gg00_malloc_addr0 = malloc0;
	return;
}

int execute(UCHAR *p, struct CONSOLE *cons)
{
	struct STR_CC1MAIN str_cc1main;
	struct STR_GAS2NASK str_gas2nask;
	struct STR_NASKMAIN str_naskmain;
	struct STR_OBJ2BIM str_obj2bim;
	struct STR_BIM2BIN str_bim2bin;
	struct STR_SJISCONV str_sjisconv;
	UCHAR *q, *r, *s, *t, err;
	int i;

	if (p[0] == 'c' && p[1] == 'c' && p[2] == '1' && p[3] <= ' ') {
		/* malloc_size : 5632k (5440) */
		static UCHAR *msg_term[] = {
			"[TERM_WORKOVER]\n",
			"[TERM_OUTOVER]\n",
			"[TERM_ERROVER]\n",
			"[TERM_BUGTRAP]\n",
			"[TERM_SYSRESOVER]\n",
			"[TERM_ABORT]\n"
		};
		err = 0;
		str_cc1main.cmdlin = p;
		str_cc1main.outname = NULL;
		str_cc1main.dest0 = q = malloc(256 * 1024);
		str_cc1main.dest1 = q + 256 * 1024;
		str_cc1main.err0 = r = malloc(64 * 1024);
		str_cc1main.err1 = r + 64 * 1024 - 1;
		str_cc1main.work0 = s = malloc(5120 * 1024);
		str_cc1main.work1 = s + 5120 * 1024;
		i = cc1main(&str_cc1main);
		*(str_cc1main.err0) = '\0';
		cputs(r, cons);
		free(r);
		if (str_cc1main.outname == NULL) {
			*(str_cc1main.dest0) = '\0';
			cputs(q, cons);
		} else {
			if (osaout(str_cc1main.outname, str_cc1main.dest0 - q, q)) {
				cputs("[ERROR : can't output file.]\n", cons);
				err = 1;
			}
		}
		free(s); /* outnameがあるのでこのタイミングでfreeする */
		free(q);
put_termcode:
		if (1 <= i && i <= 6)
			cputs(msg_term[i - 1], cons);
		refresh_static();
		return i != 0 || err != 0;
	}

	if (p[0] == 'g' && p[1] == 'a' && p[2] == 's' && p[3] == '2' && p[4] == 'n' &&
			p[5] == 'a' && p[6] == 's' && p[7] == 'k' && p[8] <= ' ') {
		/* malloc_size : 3584k (3264) */
		err = 0;
		str_gas2nask.cmdlin = p;
		str_gas2nask.outname = NULL;
		str_gas2nask.dest0 = q = malloc(3072 * 1024);
		str_gas2nask.dest1 = q + 3072 * 1024;
		str_gas2nask.err0 = r = malloc(128 * 1024);
		str_gas2nask.err1 = r + 128 * 1024 - 1;
		str_gas2nask.work0 = s = malloc(64 * 1024);
		str_gas2nask.work1 = s + 64 * 1024;
		i = gas2nask_main(&str_gas2nask);
		*(str_gas2nask.err0) = '\0';
		cputs(r, cons);
		free(r);
		if (str_gas2nask.outname == NULL) {
			*(str_gas2nask.dest0) = '\0';
			cputs(q, cons);
		} else {
			if (osaout(str_gas2nask.outname, str_gas2nask.dest0 - q, q)) {
				cputs("[ERROR : can't output file.]\n", cons);
				err = 1;
			}
		}
		free(s); /* outnameがあるのでこのタイミングでfreeする */
		free(q);
		goto put_termcode;
	}

	if (p[0] == 'n' && p[1] == 'a' && p[2] == 's' && p[3] == 'k' && p[4] <= ' ') {
		/* malloc_size : 3584k (3392) */
		err = 0;
		str_naskmain.cmdlin = p;
		str_naskmain.outname = NULL;
		str_naskmain.listname = NULL;
		str_naskmain.dest0 = q = malloc(768 * 1024);
		str_naskmain.dest1 = q + 768 * 1024;
		str_naskmain.list0 = t = malloc(1024 * 1024);
		str_naskmain.list1 = t + 1024 * 1024;
		str_naskmain.err0 = r = malloc(64 * 1024);
		str_naskmain.err1 = r + 64 * 1024 - 1;
		str_naskmain.work0 = s = malloc(1536 * 1024);
		str_naskmain.work1 = s + 1536 * 1024;
		i = naskmain(&str_naskmain);
		*(str_naskmain.err0) = '\0';
		cputs(r, cons);
		free(r);
		if (str_naskmain.outname != NULL) {
			if (osaoutb(str_naskmain.outname, str_naskmain.dest0 - q, q)) {
				cputs("[ERROR : can't output file.]\n", cons);
				err = 1;
			}
		}
		free(q);
		if (str_naskmain.listname != NULL) {
			if (str_naskmain.list1[-1])
				cputs("[ERROR : listbuf over.]\n", cons);
			else {
				if (osaout(str_naskmain.listname, str_naskmain.list0 - t, t)) {
					cputs("[ERROR : can't output list.]\n", cons);
					err = 1;
				}
			}
		}
		free(s); /* outnameがあるのでこのタイミングでfreeする */
		free(t);
		goto put_termcode;
	}

	if (p[0] == 'o' && p[1] == 'b' && p[2] == 'j' && p[3] == '2' && p[4] == 'b' &&
			p[5] == 'i' && p[6] == 'm' && p[7] <= ' ') {
		/* malloc_size : 3584k (3360) */
		err = 0;
		str_obj2bim.cmdlin = p;
		str_obj2bim.outname = NULL;
		str_obj2bim.mapname = NULL;
		str_obj2bim.dest0 = q = malloc(512 * 1024);
		str_obj2bim.dest1 = q + 512 * 1024;
		str_obj2bim.map0 = t = malloc(64 * 1024);
		str_obj2bim.map1 = t + 64 * 1024;
		str_obj2bim.err0 = r = malloc(16 * 1024);
		str_obj2bim.err1 = r + 16 * 1024 - 1;
		str_obj2bim.work0 = s = malloc(2768 * 1024);
		str_obj2bim.work1 = s + 2768 * 1024;
		i = obj2bim_main(&str_obj2bim);
		*(str_obj2bim.err0) = '\0';
		cputs(r, cons);
		free(r);
		if (str_obj2bim.outname != NULL) {
			if (osaoutb(str_obj2bim.outname, str_obj2bim.dest0 - q, q)) {
				cputs("[ERROR : can't output file.]\n", cons);
				err = 1;
			}
		}
		free(q);
		if (str_obj2bim.mapname != NULL) {
			if (osaout(str_obj2bim.mapname, str_obj2bim.map0 - t, t)) {
				cputs("[ERROR : can't output map.]\n", cons);
				err = 1;
			}
		}
		free(t);
		free(s); /* outnameがあるのでこのタイミングでfreeする */
		goto put_termcode;
	}

	if (p[0] == 'b' && p[1] == 'i' && p[2] == 'm' && p[3] == '2' && p[4] == 'b' &&
			p[5] == 'i' && p[6] == 'n' && p[7] <= ' ') {
		/* malloc_size : 3584k (3216) */
		err = 0;
		str_bim2bin.cmdlin = p;
		str_bim2bin.outname = NULL;
		str_bim2bin.dest0 = q = malloc(768 * 1024);
		str_bim2bin.dest1 = q + 768 * 1024;
		str_bim2bin.err0 = r = malloc(16 * 1024);
		str_bim2bin.err1 = r + 16 * 1024 - 1;
		str_bim2bin.work0 = s = malloc(2432 * 1024);
		str_bim2bin.work1 = s + 2432 * 1024;
		i = bim2bin_main(&str_bim2bin);
		*(str_bim2bin.err0) = '\0';
		cputs(r, cons);
		free(r);
		if (str_bim2bin.outname != NULL) {
			if (osaoutb(str_bim2bin.outname, str_bim2bin.dest0 - q, q)) {
				cputs("[ERROR : can't output file.]\n", cons);
				err = 1;
			}
		}
		free(s); /* outnameがあるのでこのタイミングでfreeする */
		free(q);
		goto put_termcode;
	}

	if (p[0] == 's' && p[1] == 'j' && p[2] == 'i' && p[3] == 's' && p[4] == 'c' &&
			p[5] == 'o' && p[6] == 'n' && p[7] == 'v' && p[8] <= ' ') {
		/* malloc_size : 3584k (3264) */
		err = 0;
		str_sjisconv.cmdlin = p;
		str_sjisconv.outname = NULL;
		str_sjisconv.dest0 = q = malloc(3072 * 1024);
		str_sjisconv.dest1 = q + 3072 * 1024;
		str_sjisconv.err0 = r = malloc(128 * 1024);
		str_sjisconv.err1 = r + 128 * 1024 - 1;
		str_sjisconv.work0 = s = malloc(64 * 1024);
		str_sjisconv.work1 = s + 64 * 1024;
		i = sjisconv_main(&str_sjisconv);
		*(str_sjisconv.err0) = '\0';
		cputs(r, cons);
		free(r);
		if (str_sjisconv.outname == NULL) {
			*(str_sjisconv.dest0) = '\0';
			cputs(q, cons);
		} else {
			if (osaout(str_sjisconv.outname, str_sjisconv.dest0 - q, q)) {
				cputs("[ERROR : can't output file.]\n", cons);
				err = 1;
			}
		}
		free(s); /* outnameがあるのでこのタイミングでfreeする */
		free(q);
		goto put_termcode;
	}


	return -1;
}

void setosaname(UCHAR *f)
{
	int i;
	UCHAR c;
	for (i = 0; i < 8; i++)
		osaname[i] = ' ';
	osaname[9] = osaname[10] = osaname[11] = ' ';
	for (i = 0; i < 8; i++) {
		c = *f++;
		if (c == '\0')
			goto skip;
		if (c == '.')
			goto ext;
		if ('a' <= c && c <= 'z')
			c += 'A' - 'a';
		osaname[i] = c;
	}
	do {
		c = *f++;
		if (c == '\0')
			goto skip;
	} while (c != '.');
ext:
	for (i = 9; i < 12; i++) {
		c = *f++;
		if (c == '\0')
			goto skip;
		if ('a' <= c && c <= 'z')
			c += 'A' - 'a';
		osaname[i] = c;
	}
skip:
	return;
}

int osaopen(UCHAR *f, int slot, int opt)
{
	int sig;

	setosaname(f);
	lib_initmodulehandle0(0x0008, slot); /* user-dirに初期化 */
	lib_steppath0(opt, slot, osaname, 16 /* sig */);

	do {
		sig = getsignalw();
		if (128 <= sig && sig <= 255) {
			/* コンソールへの入力 */
			cons_keyin(stdin, sig - 128);
		}
	} while (sig < 16 || 32 <= sig);

	return sig != 16;
}

int osamap(UCHAR *f, int slot, int limit, UCHAR *fp, int opt, int rw)
{
	int size;
	if (osaopen(f, slot, opt))
		return -1;
	size = lib_readmodulesize(slot);
	if (size > limit)
		return -1;
	lib_mapmodule(0x0000, slot, rw, limit, fp, 0);
	return size;
}

UCHAR *osain(UCHAR *f, int *size)
{
	if (strcmp(f, "memtemp0") == 0) {
		*size = mt_size0;
		return memtemp0;
	}
	if (strcmp(f, "memtemp1") == 0) {
		*size = mt_size1;
		return memtemp1;
	}

	UCHAR *fp = (UCHAR *) lib_readCSd(0x0010);
	if (osaopen(f, 0x220, 0))
		return NULL;
	*size = lib_readmodulesize(0x220);
	if (*size > 512 * 1024)
		return NULL;
	lib_mapmodule(0x0000, 0x220, 5, 512 * 1024, fp, 0);
	return fp;
}

void osaunmap()
{
	lib_unmapmodule(0, 512 * 1024, lib_readCSd(0x0010));
	return;
}

int osaout(UCHAR *f, int size0, UCHAR *buf)
{
	UCHAR *fp = (UCHAR *) lib_readCSd(0x0010);
	int size1 = 0, i;
	for (i = 0; i < size0; i++) {
		if (buf[i] == '\r')
			continue;
		if (buf[i] == '\n')
			size1++;
		size1++;
	}
	if (strcmp(f, "memtemp0") == 0) {
		if (size1 > SIZ_MEMTEMP)
			goto err;
		fp = memtemp0;
		mt_size0 = size1;
		goto skip;
	}
	if (strcmp(f, "memtemp1") == 0) {
		if (size1 > SIZ_MEMTEMP)
			goto err;
		fp = memtemp1;
		mt_size1 = size1;
		goto skip;
	}
	if (size1 > 512 * 1024)
		goto err;
	if (osaopen(f, 0x220, 1)) {
err:
		return -1;
	}
	lib_resizemodule(0, 0x0220, size1, 16);
	do {
		i = getsignalw();
		if (128 <= i && i <= 255) {
			/* コンソールへの入力 */
			cons_keyin(stdin, i - 128);
		}
	} while (i < 16 || 32 <= i);
	if (i != 16)
		goto err;
	if (size1 != lib_readmodulesize(0x220))
		goto err;
	lib_mapmodule(0x0000, 0x220, 7, 512 * 1024, fp, 0);
skip:
	for (i = 0; i < size0; i++) {
		if (buf[i] == '\r')
			continue;
		if (buf[i] == '\n')
			*fp++ = '\r';
		*fp++ = buf[i];
	}
	lib_unmapmodule(0, 512 * 1024, lib_readCSd(0x0010));
	lib_initmodulehandle0(0x0008, 0x220); /* user-dirに初期化 */

	return 0;
}

int osaoutb(UCHAR *f, int size, UCHAR *buf)
{
	UCHAR *fp = (UCHAR *) lib_readCSd(0x0010);
	int i;
	if (strcmp(f, "memtemp0") == 0) {
		if (size > SIZ_MEMTEMP)
			goto err;
		fp = memtemp0;
		mt_size0 = size;
		goto skip;
	}
	if (strcmp(f, "memtemp1") == 0) {
		if (size > SIZ_MEMTEMP)
			goto err;
		fp = memtemp1;
		mt_size1 = size;
		goto skip;
	}
	if (size > 512 * 1024)
		goto err;
	if (osaopen(f, 0x220, 1)) {
err:
		return -1;
	}
	/* -osacmp対策  一度ファイルサイズを0にする */
	lib_resizemodule(0, 0x0220, 0, 16);
	do {
		i = getsignalw();
		if (128 <= i && i <= 255) {
			/* コンソールへの入力 */
			cons_keyin(stdin, i - 128);
		}
	} while (i < 16 || 32 <= i);
	if (i != 16)
		goto err;
	if (lib_readmodulesize(0x220) != 0)
		goto err;
	/* 以降は通常 */
	lib_resizemodule(0, 0x0220, size, 16);
	do {
		i = getsignalw();
		if (128 <= i && i <= 255) {
			/* コンソールへの入力 */
			cons_keyin(stdin, i - 128);
		}
	} while (i < 16 || 32 <= i);
	if (i != 16)
		goto err;
	if (size != lib_readmodulesize(0x220))
		goto err;
	lib_mapmodule(0x0000, 0x220, 7, 512 * 1024, fp, 0);
skip:
	for (i = 0; i < size; i++) {
		*fp++ = buf[i];
	}
	lib_unmapmodule(0, 512 * 1024, lib_readCSd(0x0010));
	lib_initmodulehandle0(0x0008, 0x220); /* user-dirに初期化 */

	return 0;
}

static int getsignalw()
/* 0が返されたら、シグナルなし */
{
    int signal;
	lib_waitsignal(0x0001, 0, 0);
	if (*sig_ptr == REWIND_CODE) {
		/* REWINDシグナルを受け取った */
		/* 直後の値の分だけシグナルを処理したことにして、ポインタを先頭に戻す */
		lib_waitsignal(0x0000, *(sig_ptr + 1), 0);
		sig_ptr = signalbox0;
	}
	signal = *sig_ptr++;
	/* １シグナル受け取ったことをライブラリに通知 */
	lib_waitsignal(0x0000, 1, 0);
	return signal;
}

void waitready(struct CONSOLE *cons)
/* 入力が完了するのを待つ */
{
	if (!cons_readyinput(cons)) {
		cons_cursoron(cons);
		do {
			int sig = getsignalw();
			if (128 <= sig && sig <= 255) {
				/* コンソールへの入力 */
				cons_keyin(cons, sig - 128);
			}
		} while (!cons_readyinput(cons));
		cons_cursoroff(cons);
	}
	return;
}


/* 簡易コンソールライブラリ ver.0.0 */

/* ここから下は、別ソースにわけてライブラリ化した方がよいだろう。 */
/* しかし分割コンパイルについて説明を書くのが面倒なので、
	ここでは分けずに書いた。 */

#define	CONS_IBUFSIZ	1024
#define	CONS_EBUFSIZ	  64

#if 0 /* lmtが2のべきでなくても使えるマクロ */

	#define	CONS_MACRO_INCPTR(ptr, lmt)	\
		if (++ptr == lmt) ptr = 0

	#define	CONS_MACRO_DECPTR(ptr, lmt)	\
		if (--ptr < 0) ptr = lmt - 1

#endif

#if 1 /* lmtが2のべきの時だけ使えるマクロ */

	#define	CONS_MACRO_INCPTR(ptr, lmt)		ptr = (ptr + 1) & (lmt - 1)
	#define	CONS_MACRO_DECPTR(ptr, lmt)		ptr = (ptr - 1) & (lmt - 1)

#endif

struct CONSOLE *copen(const int x_size, const int y_size,
	struct LIB_WINDOW *window, const int x0, const int y0, const int color, const int backcolor)
/* コンソール初期化 */
{
	struct CONSOLE *cons = (struct CONSOLE *) malloc(sizeof (struct CONSOLE));
	int i, j;
	char *p;
	cons->textbox = lib_opentextbox((backcolor >= 0) ? 0x0001 : 0x0000, 0,
		(backcolor >= 0) ? backcolor : 0, x_size, y_size, x0, y0, window, 0x00c0, 0);
	cons->x_size = x_size;
	cons->y_size = y_size;
	cons->color = color;
	cons->cons_buf  = (char *) malloc((x_size + 1) * (y_size + 1));
	cons->input_buf = (char *) malloc(CONS_IBUFSIZ);
	cons->echo_buf  = (char *) malloc(CONS_EBUFSIZ);
	cons->x_cur = 0;
	cons->y_cur = 0;
	cons->ibuf_rptr = 0;
	cons->ibuf_wptr = 0;
	cons->ebuf_rptr = 0;
	cons->ebuf_wptr = 0;
	cons->curflag = 0;
	p = cons->cons_buf;
	for (i = 0; i < y_size + 1; i++) {
		for (j = 0; j < x_size; j++)
			*p++ = ' ';
		*p++ = '\0';
	}
	return cons;
}

void cons_sub_putcursor(struct CONSOLE *cons)
{
	lib_putstring_ASCII(0x0000, cons->x_cur, cons->y_cur, cons->textbox, cons->color, 0, "_");
	return;
}

void cons_sub_erasecursor(struct CONSOLE *cons)
{
	lib_putstring_ASCII(0x0000, cons->x_cur, cons->y_cur, cons->textbox, cons->color, 0, " ");
	return;
}

void cons_sub_scroll(struct CONSOLE *cons)
/* スクロール */
{
	char *s, *d;
	int i, j, xsiz1 = cons->x_size + 1;
	d = cons->cons_buf;
	s = d + cons->x_size + 1;
	for (i = 0; i < cons->y_size; i++) {
		for (j = 0; j < xsiz1; j++)
			*d++ = *s++;
		lib_putstring_ASCII(0x0000, 0, i, cons->textbox, cons->color, 0, d);
	}
	cons->y_cur--;
	return;
}

void cputc(int c, struct CONSOLE *cons)
/* コンソール一文字出力 */
{
	if (c == '\r')
		goto skip;
	if (c == '\t')
		c = ' ';
	if (cons->curflag)
		cons_sub_erasecursor(cons);
	if (c == '\n') {
		cons->x_cur = 0;
		if (++cons->y_cur == cons->y_size)
			cons_sub_scroll(cons);
	} else {
		char s[2];
		cons->cons_buf[cons->y_cur * (cons->x_size + 1) + cons->x_cur] = s[0] = (unsigned char) c;
		s[1] = '\0';
		lib_putstring_ASCII(0x0000, cons->x_cur, cons->y_cur, cons->textbox, cons->color, 0, s);
		if (++cons->x_cur == cons->x_size) {
			cons->x_cur = 0;
			if (++cons->y_cur == cons->y_size)
				cons_sub_scroll(cons);
		}
	}
	if (cons->curflag)
		cons_sub_putcursor(cons);
skip:
	return;
}

#if 0 /* コンパクト版 */

void cputs(const unsigned char *str, struct CONSOLE *cons)
/* コンソールストリング出力 */
{
	while (*str)
		cputc(cons, (int) *str++);
	return;
}

#endif

#if 1 /* 高速版 */

void cputs(const unsigned char *str, struct CONSOLE *cons)
/* コンソールストリング出力 */
{
	unsigned char c;

	if (cons->curflag)
		cons_sub_erasecursor(cons);

	while (c = *str++) {
		if (c == '\t')
			c = ' ';
		if (c == '\r')
			continue;
		if (c == '\n') {
			cons->x_cur = 0;
			if (++cons->y_cur == cons->y_size)
				cons_sub_scroll(cons);
		} else {
			int x_cur = cons->x_cur, x_size = cons->x_size;
			char *b = &cons->cons_buf[cons->y_cur * (x_size + 1) + x_cur];
			do {
				*b++ = c;
				x_cur++;
				if (x_cur == x_size) {
					lib_putstring_ASCII(0x0000, 0, cons->y_cur, cons->textbox,
						cons->color, 0, &cons->cons_buf[cons->y_cur * (x_size + 1)]);
					b++;
					x_cur = 0;
					if (++cons->y_cur == cons->y_size) {
						cons_sub_scroll(cons);
						b -= x_size + 1;
					}
				}
				c = *str++;
			} while (c != '\0' && c != '\n');
			lib_putstring_ASCII(0x0000, 0, cons->y_cur, cons->textbox,
				cons->color, 0, &cons->cons_buf[cons->y_cur * (x_size + 1)]);
			cons->x_cur = x_cur;
			str--;
		}
	}

	if (cons->curflag)
		cons_sub_putcursor(cons);

	return;
}

#endif

void cons_cursoron(struct CONSOLE *cons)
/* カーソル表示ON */
{
	cons->curflag = 1;
	cons_sub_putcursor(cons);

	while (cons->ebuf_wptr != cons->ebuf_rptr) {
		/* カーソル非表示中の入力をエコーバック */
		cons_keyin(cons, cons->echo_buf[cons->ebuf_rptr]);
		CONS_MACRO_INCPTR(cons->ebuf_rptr, CONS_EBUFSIZ);
	}

	return;
}

void cons_cursoroff(struct CONSOLE *cons)
/* カーソル表示OFF */
{
	cons->curflag = 0;
	cons_sub_erasecursor(cons);
	return;
}

const int cons_keyin(struct CONSOLE *cons, int c)
/* コンソールへの一文字入力 */
/* 入力がバッファに入らなかった場合は、非零を返す */
{
	if (cons->curflag) {
		/* カーソル表示中 */
		int wp = cons->ibuf_wptr;
		if (c == '\b' /* back space */) {
			if (wp != cons->ibuf_rptr && cons->input_buf[wp - 1] != '\n'
				&& (cons->x_cur | cons->y_cur) != 0) {
				CONS_MACRO_DECPTR(wp, CONS_IBUFSIZ);
				cons->ibuf_wptr = wp;
				cons_sub_erasecursor(cons);
				if (cons->x_cur) {
					cons->x_cur--;
				} else {
					cons->y_cur--;
					cons->x_cur = cons->x_size - 1;
				}
				cons->cons_buf[cons->y_cur * (cons->x_size + 1) + cons->x_cur] = ' '; // bugfix(2001.05.22 H.Kawai)
				cons_sub_putcursor(cons);
				return 0;
			}
		} else {
			CONS_MACRO_INCPTR(wp, CONS_IBUFSIZ);
			if (wp != cons->ibuf_rptr) {
			//	cons_sub_erasecursor(cons);
				cputc(c, cons);
				cons->input_buf[cons->ibuf_wptr] = (unsigned char) c;
				cons->ibuf_wptr = wp;
				cons_sub_putcursor(cons);
				return 0;
			}
		}
	} else {
		/* カーソル非表示中 */
		int wp = cons->ebuf_wptr;
		CONS_MACRO_INCPTR(wp, CONS_EBUFSIZ);
		if (wp != cons->ebuf_rptr) {
			cons->echo_buf[cons->ebuf_wptr] = (unsigned char) c;
			cons->ebuf_wptr = wp;
			return 0;
		}
	}

	return 1;
}

const int cons_readycgetc(struct CONSOLE *cons)
/* input_bufが空でなければ非零を返す */
{
	return cons->ibuf_wptr != cons->ibuf_rptr;
}

const int cons_readycgets(struct CONSOLE *cons)
/* inbut_bufに'\n'が含まれていれば非零を返す */
{
	int r = cons->ibuf_rptr;
	while (r != cons->ibuf_wptr) {
		if (cons->input_buf[r] == '\n')
			return 1;
		if (++r == CONS_IBUFSIZ)
			r = 0;
	}
	return 0;
}

const int cgetc(struct CONSOLE *cons)
/* コンソールからの一文字入力 */
{
	int c;
	if (cons->ibuf_wptr == cons->ibuf_rptr)
		return -1;
	c = cons->input_buf[cons->ibuf_rptr];
	CONS_MACRO_INCPTR(cons->ibuf_rptr, CONS_IBUFSIZ);
	return c;
}

void cgets(unsigned char *str, int n, struct CONSOLE *cons)
/* コンソールからの一行入力 */
{
	int rp = cons->ibuf_rptr;
	n--;
	while (rp != cons->ibuf_wptr) {
		char c = *str++ = cons->input_buf[rp];
		CONS_MACRO_INCPTR(rp, CONS_IBUFSIZ);
		if (c == '\n' || --n == 0)
			break;
	}
	*str = '\0';
	cons->ibuf_rptr = rp;
	return;
}

const int cungetc(const int c, struct CONSOLE *cons)
{
	int rp = cons->ibuf_rptr;
	CONS_MACRO_DECPTR(rp, CONS_IBUFSIZ);
	if (rp == cons->ibuf_wptr)
		return -1;
	cons->input_buf[rp] = (unsigned char) c;
	cons->ibuf_rptr = rp;
	return c;
}

/* GOL_sysabortとかは、cc1main.cのほうにある */

#define	NL			"\r\n"
#define	LEN_NL		2

int DRVOSA_errcode;

void GOLD_exit(int status)
{
	DRVOSA_errcode = status;
	GOL_sysabort(GO_TERM_NORMAL);
}

UCHAR *DRVOSA_dest0_, *DRVOSA_dest1_, *DRVOSA_msgptr, *DRVOSA_msgptr1;

void DRVOSA_msgout0(int l, UCHAR *s)
{
	if (DRVOSA_msgptr + l > DRVOSA_msgptr1)
		GOL_sysabort(GO_TERM_ERROVER);
	while (l--)
		*DRVOSA_msgptr++ = *s++;
	return;
}

void DRVOSA_msgout(UCHAR *s)
{
	DRVOSA_msgout0(strlen(s), s);
	return;
}

void DRVOSA_errout(UCHAR *s)
{
	DRVOSA_msgout(s);
	GOLD_exit(1);
}

void DRVOSA_errout_s_NL(UCHAR *s, UCHAR *t)
{
	DRVOSA_msgout(s);
	DRVOSA_msgout(t);
	DRVOSA_msgout(NL);
	GOLD_exit(1);
}

void DRVOSA_output(UINT l, UCHAR *s)
{
	if (l) {
		if (DRVOSA_dest0_ + l >= DRVOSA_dest1_)
			DRVOSA_dest0_ = NULL;
		if (DRVOSA_dest0_) {
			do {
				*DRVOSA_dest0_++ = *s++;
			} while (--l);
		}
	}
	return;
}
