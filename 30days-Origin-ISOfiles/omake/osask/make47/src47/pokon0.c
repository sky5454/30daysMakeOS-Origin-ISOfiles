/* "pokon0.c":アプリケーションラウンチャー  ver.4.7
     copyright(C) 2004 I.Tak., 小柳雅明, 川合秀実
     stack:1m malloc:90k file:4096k */

/* scrollbar & mouse by I.Tak. */
/* シグナル受信通知を*sbp==0のときに一回だけする……ほとんど意味無し
   描画処理を抑えるための第一歩です */
#define PROCESS_ALL_POOLED_SIGNAL	1
#if defined(CHO_OSASK)
	#define LISTX0 16
	#define LISTY0 32
	#define LISTW (8*16)
	#define LISTH (16*8)
	#define SBARX0 (16+16*8)
	#define SBARY0 30
	#define SBARW 16
	#define SBARH (16*8+4)
	#define SBARC 7
	#define SBARBC 8
#elif defined(WIN9X) || defined(WIN31) || defined(NEWSTYLE)
	#define LISTX0 8
	#define LISTY0 32
	#define LISTW (8*16)
	#define LISTH (16*8)
	#define SBARX0 (8+16*8)
	#define SBARY0 48
	#define SBARW 17
	#define SBARH (16*8+2-17*2)
	#define SBARC 8
	#define SBARBC 8
#elif defined(TMENU)
	#define LISTX0 16
	#define LISTY0 32
	#define LISTW (8*16)
	#define LISTH (16*8)
	#define SBARX0 (16+16*8+1)
	#define SBARY0 46
	#define SBARW 15
	#define SBARH (16*8-15*2+1)
	#define SBARC 15
	#define SBARBC 14
#endif

#define LISTX1 (LISTW -1 + LISTX0)
#define LISTY1 (LISTH -1 + LISTY0)
#define SBARX1 (SBARX0+SBARW -1)
#define SBARY1 (SBARY0+SBARH -1)

#include <guigui00.h>
#include <sysgg00.h>
/* sysggは、一般のアプリが利用してはいけないライブラリ
   仕様もかなり流動的 */
#include <stdlib.h>

#include "../pokon0.h"

#define POKON_VERSION "pokon47"

#define POKO_VERSION "Heppoko-shell \"poko\" version 2.7\n    Copyright (C) 2004 OSASK Project\n"
#define POKO_PROMPT "\npoko>"

#define	FILEAREA		(4 * 1024 * 1024)

//static int MALLOC_ADDR;
#define MALLOC_ADDR			j
#define malloc(bytes)		(void *) (MALLOC_ADDR -= ((bytes) + 7) & ~7)
#define free(addr)			for (;;); /* freeがあっては困るので永久ループ */

/* pokon console error message */
enum {
	ERR_CODE_START = 1,
	ERR_BAD_COMMAND = ERR_CODE_START,
	ERR_ILLEGAL_PARAMETERS,
};

const static char *pokon_error_message[] = {
	"\nBad command.\n",
	"\nIllegal parameter(s).\n",
};

#define MAX_VIEWERS				30

static struct STR_JOBLIST job;
static struct STR_VIEWER viewers[MAX_VIEWERS] = {
	{ "***", "BEDITC00BIN" },
	{ "TXT", "TEDITC02BIN", 2, 0x7f000001, 42 },
	{ "BMP", "PICTURE0BIN" },
	{ "JPG", "PICTURE0BIN" },
	{ ".B ", "BEDITC00BIN" },
	{ "..S", "RESIZER0BIN" },
	{ ".T ", "TEDITC02BIN", 2, 0x7f000001, 42 },
	{ ".P ", "CMPTEK0 BIN" },
	{ ".U ", "MCOPYC1 BIN" },
	{ "HEL", "HELO    BIN" },
	{ "MML", "MMLPLAY BIN" },
	{ "WRP", "WABA    BIN" },
	{ "SH1", "SHIBAI1 BIN" }
};

typedef unsigned char UCHAR;

struct STR_BANK *banklist;
struct SGG_FILELIST *file;
struct FILEBUF *filebuf;
static int defaultIL = 2;
static struct FILESELWIN *selwin0;
static unsigned char *pselwincount;
static struct VIRTUAL_MODULE_REFERENCE *vmref0;
static int need_wb, readCSd10;
static int sort_mode = DEFAULT_SORT_MODE;
static signed char *pfmode;
static signed char auto_decomp = 1, auto_dearc = 1;
static struct STR_ARCBUF *arcbuf;

//static struct STR_CONSOLE console = { -1, 0, 0, NULL, NULL, NULL, NULL, 0, 0, 0 };
static struct STR_CONSOLE *console;

struct FILEBUF *searchfbuf(struct SGG_FILELIST *fp);
struct FILEBUF *check_wb_cache(struct FILEBUF *fbuf);
struct STR_BANK *run_viewer(struct STR_VIEWER *viewer, struct SGG_FILELIST *fp2);
void runfile(struct SGG_FILELIST *fp, char *name);
struct SGG_FILELIST *searchfid1(const unsigned char *s);
struct FILEBUF *searchfrefbuf();
struct STR_ARCBUF *arcsub_getfree();
struct STR_ARCBUF *arcsub_srchdslt(int dirslot);
void arcsub_unlink(struct STR_ARCBUF *arc);
int arcsub_gethex(unsigned char *p);
unsigned char *arcsub_srchname0(struct STR_ARCBUF *arc, unsigned char *p, unsigned char *name, unsigned int *siz, unsigned int *ofs);
unsigned char *arcsub_srchname1(struct STR_ARCBUF *arc, unsigned char *p, unsigned char *name);
unsigned char *arcsub_srchnum(struct STR_ARCBUF *arc, unsigned char *p, int num);
void arcsub_map(struct STR_ARCBUF *arc, unsigned char *fp0);
void arcsub_unmap(struct STR_ARCBUF *arc, unsigned char *fp0);
int osarjc(int siz, UCHAR *p0);

//static struct FILEBUF **large_cache;

#if (defined(PCAT))
	#define	LASTPCIBUS	255
	struct STR_VBEMODE { /* 16bytes */
		unsigned int linear, linebytes;
		unsigned short x_res, y_res, mode;
		unsigned char flag, dummy;
	};
	static struct STR_VBEMODE vbebuf[128];
#endif

int writejob_np(int n, int *p)
{
	struct STR_JOBLIST *pjob = &job;
	if (pjob->free >= n) {
		do {
			*(pjob->wp)++ = *p++;
			pjob->free--;
			if (pjob->wp == pjob->list + JOBLIST_SIZE)
				pjob->wp = pjob->list;
		} while (--n);
		*(pjob->wp) = 0; /* ストッパー */
		return 1;
	}
	return 0;
}

int writejob_n(int n, int p0, ...)
{
	return writejob_np(n, &p0);
}

int writejob_1(int p0)
{
	return writejob_n(1, p0);
}

int writejob_3p(int *p)
{
	return writejob_np(3, p);
}

const int readjob()
{
	struct STR_JOBLIST *pjob = &job;
	int i = *(pjob->rp)++;
	pjob->free++;
	if (pjob->rp == pjob->list + JOBLIST_SIZE)
		pjob->rp = pjob->list;
	return i;
}

#define	sgg_debug00(opt, bytes, reserve, src_ofs, src_sel, dest_ofs, dest_sel) \
	sgg_execcmd0(0x8010, (int) (opt), (int) (bytes), (int) (reserve), \
	(int) (src_ofs), (int) (src_sel), (int) (dest_ofs), (int) (dest_sel), \
	0x0000)

void sendsignal1dw(int task, int sig)
{
	sgg_execcmd0(0x0020, 0x80000000 + 3, task | 0x0242, 0x7f000001, sig, 0x0000);
	return;
}

void unlinkfbuf(struct FILEBUF *fbuf)
{
	int dirslot;
	arcsub_unlink(fbuf->arcbuf);
	if (--fbuf->linkcount == 0) {
		if (fbuf->arcbuf == NULL) {
			dirslot = fbuf->dirslot;
			if (fbuf->readonly)
				dirslot = -1;
			if (fbuf->size > 0) {
				if (dirslot == -1)
					sgg_execcmd0(0x0020, 0x80000000 + 5, 0x1244, 0x0134, -1, fbuf->size, fbuf->paddr, 0x0000);
				else if (writejob_n(4, JOB_FREE_MEMORY, dirslot, fbuf->size, fbuf->paddr) == 0) {
					/* どうすりゃいいんだ？ */
				}
			}
		}
		fbuf->dirslot |= -1;
		sgg_execcmd0(0x0074, 0, fbuf->virtualmodule, 0x0000); /* virtualmoduleの破棄 */
		fbuf->readonly = 0;
	}
	return;
}

struct STR_BANK *searchfrebank()
{
	struct STR_BANK *bank = banklist;
	int i;

	for (i = 0; i < MAX_BANK; i++, bank++) {
		if (bank->tss == 0) {
			bank->tss |= -1; /* リザーブマーク */
			return bank;
		}
	}
	return NULL;
}

struct SGG_FILELIST *searchfid(const unsigned char *s)
{
	char str[11];
	int i;
	for (i = 0; i < 11; i++) {
		if (i == 8)
			s++;
		str[i] = *s++;
	}
	return searchfid1(str);
}

struct SGG_FILELIST *searchfid1(const unsigned char *s)
{
	struct SGG_FILELIST *fp;
	unsigned char c;
	int i;

	for (fp = file + 1; fp->name[0]; fp++) {
		c = 0;
		for (i = 0; i < 11; i++)
			c |= s[i] - fp->name[i];
		if (c == 0)
			return fp;
	}
	return NULL;
}

void putselector0(struct FILESELWIN *win, const int pos, const char *str)
{
	lib_putstring_ASCII(0x0000, 0, pos, &win->selector.tbox, 0, 0, str);
	return;
}

void jsub_fbufready0(void *func);
int jsub_fbufready1(int *sbp);
void jsub_create_task0();
int jsub_create_task1(int *sbp);
void job_view_file0(int cond);
void job_view_file1(int cond);
void job_create_sysdisk0(int cond);
void job_create_sysdisk1(int cond);
void job_load_file0(int cond);
int job_resize_sub0(int *sbp);
void job_resize_sub1(int cond);
void job_resize_sub2(int cond);
void job_execute_cons0(int cond);
void job_execute_cons1(int cond);
void job_exec_psf_sub0(int cond);
int job_chgdev_sub0(int *sbp);

#define	ppj(member)		(PPJ_ ## member)

void autoreadjob(int i, ...)
{
	int *p = &i;
	for (;;) {
		i = *p++;
		if (i == 0)
			return;
		((int *) &job)[i] = readjob();
	}
}

void runjobnext()
{
	struct STR_JOBLIST *pjob = &job;
	struct FILEBUF *fbuf;
	struct VIRTUAL_MODULE_REFERENCE *vmr;
	int i, j;
	do {
		if ((pjob->now = *(pjob->rp)) == 0)
			return;

		readjob(); // から読み
		switch (pjob->now) {

		case JOB_INVALID_DISKCACHE:
			if (need_wb == 0) {
				sgg_format(0x0114, SIGNAL_RELOAD_FAT_COMPLETE);
				break;
			}
	job_end:
			pjob->now = 0;
			break;

		case JOB_LOAD_FILE_AND_EXECUTE:
			autoreadjob(ppj(fp), ppj(fbuf), ppj(bank), 0);
		//	pjob->retfunc = job_execute_file0;
		//	pjob->retfunc = job_view_file0;
			pjob->param[7] = 0;
			jsub_fbufready0(job_view_file0);
			break;

		case JOB_LOAD_FILE:
			autoreadjob(ppj(fbuf), ppj(win), ppj(prm0) /* tss */, ppj(fp), 0);
			if (pjob->fp == NULL) {
				if ((pjob->fp = pjob->fp__) == NULL) {
					pjob->now = 0;
					break;
				}
			}
		//	pjob->retfunc = job_load_file0;
			jsub_fbufready0(job_load_file0);
			break;

		case JOB_LOAD_FILE_AND_FORMAT:
			autoreadjob(ppj(fp), ppj(fbuf), ppj(prm1) /* fbuf */, 0);
			pjob->param[0] = (int) pjob->fbuf;
		//	pjob->retfunc = job_create_sysdisk0;
			pjob->win = &selwin0[0];
			jsub_fbufready0(job_create_sysdisk0);
			break;

		case JOB_VIEW_FILE:
			autoreadjob(ppj(fp), ppj(fbuf), ppj(bank), 0);
			for (i = 0; i < 6; i++)
				pjob->param[i] = readjob();
		//	pjob->retfunc = job_view_file0;
			pjob->param[7] = 1;
			jsub_fbufready0(job_view_file0);
			break;

		case JOB_CHECK_WB_CACHE:
			if (check_wb_cache(filebuf) == NULL) /* 終了したらNULLを返す */
				goto job_end;
			break;

		case JOB_WRITEBACK_CACHE:
			sgg_execcmd0(0x0020, 0x80000000 + 6, 0x1245, 0x0140, 0x4243 /* to pokon0 */, 0x7f000002, SIGNAL_NO_WB_CACHE, 0, 0x0000);
			break;

		case JOB_INVALID_WB_CACHE:
			sgg_execcmd0(0x0020, 0x80000000 + 6, 0x1245, 0x0144, 0x4243 /* to pokon0 */, 0x7f000002, SIGNAL_NO_WB_CACHE, 0, 0x0000);
			break;

		case JOB_FREE_MEMORY:
			autoreadjob(ppj(prm0), ppj(prm1), ppj(prm2), 0); /* fileid, size, addr */
			sgg_execcmd0(0x0020, 0x80000000 + 5, 0x1244, 0x0134, pjob->param[0], pjob->param[1], pjob->param[2], 0x0000);
			goto job_end;

		case JOB_CREATE_FILE:
			autoreadjob(ppj(prm0), ppj(prm1), ppj(prm2), ppj(prm6), ppj(prm7), 0);
				/* filename(0-2), task, signal */
			if (searchfid((char *) pjob->param) == NULL) {
				sgg_execcmd0(0x0020, 0x80000000 + 9, 0x1248, 0x0148, pjob->param[0], pjob->param[1], pjob->param[2] >> 8,
					0x4243 /* to pokon0 */, 0x7f000002, SIGNAL_REFRESH_FLIST, 0, 0x0000);
				break;
			}
	errorsignal:
			if (pjob->param[6])
				sendsignal1dw(pjob->param[6], pjob->param[7] + 1);
			goto job_end;

		case JOB_RENAME_FILE:
			for (i = 0; i < 8; i++)
				pjob->param[i] = readjob(); /* filename0(0-2), filename1(3-5), task, signal */
			if (searchfid((char *) &pjob->param[0]) == NULL)
				goto errorsignal;
			if (searchfid((char *) &pjob->param[3]) != NULL)
				goto errorsignal;
			sgg_execcmd0(0x0020, 0x80000000 + 12, 0x124b, 0x014c,
				pjob->param[0], pjob->param[1], pjob->param[2] >> 8,
				pjob->param[3], pjob->param[4], pjob->param[5] >> 8,
				0x4243 /* to pokon0 */, 0x7f000002, SIGNAL_REFRESH_FLIST, 0, 0x0000);
			break;

		case JOB_RESIZE_FILE:
			/* 2002.05.28 サイズ0のファイルを単純にリサイズするとごみを拾って混乱するバグを克服するために、
				2段階のサイズ変更を実施。0→1→目的サイズ。しかも1のときバイトを0xccにする。 */
			autoreadjob(ppj(prm0), ppj(prm1), ppj(prm2), ppj(prm3), ppj(prm4), ppj(prm6), ppj(prm7), 0);
				/* filename(0-2), new-size, max-linkcount, task, signal */
			if ((pjob->fp = searchfid((char *) &pjob->param[0])) == NULL)
				goto errorsignal;
			fbuf = searchfbuf(pjob->fp);
			j = pjob->param[3];
			i = 0;
			if (fbuf) {
				i = fbuf->linkcount;
				if (fbuf->readonly != 0 && j > 0)
					goto errorsignal;
			}
			if (i > pjob->param[4])
				goto errorsignal;
			if (j > 0 && fbuf == NULL) {
				pjob->fbuf = searchfrefbuf();
				jsub_fbufready0(job_resize_sub2);
				break;
			}
			i = SIGNAL_REFRESH_FLIST0;
			if (pjob->fp->size == 0) {
				i = SIGNAL_JSUB;
				j = 1;
			}
			pjob->jsubfunc = job_resize_sub0;
			sgg_execcmd0(0x0020, 0x80000000 + 10, 0x1249, 0x0150,
				pjob->param[0], pjob->param[1], pjob->param[2] >> 8, j, 
				0x4243 /* to pokon0 */, 0x7f000002, i, 1 /* 正常終了が-1だから */, 0x0000);
			break;

		case JOB_DELETE_FILE:
			autoreadjob(ppj(prm0), ppj(prm1), ppj(prm2), ppj(prm4), ppj(prm6), ppj(prm7), 0);
				/* filename(0-2), max-linkcount, task, signal */
			if ((pjob->fp = searchfid((char *) &pjob->param[0])) == NULL)
				goto errorsignal;
			fbuf = searchfbuf(pjob->fp);
			i = 0;
			if (fbuf)
				i = fbuf->linkcount;
			if (i > pjob->param[4])
				goto errorsignal;
			sgg_execcmd0(0x0020, 0x80000000 + 9, 0x1248, 0x0154,
				pjob->param[0], pjob->param[1], pjob->param[2] >> 8,
				0x4243 /* to pokon0 */, 0x7f000002, SIGNAL_REFRESH_FLIST, 0, 0x0000);
			break;

//		case JOB_LOAD_FILE_AND_EXEC_CONS:
//			autoreadjob(ppj(fp), ppj(fbuf), ppj(bank), 0);
//			pjob->param[7] = 2;
//			jsub_fbufready0(job_view_file0);
//			break;

		case JOB_EXT_OPEN:
			/* fbuf, bank, vmr, slot */
			autoreadjob(ppj(fbuf), ppj(bank), 0);
			vmr = (struct VIRTUAL_MODULE_REFERENCE *) readjob();
			i = readjob();
			vmr->task = 0;
			if (pjob->bank->tss >= 0x1000) {
				vmr->task = pjob->bank->tss;
				vmr->fbuf = pjob->fbuf;
				vmr->slot = i;
				vmr->flags = 1; /* module signal enable */
				vmr->sigbase = 16; /* 暫定 */
				vmr->flushed_size = 0; /* 暫定 */
				sgg_directwrite(0, 4, 0, i, /* スロットiに貼り付ける */
					(0x003c /* slot_sel */ | pjob->bank->tss << 8) + 0xf80000, (int) &pjob->fbuf->virtualmodule, 0x000c);
			} else {
lib_putstring_ASCII(0x0000, 0, 0, &selwin0[0].subtitle.tbox, 0, 0, "debug!(2)");

			}
			pjob->now = 0;
			break;

		case JOB_SEND_TEST_MODULE_SIGNAL:
			autoreadjob(ppj(bank), 0);
			if (pjob->bank->tss >= 0x1000) {
				sgg_execcmd0(0x0020, 0x80000000 + 5, pjob->bank->tss | 0x0244, 0x7f000003, 16, 14, 0, 0x0000);
				sgg_execcmd0(0x0020, 0x80000000 + 4, pjob->bank->tss | 0x0243, 0x7f000002, 17, 14, 0x0000);
			}
			pjob->now = 0;
			break;

		case JOB_SEARCH_FP:
			autoreadjob(ppj(win), ppj(prm0), ppj(prm1), ppj(prm2), 0);
			if ((pjob->fp__ = searchfid((char *) &pjob->param[0])) == NULL) {
				sendsignal1dw(pjob->win->task, pjob->win->sig[1] + 1);
				pjob->win->task = 0;
				(*pselwincount)--;
			}
			pjob->now = 0;
			break;

		case JOB_CHANGE_DRIVE:
			i = readjob();
			if (need_wb == 0) {
				sgg_execcmd0(0x009c, 0x190, i, 0x0000); /* 本当はこの方法は良くない */
					/* アクセスが競合するかもしれないから、本当ならシステムタスクを経由するべき */
				sgg_format(0x0114, SIGNAL_RELOAD_FAT_COMPLETE); /* INVALID_DISKCACHE */
				break;
			}
			pjob->now = 0;
			break;

		case JOB_LOAD_AND_EXEC_PSF:
			autoreadjob(ppj(prm0), ppj(prm1), ppj(prm2), 0);
			if (console->curx != -1) {
				pjob->now = 0; /* コンソールを開いていた */
				break; /* コンソールを開いた状態で実行するとみっともないので */
			}
			if ((pjob->fp = searchfid((char *) &pjob->param[0])) == NULL) {
				pjob->now = 0; /* ファイルがなかった */
				break;
			}
			if ((pjob->fbuf = searchfrefbuf()) == NULL) {
				pjob->now = 0; /* リソースがなかった */
				break;
			}
			jsub_fbufready0(job_exec_psf_sub0);
			break;

		case JOB_CHANGE_DEVICE:
			i = readjob();
			if (need_wb == 0) {
				sgg_execcmd0(0x009c, 0x194, i, 0x0000); /* 本当はこの方法は良くない */
					/* アクセスが競合するかもしれないから、本当ならシステムタスクを経由するべき */
				#if (defined(PCAT))
					if (0x0200 <= i && i <= 0x0208) {
						sgg_format(0x0158, SIGNAL_JSUB);
						pjob->jsubfunc = job_chgdev_sub0;
						break;
					}
				#endif
				sgg_format(0x0114, SIGNAL_RELOAD_FAT_COMPLETE); /* INVALID_DISKCACHE */
				break;
			}
			pjob->now = 0;
			break;
		}
	} while (pjob->now == 0);
	return;
}

/* jsub関数 */

void jsub_fbufready0(void *func)
/* pjob->fpで示されるファイルをpjob->fbufでアクセス可能な状態にする */
/* なお既にfbuf内に存在していた場合はpjob->fbufを書き換える(予備のものは自動開放) */
/* 完了したらpjob->retfuncを呼ぶ */
/* エラーのときはcond == 0になる。エラーの場合、unlinkの必要はない */
/* エラー時にはpjob->fbuf->linkcount = 0;になっているので、必要なら-1を再代入すること */
{
	struct STR_JOBLIST *pjob = &job;
	struct FILEBUF *fbuf;
	pjob->retfunc = func;
	if (fbuf = searchfbuf(pjob->fp)) {
		/* 確保しておいたやつを開放 */
		pjob->fbuf->linkcount = 0;
		pjob->fbuf = fbuf;
		fbuf->linkcount++;
		(*pjob->retfunc)(1); /* 成功 */
		return;
	}
	pjob->jsubfunc = jsub_fbufready1;
	sgg_execcmd0(0x0020, 0x80000000 + 8, 0x1247, 0x012c, pjob->fp->id,
		0x4244 /* to pokon0 */, 0x7f000003, SIGNAL_JSUB, 0, 0, 0x0000);
	return;
}

unsigned int gets7s(unsigned char **pp)
{
	unsigned char *p = *pp;
	unsigned int i = *p++;
	while ((i & 1) == 0)
		i = i << 7 | *p++;
	i >>= 1;
	*pp = p;
	return i;
}

int jsub_fbufready1(int *sbp)
{
	struct STR_JOBLIST *pjob = &job;
	struct FILEBUF *fbuf = pjob->fbuf;
	unsigned char *fp0 = (char *) readCSd10, *fp1, *p = fp0 + 16, *q;
	int retcond = 0;
	int i, j = 0, size0, size1, align, k;
	fbuf->paddr = sbp[1];
	fbuf->size = sbp[2];
	fbuf->linkcount = 0;
	if (fbuf->size != -1) {
		fbuf->linkcount++;
		fbuf->dirslot = pjob->fp->id;

		if (auto_decomp) {
			size0 = fbuf->size;
			if (size0 < FILEAREA / 2 && size0 >= 20) {
				static unsigned char signature[15] = "\xff\xff\xff\x01\x00\x00\x00OSASKCMP";
				fp1 = fp0 + (size0 = ((size0 + 0xfff) & ~0xfff));
				sgg_execcmd0(0x0080, size0, fbuf->paddr, fp0, 0x0000); /* スロットを使わないマッピング */
				for (i = 0; i < 15; i++)
					j |= fp0[i + 1] ^ signature[i];
				if (j == 0 && (fp0[0] == 0x82 || fp0[0] == 0x83 || fp0[0] == 0x85 || fp0[0] == 0x89)) {
					if (fp0[0] == 0x82)
						size1 = *((int *) (fp0 + 16));
					else
						size1 = gets7s(&p);
					if (size0 + size1 <= FILEAREA) {
						if ((i = sgg_execcmd1(2 * 4 + 12, 0x0084, size1, 0, 0x0000)) != -1) { /* メモリをもらう */
							sgg_execcmd0(0x0080, size1, i, fp1, 0x0000); /* スロットを使わないマッピング */
							if (fp0[0] == 0x82)
								lib_decodetek0(size1, (int) (fp0 + 20), 0x000c, (int) fp1, 0x000c);
							else
								lib_execcmd0(0x007c, 0xfffffff9, fp1, 0xfffffff7, fp0 + fbuf->size,
									*(int *) &fp0[0], size1, p, 0x000c, 0x0000, 0x0000);
							/* ↓圧縮されたイメージを捨てる */
							sgg_execcmd0(0x0020, 0x80000000 + 5, 0x1244, 0x0134, -1, fbuf->size, fbuf->paddr, 0x0000);
							fbuf->readonly = 1;
							fbuf->paddr = i;
							fbuf->size = size1;
						}
					}
				}
				/* unmapする */
			}
		}

		size0 = fbuf->size;
		if (size0 < FILEAREA && size0 >= 16) {
			fp1 = fp0 + (size0 = ((size0 + 0xfff) & ~0xfff));
			sgg_execcmd0(0x0080, size0, fbuf->paddr, fp0, 0x0000); /* スロットを使わないマッピング */
			fbuf->readonly |= osarjc(fbuf->size, fp0);
			/* unmapする */
		}

		if (auto_dearc) {
			static unsigned char signature[29] = "format_id:     \"OSASKARC0000\"";
			struct STR_ARCBUF *abuf;
			size0 = fbuf->size;
			if (size0 < FILEAREA) {
				sgg_execcmd0(0x0080, FILEAREA, fbuf->paddr, fp0, 0x0000); /* スロットを使わないマッピング */
				if (size0 >= 23 && (*(int *) &fp0[16]) == 0x484b0072 && (fp0[14] | fp0[15] << 8 | fp0[20] << 16 | fp0[21] << 24) == 0x30426173 && fp0[22] == 0x01) {
					p = fp0 + (14 + 9);
					goto sar;
				}
				if (size0 >= 9 && (*(int *) &fp0[0]) == 0x00726173 && (*(int *) &fp0[4]) == 0x3042484b && fp0[8] == 0x01) {
					p = fp0 + 9;
			sar:
					k = gets7s(&p);
					if ((k & ~1) == 0) {
						for (i = 0; i < 5; i++)
							gets7s(&p);
						align = (1 << gets7s(&p)) - 1;
						if (align >= 0xfff) { /* 4KB以上のアラインが必要 */
							j = gets7s(&p);
							q = fp0 + (((p - fp0) + align) & ~align) + j * (align + 1);
							j &= 0;
							for (i = 0; i < 29; i++)
								j |= q[i] ^ signature[i];
							for (i = 0; i < 8; i++)
								j |= (q[i + 0x030] ^ '0') | (q[i + 0x050] ^ '0');
							if (j == 0 && (q[0x0b5] & 0x01) != 0) { /* 最初のエントリが必ず主ファイル */
								abuf = arcsub_srchdslt(fbuf->dirslot);
								if (abuf) {
									abuf->linkcount++;
									sgg_execcmd0(0x0020, 0x80000000 + 5, 0x1244, 0x0134, -1, fbuf->size, fbuf->paddr, 0x0000);
									/* unmap */
									arcsub_map(abuf, fp0);
								} else {
									abuf = arcsub_getfree();
									if (abuf) {
										abuf->dirslot = fbuf->dirslot;
										abuf->linkcount = 1;
										abuf->size  = fbuf->size;
										abuf->paddr = fbuf->paddr;
										abuf->dir0  = p - fp0;
										abuf->info0 = q - fp0;
										abuf->clu2  = q - fp0;
										abuf->flags = k + k; /* bit0 : 0=sar, bit1:link */
										abuf->align = align;
										/* ここでアーカイブ内の全てのファイルに対して、osarjcする */
										while ((i = gets7s(&p)) != 0) {
											p += i; /* ファイル名スキップ */
											i = gets7s(&p); /* 属性 */
											if ((i & 0x20) == 0)
												gets7s(&p); /* 日時 */
											if (k & 1) {
												j = gets7s(&p);
												if (j & 1)
													j ^= -1;
												j >>= 1;
												q += j * (align + 1);
											}
											j = gets7s(&p); /* サイズ */
											if ((i & 0x1f) == 0)
												osarjc(j, q);
											q += j;
											q = fp0 + (((q - fp0) + align) & ~align);
										}
									}
								}
								if (abuf) {
									p = arcsub_srchname0(abuf, fp0, &fp0[abuf->info0 + 0x090], &fbuf->size, &fbuf->paddr);
									fbuf->paddr += abuf->paddr;
									fbuf->readonly = 1;
									fbuf->arcbuf = abuf;
									fbuf->dirslot = fbuf->paddr;
								}
							}
						}
					}
				}
				if (size0 >= 0x00050000 + 29 && fp0[0x00] != 0xcc && fp0[0x0b] == 0x00 && fp0[0x0c] == 0x02 && (*(int *) &fp0[0x40]) == 0x36314653) {
					j &= 0;
					for (i = 0; i < 29; i++)
						j |= fp0[i + 0x00050000] ^ signature[i];
					for (i = 0; i < 8; i++)
						j |= (fp0[i + 0x00050030] ^ '0') | (fp0[i + 0x00050050] ^ '0');
					if (j == 0 && (fp0[0x000500b5] & 0x01) != 0) { /* 最初のエントリが必ず主ファイル */
						abuf = arcsub_srchdslt(fbuf->dirslot);
						if (abuf) {
							abuf->linkcount++;
							sgg_execcmd0(0x0020, 0x80000000 + 5, 0x1244, 0x0134, -1, fbuf->size, fbuf->paddr, 0x0000);
							/* unmap */
							arcsub_map(abuf, fp0);
						} else {
							abuf = arcsub_getfree();
							if (abuf) {
								abuf->dirslot = fbuf->dirslot;
								abuf->linkcount = 1;
								abuf->size  = fbuf->size;
								abuf->paddr = fbuf->paddr;
								abuf->dir0  = 0x00048000;
								abuf->info0 = 0x00050000;
								abuf->clu2  = 0x00050000;
								abuf->flags |= 1; /* bit0 : 1=SF16 */
								abuf->align = fp0[0x0d];
								/* ここでアーカイブ内の全てのファイルに対して、osarjcする */
								for (p = fp0 + abuf->dir0; *p != 0; p += 32) {
									if (*p == 0xe5)
										continue;
									q = fp0 + abuf->clu2 + 512 * fp0[0x0d] * ((*(unsigned short *) &p[26]) - 2);
									osarjc(*(int *) &p[28], q);
								} 
							}
						}
						if (abuf) {
							arcsub_srchname0(abuf, fp0, &fp0[0x00050090], &fbuf->size, &fbuf->paddr);
							fbuf->readonly = 1;
							fbuf->paddr += abuf->paddr;
							fbuf->arcbuf = abuf;
							fbuf->dirslot = fbuf->paddr;
						}
					}
				}
				/* unmapする */
			}
		}

		fbuf->virtualmodule = sgg_createvirtualmodule(fbuf->size, fbuf->paddr);
		retcond++;
	}
	(*pjob->retfunc)(retcond);
	return 3; /* siglen */
}

void jsub_create_task0()
/* pjob->bankのみ参照 */
/* エラー時にはbank->tssが0になっているので、必要なら-1を代入すること */
{
	struct STR_JOBLIST *pjob = &job;
	struct FILEBUF *fbuf = pjob->bank->fbuf;
	pjob->jsubfunc = jsub_create_task1;
	sgg_createtask2(fbuf->size, fbuf->paddr, SIGNAL_JSUB);
	return;
}

int jsub_create_task1(int *sbp)
{
	struct STR_JOBLIST *pjob = &job;
	struct STR_BANK *bank = pjob->bank;
	int retcond = 0, tss, i;
	if (bank->tss = tss = sbp[1]) {
		retcond++;
		sgg_settasklocallevel(tss,
			0 * 32 /* local level 0 (スリープレベル) */,
			27 * 64 + 0x0100 /* global level 27 (スリープ) */,
			-1 /* Inner level */
		);
		bank->Llv[0].global = 27;
		bank->Llv[0].inner  |= -1;
		sgg_settasklocallevel(tss,
			1 * 32 /* local level 1 (起動・システム処理レベル) */,
			12 * 64 + 0x0100 /* global level 12 (一般アプリケーション) */,
			i = defaultIL /* Inner level */
		);
		bank->Llv[1].global = 12;
		bank->Llv[1].inner  = i;
		sgg_settasklocallevel(tss,
			2 * 32 /* local level 2 (通常処理レベル) */,
			12 * 64 + 0x0100 /* global level 12 (一般アプリケーション) */,
			i /* Inner level */
		);
		bank->Llv[2].global = 12;
		bank->Llv[2].inner  = i;
		sgg_runtask(tss, 1 * 32);
		bank->arcbuf = bank->fbuf->arcbuf;
		if (bank->arcbuf)
			bank->arcbuf->linkcount++;
	}
	(*pjob->retfunc)(retcond);
	return 2; /* siglen */
}

/* job関数 */

void job_view_file0(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	if (cond == 0) { /* error */
	//	pjob->fbuf->linkcount = 0; /* 開放 */
		pjob->now = 0;
		return;
	}
	pjob->bank->fbuf = pjob->fbuf;
	pjob->retfunc = job_view_file1;
	jsub_create_task0();
	return;
}

void job_view_file1(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	struct STR_OPEN_ORDER *order = pjob->order;
	if (cond == 0) { /* error */
		unlinkfbuf(pjob->fbuf);
	//	pjob->bank->tss = 0; /* 開放 */
	} else if (pjob->param[7] == 1) {
		while (order->task);
		order->task = pjob->bank->tss;
		order->num = pjob->param[0];
		order->fp = (struct SGG_FILELIST *) pjob->param[1];
		if (pjob->param[2]) {
			/* シグナルを送る */
			sendsignal1dw(pjob->bank->tss, pjob->param[4]);
		}
#if 0
	} else if (pjob->param[7] == 2) {
		/* console */
		int i;
		unsigned char *fp0 = (char *) readCSd10;
		struct FILEBUF *fbuf;
		struct VIRTUAL_MODULE_REFERENCE *vmr;

		/* モジュールを作る */
		fbuf = searchfrefbuf();
		if (fbuf == NULL)
			goto error;
		fbuf->size = 13;
		if ((fbuf->paddr = sgg_execcmd1(2 * 4 + 12, 0x0084, fbuf->size, 0, 0x0000)) == -1) /* メモリをもらう */
			goto error;
		fbuf->linkcount = 1;
		fbuf->dirslot = -1;
		fbuf->readonly = 0;
		fbuf->virtualmodule = sgg_createvirtualmodule(fbuf->size, fbuf->paddr);

		for (vmr = vmref0; vmr->task; vmr++);
		vmr->task = pjob->bank->tss;
		vmr->fbuf = fbuf;
		vmr->slot = 0x0200;

		sgg_directwrite(0, 4, 0, 0x0200, /* スロット0x0200に貼り付ける */
			(0x003c /* slot_sel */ | pjob->bank->tss << 8) + 0xf80000, (int) &fbuf->virtualmodule, 0x000c);

		sgg_execcmd0(0x0080, 13, fbuf->paddr, fp0, 0x0000); /* スロットを使わないマッピング */
		for (i = 0; i < 14; i++)
			fp0[i] = "This is test.\n"[i];

		/* シグナルを送る */
		sgg_execcmd0(0x0020, 0x80000000 + 5, pjob->bank->tss | 0x0244, 0x7f000003, 16, 14, 0, 0x0000);
		sgg_execcmd0(0x0020, 0x80000000 + 4, pjob->bank->tss | 0x0243, 0x7f000002, 17, 14, 0x0000);
#endif
	}
error:
	pjob->now = 0;
	return;
}

void job_create_sysdisk0(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	struct FILEBUF *fbuf = pjob->fbuf;
	#if (defined(PCAT))
		pjob->fp = searchfid1("OSASKBS1BIN");
	#elif (defined(TOWNS))
		pjob->fp = searchfid1("OSAIPLT0BIN");
	#elif (defined(NEC98))
		pjob->fp = searchfid1("OSAIPLN0BIN");
	#endif
	if (cond == 0)
		goto err;
	if (pjob->fp == NULL) { /* error */
		unlinkfbuf(pjob->fbuf);
err:
		*pfmode = STATUS_MAKE_PLAIN_BOOT_DISK;
		lib_putstring_ASCII(0x0000, 0, 0, &selwin0[0].subtitle.tbox, 0, 0, "< Load Systemimage >");
		pjob->now = 0;
	} else {
		pjob->param[0] = (int) fbuf; /* キャッシュヒットかもしれないから更新 */
		pjob->fbuf = (struct FILEBUF *) pjob->param[1];
	//	pjob->retfunc = job_create_sysdisk1;
		jsub_fbufready0(job_create_sysdisk1);
	}
	return;

}

void job_create_sysdisk1(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	struct FILESELWIN *win = pjob->win;
	int i;
	if (cond == 0) { /* error */
	//	pjob->fbuf->linkcount = 0; /* 開放 */
		unlinkfbuf((struct FILEBUF *) pjob->param[0]);
		*pfmode = STATUS_MAKE_PLAIN_BOOT_DISK;
		lib_putstring_ASCII(0x0000, 0, 0, &selwin0[0].subtitle.tbox, 0, 0, "< Load Systemimage >");
		pjob->now = 0;
	} else {
		pjob->param[1] = (int) pjob->fbuf; /* キャッシュヒットかもしれないから更新 */
		*pfmode = STATUS_LOAD_BOOT_SECTOR_CODE_COMPLETE; /* 'S'と'Enter'と'F'と'R'しか入力できない */
		for (i = 0; i < LIST_HEIGHT; i++)
			putselector0(win, i, "                ");
		putselector0(win, 1, "    Loaded.     ");
		putselector0(win, 3, " Change disks.  ");
		putselector0(win, 5, " Hit Enter key. ");
	}
	return;
}

void job_load_file1(struct FILESELWIN *win, struct FILEBUF *fbuf, int task)
{
	struct VIRTUAL_MODULE_REFERENCE *vmr = vmref0;
	int i;

	for (i = 0; i < MAX_VMREF; i++, vmr++) {
		if (vmr->task == task && vmr->slot == win->mdlslot) {
			unlinkfbuf(vmr->fbuf);
			vmr->task = 0;
		}
	}
	for (vmr = vmref0; vmr->task; vmr++);
	vmr->task = task;
	vmr->fbuf = fbuf;
	vmr->slot = win->mdlslot;
	vmr->flags = 0; /* silent */
	sgg_directwrite(0, 4, 0, win->mdlslot,
		(0x003c /* slot_sel */ | task << 8) + 0xf80000, (int) &fbuf->virtualmodule, 0x000c);
	sendsignal1dw(task, win->sig[1]);
	if (fbuf->arcbuf) {
		struct STR_BANK *bank;
		for (bank = banklist; bank->tss != task; bank++);
		if (bank->arcbuf != fbuf->arcbuf) {
			if (bank->arcbuf)
				arcsub_unlink(bank->arcbuf);
			bank->arcbuf = fbuf->arcbuf;
			bank->arcbuf->linkcount++;
		}
	}
	return;
}

void job_load_file0(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	struct FILESELWIN *win = pjob->win;
	struct VIRTUAL_MODULE_REFERENCE *vmr = vmref0;
	struct FILEBUF *fbuf = pjob->fbuf;
	int i, task = pjob->param[0];
	if (task == 0) {
		/* resizeからの引継ぎ */
		task = win->task;
		win->sig[1] += pjob->param[7];
	}
	if (cond == 0) { /* error */
	//	fbuf->linkcount = 0; /* 開放 */
		if (win->mdlslot != -1) {
			/* エラーシグナルを送信 */
			sendsignal1dw(task, win->sig[1] + 1);
		}
	} else if (win->mdlslot == -1) {
		unlinkfbuf(fbuf);
	} else {
		job_load_file1(win, fbuf, task);
	}
	win->mdlslot = -2;
	if (win->lp /* NULLならクローズ処理中 */) {
		win->task = 0;
		(*pselwincount)--;
	}
	pjob->now = 0;
	return;
}

int job_resize_sub0(int *sbp)
{
	struct STR_JOBLIST *pjob = &job;
	if (sbp[1] != 0) {
		/* リサイズ失敗 */
		pjob->param[7]++;
		if (pjob->param[6])
			sendsignal1dw(pjob->param[6], pjob->param[7]);
		sgg_getfilelist(256, file, 0, 0);
		pjob->now = 0;
	} else {
		pjob->fbuf = searchfrefbuf();
		jsub_fbufready0(job_resize_sub1);
	}
	return 2; /* siglen */
}

void job_resize_sub1(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	struct FILEBUF *fbuf = pjob->fbuf;
	if (cond == 0) {
		/* リサイズ失敗(ロード失敗) */
	//	pjob->fbuf = 0; /* 開放 */
		pjob->param[7]++;
		if (pjob->param[6])
			sendsignal1dw(pjob->param[6], pjob->param[7]);
		sgg_getfilelist(256, file, 0, 0);
		pjob->now = 0;
	} else {
		unsigned char *fp0 = (char *) readCSd10;
		sgg_execcmd0(0x0080, FILEAREA, fbuf->paddr, fp0, 0x0000); /* スロットを使わないマッピング */
		*fp0 = 0xcc; /* 書き換え */
		/* unmapする */
		/* 手動unlink (writeback) */
		sgg_execcmd0(0x0020, 0x80000000 + 5, 0x1244, 0x0134, fbuf->dirslot, fbuf->size, fbuf->paddr, 0x0000);
		fbuf->dirslot |= -1;
		fbuf->linkcount &= 0; /* 開放 */
		sgg_execcmd0(0x0020, 0x80000000 + 10, 0x1249, 0x0150,
			pjob->param[0], pjob->param[1], pjob->param[2] >> 8, pjob->param[3], 
			0x4243 /* to pokon0 */, 0x7f000002, SIGNAL_REFRESH_FLIST0, 1 /* 正常終了が-1だから */, 0x0000);
	}
	return;
}

void job_resize_sub2(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	if (cond == 0) {
		/* ロード失敗 */
	//	pjob->fbuf = 0; /* 開放 */
		/* アプリからではないのでシグナルは送らない */
		pjob->now = 0;
	} else {
		if (pjob->fbuf->readonly)
			pjob->now = 0;
		else {
			int i = SIGNAL_REFRESH_FLIST0, j = pjob->param[3];
			if (pjob->fp->size == 0) {
				i = SIGNAL_JSUB;
				j = 1;
			}
			pjob->jsubfunc = job_resize_sub0;
			sgg_execcmd0(0x0020, 0x80000000 + 10, 0x1249, 0x0150,
				pjob->param[0], pjob->param[1], pjob->param[2] >> 8, j, 
				0x4243 /* to pokon0 */, 0x7f000002, i, 1 /* 正常終了が-1だから */, 0x0000);
		}
		unlinkfbuf(pjob->fbuf);
	}
	return;
}

void job_exec_psf_sub0(int cond)
{
	struct STR_JOBLIST *pjob = &job;
	if (cond) {
		unsigned char *fp = (unsigned char *) readCSd10, *fp1 = fp + pjob->fbuf->size;
		static unsigned char cmdline0[1024], *p;
		sgg_execcmd0(0x0080, FILEAREA, pjob->fbuf->paddr, fp, 0x0000); /* スロットを使わないマッピング */
		while (fp < fp1) {
			p = cmdline0;
			while (fp < fp1 && *fp <= ' ')
				fp++;
			if (fp >= fp1)
				break;
			while (fp < fp1 && *fp != '\r' && *fp != '\n' && p < &cmdline0[1023])
				*p++ = *fp++;
			*p = '\0';
			poko_exec_cmd(cmdline0);
		}
		unlinkfbuf(pjob->fbuf);
	}
	pjob->now = 0;
	return;
}

#if (defined(PCAT))

int job_chgdev_sub0(int *sbp)
{
	sgg_format(0x0114, SIGNAL_RELOAD_FAT_COMPLETE); /* INVALID_DISKCACHE */
	return 1; /* siglen */
}

#endif

void poko_exec_cmd(const char *p)
{
	while (*p != '\0' && *p <= ' ')
		p++;
	if (*p != '\0' && *p != '/') {
		int status = -ERR_BAD_COMMAND;
		static struct STR_POKON_CMDLIST {
			int (*fnc)(const char *);
			const char *cmd;
			char skip, prmflg;
		} cmdlist[] = {
			poko_memory,		"memory", 6, 0,
			poko_color,			"color", 5, 1,
			poko_cls,			"cls", 3, 0,
		/*	poko_mousespeed,	"mousespeed", 10, 1, */
			poko_mouseaccel,	"mouseaccel", 10, 1,
			poko_setdefaultIL,	"setdefaultIL", 12, 1,
			poko_tasklist,		"tasklist", 8, 0,
			poko_sendsignalU,	"sendsignalU", 11, 1,
			poko_LLlist,		"LLlist", 6, 1,
			poko_setIL,			"setIL", 5, 1,
			poko_create,		"create", 6, 1,
			poko_delete,		"delete", 6, 1,
			poko_rename,		"rename", 6, 1,
			poko_resize,		"resize", 6, 1,
			poko_nfname,		"nfname", 6, 1,
			poko_autodecomp,	"autodecomp", 10, 1,
			poko_sortmode,		"sortmode", 8, 1,
			poko_kill,			"kill", 4, 1,
			#if (defined(PCAT))
				poko_vesalist,		"vesalist", 8, 1,
				poko_setvesa,		"setvesa", 7, 1,
				poko_detectpcivga,	"detectpcivga", 12, 2,
			#endif
			poko_defkeybind,	"defkeybind", 10, 1,
			poko_defspkeybind,	"defspkeybind", 12, 1,
			poko_setwindef,		"setwindef", 9, 1,
			poko_run,			"run", 3, 1,
			#if (defined(PCAT) | defined(TOWNS))
				poko_drvfd,			"drvfd", 5, 1,
				poko_drvcf,			"drvcf", 5, 1,
			#endif
			#if (defined(PCAT))
				poko_drvata,		"drvata", 6, 1,
				poko_drvbfd,		"drvbfd", 6, 1,
			#endif
			poko_setwallpaper,	"setwallpaper", 12, 2,
			poko_setext,		"setext", 6, 1,
			poko_autodearc,		"autodearc", 9, 1,
			#if (defined(TOWNS))
				poko_townsmouse,	"townsmouse", 10, 1,
			#endif
			poko_exec,			"exec", 4, 1,
			#if (defined(DEBUG))
				poko_debug,			"debug", 5, 1,
			#endif
			NULL,				NULL, 0, 0
		};
		struct STR_POKON_CMDLIST *pcmdlist = cmdlist;
		do {
			const char *line = p, *cmd = pcmdlist->cmd;
			while (*line == *cmd) {
				line++;
				cmd++;
			}
			if (*cmd == '\0' && *line == ' ') {
				if (pcmdlist->skip) {
					p += pcmdlist->skip;
					while (*p == ' ')
						p++;
				}
				status = -ERR_ILLEGAL_PARAMETERS;
				if (pcmdlist->prmflg == 0 && *p != '\0')
					break;
				if (pcmdlist->prmflg == 1 && *p == '\0')
					break;
				status = (*(pcmdlist->fnc))(p);
				break;
			}
		} while ((++pcmdlist)->fnc);
		if (status < 0)
			consoleout((char *) pokon_error_message[-status - ERR_CODE_START]);
		if (status == 1)
			consoleout("\n");
	}
	return;
}

/////

void put_file(struct FILESELWIN *win, const char *name, const int pos, const int col)
{
	static char charbuf16[17] = "          .     ";
	static int color[2][2] = { 0, 15, 15, 2 };
	int i;
	if (*name) {
		for (i = 0; i < 8; i++)
			charbuf16[2 + i] = name[i];
		for (/* i = 8 */; i < 11; i++)
			charbuf16[3 + i] = name[i];
	//	charbuf16[10] = '.';
		lib_putstring_ASCII(0x0001, 0, pos, &win->selector.tbox, color[col][0], color[col][1], charbuf16);
	} else
	//	lib_putstring_ASCII(0x0000, 0, pos, selector, 0, 0, "                ");
		putselector0(win, pos, "                ");
	return;
}

#if (defined(WIN9X) || defined(WIN31) || defined(NEWSTYLE))
void draw_button(struct LIB_WINDOW *win, int c, int x0, int y0, int x1, int y1)
{
	lib_drawline(0x20, win,  c, x0+1,y0+1, x1-2,y1-2);	/* button */
	lib_drawline(0x20, win,  8, x0  ,y0  , x1  ,y0  );	/* UP0 */
	lib_drawline(0x20, win, 15, x0+1,y0+1, x1-1,y0+1);	/* UP1 */
	lib_drawline(0x20, win, 15, x0+1,y0+2, x0+1,y1-2);	/* LEFT1 */
	lib_drawline(0x20, win,  8, x0  ,y0+1, x0  ,y1-1);	/* LEFT0 */
	lib_drawline(0x20, win,  7, x1-1,y0+1, x1-1,y1-2);	/* RIGHT1 */
	lib_drawline(0x20, win,  0, x1  ,y0+1, x1  ,y1-1);	/* RIGHT0 */
	lib_drawline(0x20, win,  7, x0+1,y1-1, x1-1,y1-1);	/* DOWN1 */
	lib_drawline(0x20, win,  0, x0  ,y1  , x1  ,y1  );	/* DOWN0 */
}
void draw_triangle(struct LIB_WINDOW *win, int c, int x0, int y, int d)
{
	int i;
	for (i = 0; i<4; i++){
		lib_drawline(0x20, win, c, x0-i,y,x0+i,y);
		y += d;
	}
}
void draw_sbar_frame(struct FILESELWIN *win)
{
	struct LIB_WINDOW *window = &win->window;
	/* バーの上の枠 */
	lib_drawline(0x20, window, 7, LISTX1+2,LISTY0-3, SBARX1+2,LISTY0-3);
	lib_drawline(0x20, window, 0, LISTX1+2,LISTY0-2, SBARX1+1,LISTY0-2);
	/* バーの右の枠 */
	lib_drawline(0x20, window, 8, SBARX1+1,LISTY0  , SBARX1+1,LISTY1+1);
	lib_drawline(0x20, window,15, SBARX1+2,LISTY0-1, SBARX1+2,LISTY1+2);
	/* スクロールボタン */
	draw_button(window, SBARC, SBARX0,SBARY0-SBARW, SBARX1,SBARY0-1);
	draw_button(window, SBARC, SBARX0,SBARY1+1, SBARX1,SBARY1+SBARW);
	draw_triangle(window, 0, SBARX0+SBARW/2, SBARY0-SBARW/2-2, 1);
	draw_triangle(window, 0, SBARX0+SBARW/2, SBARY1+SBARW/2+2,-1);
	/* バーの下の枠 */
	lib_drawline(0x20, window, 8, LISTX1+3,LISTY1+2, SBARX1+1,LISTY1+2);
	lib_drawline(0x20, window,15, LISTX1+4,LISTY1+3, SBARX1+2,LISTY1+3);
}
#elif (defined(CHO_OSASK))
void draw_button(struct LIB_WINDOW *win, int c, int x0, int y0, int x1, int y1){
	lib_drawline(0x20, win,  c, x0+1,y0+1, x1-1,y1-1);	/* button */
	lib_drawline(0x20, win, 15, x0  ,y0  , x1  ,y0  );	/* UP */
	lib_drawline(0x20, win, 15, x0  ,y0+1, x0  ,y1-1);	/* LEFT */
	lib_drawline(0x20, win,  0, x1  ,y0+1, x1  ,y1-1);	/* RIGHT */
	lib_drawline(0x20, win,  0, x0  ,y1  , x1  ,y1  );	/* DOWN */
}
void draw_sbar_frame(struct FILESELWIN *win){
	struct LIB_WINDOW *window = &win->window;
	/* テキストボックスの枠を伸ばす */
	lib_drawline(0x20, window, 0, LISTX1+4,LISTY0-3, SBARX1,LISTY0-3);
	lib_drawline(0x20, window,15, LISTX1+4,LISTY1+3, SBARX1,LISTY1+3);
}
#elif (defined(TMENU))
void draw_button(struct LIB_WINDOW *win, int c, int x0, int y0, int x1, int y1){
	lib_drawline(0x20, win,  c, x0+1,y0+1, x1-1,y1-1);	/* button */
	lib_drawline(0x10, win,  0, x0  ,y0  , x1  ,y1  );	/* LEFT */
	lib_drawline(0x20, win,  0, x1-1,y0+2, x1-1,y0+2);	/* RIGHT1 */
	lib_drawline(0x20, win,  0, x1-2,y0+3, x1-1,y1-2);	/* RIGHT0 */
	lib_drawline(0x20, win,  0, x0+2,y1-1, x0+2,y1-1);	/* DOWN1 */
	lib_drawline(0x20, win,  0, x0+3,y1-2, x1-1,y1-1);	/* DOWN0 */
}
void draw_triangle(struct LIB_WINDOW *win, int c, int x0, int y, int d){
	int i;
	for (i = 0; i<3; i++){
		lib_drawline(0x20, win, c, x0-i,y,x0+i+1,y);
		y += d;
	}
	i--;
	lib_drawline(0x20, win, c, x0-i,y,x0+i+1,y);
}
void draw_sbar_frame(struct FILESELWIN *win)
{
	struct LIB_WINDOW *window = &win->window;
	/* テキストボックスの枠を伸ばす */
	lib_drawline(0x10, window, 0, SBARX0-1,SBARY0, SBARX0-1,SBARY1);
	lib_drawline(0x10, window, 0, SBARX1+1,SBARY0, SBARX1+1,SBARY1);
	draw_button(window,  15, SBARX0-1,SBARY0-SBARW-2, SBARX1+1,SBARY0-1);
	draw_button(window,  15, SBARX0-1,SBARY1+1    , SBARX1+1,SBARY1+SBARW+2);
	draw_triangle(window, 0, SBARX0+SBARW/2,SBARY0-SBARW/2-3, 1);
	draw_triangle(window, 0, SBARX0+SBARW/2,SBARY1+SBARW/2+3, -1);
}
#endif

void draw_sbar(unsigned int barlen, unsigned int hndl, struct FILESELWIN *win)
{
	int y0 = 0, y1 = SBARH;
	struct LIB_WINDOW *window = &win->window;
	if (barlen > LIST_HEIGHT) {
		y0 = y1 * hndl / barlen;
		y1 = y1 * (hndl + LIST_HEIGHT) / barlen;
	}
	win->shndly0 = y0 += SBARY0;
	win->shndly1 = y1 += SBARY0;
	/* ハンドルと上下の隙間 */
	draw_button(window, SBARC, SBARX0,y0, SBARX1, y1-1);
	if (y0 > SBARY0)
		lib_drawline(0x20, window, SBARBC, SBARX0,SBARY0, SBARX1,y0-1);
	if (y1 < SBARY1)
		lib_drawline(0x20, window, SBARBC, SBARX0,y1, SBARX1,SBARY1);
	return;
}

void list_set(struct FILESELWIN *win)
{
	int i, ext = win->ext, j;
	struct SGG_FILELIST *fp;
	struct FILELIST *lp, *list = win->list, *wp1, *wp2, tmp;
	static int sort_order[2][11] = {
		{ 0, 1, 2,  3, 4, 5, 6, 7, 8, 9, 10 },
		{ 8, 9, 10, 0, 1, 2, 3, 4, 5, 6, 7  },
	};

	// システムにファイルのリストを要求
	sgg_getfilelist(256, file, 0, 0);

	// アプリケーションがLIST_HEIGHT個以下のときのための処置
	for (i = 0; i <= LIST_HEIGHT; i++)
		list[i].name[0] = '\0';

	// 拡張子extのものだけを抽出してlistへ
	fp = file + 1; // 最初の要素はダミー
	lp = list;

	while (fp->name[0]) {
		if ((fp->type & 0x18) == 0 
			&& (ext == ext_ALL || (fp->name[8] | (fp->name[9] << 8) | (fp->name[10] << 16)) == ext)) {
			for (i = 0; i < 11; i++)
				lp->name[i] = fp->name[i];
			lp->ptr = fp;
			lp++;
		}
		fp++;
	}
	lp->name[0] = '\0';

	// sort by Koyanagi
	for (wp1 = list; wp1->name[0]; ++wp1) {
		for (wp2 = lp - 1; wp2 != wp1; --wp2) {
			// compare
			for (i = 0; i < 11; ++i) {
				j = (int) ((wp2 - 1)->name[sort_order[sort_mode][i]])
					- (int) (wp2->name[sort_order[sort_mode][i]]);
				if (j == 0)
					continue;
				if (j > 0) {
					// swap and break
					tmp = *wp2;
					*wp2 = *(wp2 - 1);
					*(wp2 - 1) = tmp;
				}
				break;
			}
		}
	}
	//
	win->listsize = wp1 - list;
	win->lp = lp = list;
	for (i = 0; i < LIST_HEIGHT; i++)
 		put_file(win, lp[i].name, i, 0);

	if (list[0].name[0] == '\0') {
		// 選択可能なファイルが１つもない
		lib_putstring_ASCII(0x0000, 0, LIST_HEIGHT / 2 - 1, &win->selector.tbox, 1, 0, "File not found! ");
		win->cur = -1;
	} else {
 		put_file(win, lp[0].name, 0, 1);
		win->cur = 0;
	}
	if (win->flags & FILESELWINFLAG_DRAWENABLED)
		draw_sbar(win->listsize, 0, win);
	else
		win->flags |= FILESELWINFLAG_SBARDIRTY;
	return;
}

void putcursor()
{
	struct STR_CONSOLE *pcons = console;
	pcons->sleep = 0;
	lib_putstring_ASCII(0x0001, pcons->curx, pcons->cury, &pcons->tbox.tbox,
		pcons->col & 0x0f, (pcons->col >> 4) & 0x0f, (pcons->cursorflag) ? "\xff" : " ");
	return;
}

#if 0

const int poko_cmdchk(const char *line, const char *cmd)
{
	while (*line == *cmd) {
		line++;
		cmd++;
	}
	if (*cmd == '\0' && *line == ' ')
		return 1;
	return 0;
}

#endif

void itoa10(unsigned int i, char *s)
{
	int j = 10;
	s[11] = '\0';
	do {
		s[j] = '0' + i % 10;
		j--;
	} while (i /= 10);
	while (j >= 0)
		s[j--] = ' ';
	return;
}


void openselwin(struct FILESELWIN *win, const char *title, const char *subtitle)
{
	static struct KEY_TABLE0 {
		int code;
		unsigned char opt, signum;
	} table[] = {
		{ 0x00ae /* cursor-up, down */,		1, SIGNAL_CURSOR_UP },
		{ 0x00a0 /* Enter */,				0, SIGNAL_ENTER },
		{ 0x00a8 /* page-up, down */,		1, SIGNAL_PAGE_UP },
		{ 0x00ac /* cursor-left, right */,	1, SIGNAL_CURSOR_PAGE_UP },
		{ 0x00a6 /* Home, End */,			1, SIGNAL_TOP_OF_LIST },
		{ DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_NOALT | 0xa4 /* Insert */,	0, SIGNAL_DISK_CHANGED },
		{ DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_NOALT | 0xa5 /* Delete */,	0, SIGNAL_START_WB },
		{ DEFSIG_EXT1 | DEFSIG_SHIFT | DEFSIG_NOCTRL | DEFSIG_NOALT | 0xa4 /* Shift+Insert */,	0, SIGNAL_FORCE_CHANGED },
		{ DEFSIG_EXT1 | DEFSIG_SHIFT | DEFSIG_NOCTRL | DEFSIG_NOALT | 0xa5 /* Shift+Delete */,	0, SIGNAL_CHECK_WB_CACHE },
		{ DEFSIG_EXT1 | DEFSIG_SHIFT | DEFSIG_CTRL | 'C' /* Shif+Ctrl */,	1, SIGNAL_CREATE_NEW },
		{ DEFSIG_EXT1 | DEFSIG_SHIFT | DEFSIG_CTRL | 'S' /* Shif+Ctrl */,	0, SIGNAL_RESIZE },
		{ DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT | 'S' /* Ctrl */,	0, SIGNAL_CHANGE_SORT_MODE },
		{ DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT | 'S' /* Alt */,	0, SIGNAL_CHANGE_SORT_MODE },
		{ DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT | '0' /* Ctrl+0 */,	9, SIGNAL_DISK_CHANGE0 },
		{ SIGNAL_LETTER_START /* letters */,SIGNAL_LETTER_END - SIGNAL_LETTER_START,  SIGNAL_LETTER_START },
		{ 0,                               0,  0 }
	};
	struct KEY_TABLE0 *pkt;
	struct LIB_WINDOW *window;
	char *ss;

	win->lp = win->list;
	win->listsize = 0;

	lib_openwindow1_nm(window = &win->window, win->winslot, 160, 40 + LIST_HEIGHT * 16, 0x29, win->sigbase + 120 /* +6 */);
	lib_opentextbox_nm(0x1000, &win->wintitle.tbox,  0, 10, 1,  0,  0, window, 0x00c0, 0);
	lib_opentextbox_nm(0x0000, &win->subtitle.tbox,  0, 20, 1,  0,  0, window, 0x00c0, 0);
	lib_opentextbox_nm(0x0001, &win->selector.tbox, 15, LISTW/8, LISTH/16, LISTX0, LISTY0, window, 0x00c0, 0);
	lib_putstring_ASCII(0x0000, 0, 0, &win->wintitle.tbox, 0, 0, title);
	lib_putstring_ASCII(0x0000, 0, 0, &win->subtitle.tbox, need_wb & 9, 0, subtitle);

	lib_definesignal1p0(0, 0x0200, 0x1010 /* 感度1,窓内座標 */, &win->window, win->sigbase+SIGNAL_MOSPOS);
	lib_definesignal1p0(0, 0x0200, 0x1020 /* 感度1,press,left */, &win->window, win->sigbase+SIGNAL_MOSBTN);
	lib_definesignal1p0(0, 0x0200, 0x1030 /* 感度1,release,left */, &win->window, win->sigbase+SIGNAL_MOSBTN+3);
	for (pkt = table; pkt->code; pkt++)
		lib_definesignal1p0(pkt->opt, 0x0100, pkt->code, window, win->sigbase + pkt->signum);
	lib_definesignal0p0(0, 0, 0, 0);
	win->flags = 0;
	ss = win->subtitle_str;
	while (*ss++ = *subtitle++);
	return;
}

struct FILEBUF *searchfbuf0(int fileid)
{
	struct FILEBUF *fbuf = filebuf;
	int i;

	for (i = 0; i < MAX_FILEBUF; i++, fbuf++) {
		if (fbuf->dirslot == fileid)
			return fbuf;
	}
	return NULL;
}

struct FILEBUF *searchfbuf(struct SGG_FILELIST *fp)
{
	return searchfbuf0(fp->id);
}

struct FILEBUF *searchfrefbuf()
{
	struct FILEBUF *fbuf = filebuf;
	int i;
	for (i = 0; i < MAX_FILEBUF; i++, fbuf++) {
		if (fbuf->linkcount == 0) {
			fbuf->linkcount |= -1; /* 予約マーク */
			fbuf->arcbuf = 0;
			fbuf->readonly = 0;
			fbuf->pipe = 0;
			return fbuf;
		}
	}
	return NULL;
}

struct FILEBUF *check_wb_cache(struct FILEBUF *fbuf)
{
	struct FILEBUF *fbuf0 = filebuf + MAX_FILEBUF;
	while (fbuf < fbuf0) {
		if (fbuf->dirslot != -1 && fbuf->size != 0 && fbuf->readonly == 0) {
			sgg_execcmd0(0x0020, 0x80000000 + 9, 0x1248,
				0x013c, fbuf->dirslot, fbuf->size, fbuf->paddr,
				0x4243 /* to pokon0 */, 0x7f000002, SIGNAL_CHECK_WB_CACHE_NEXT, fbuf + 1,
				0x0000);
			return fbuf;
		}
		fbuf++;
	}
	return NULL;
}

struct STR_ARCBUF *arcsub_getfree()
{
	struct STR_ARCBUF *arc = arcbuf;
	int i;
	for (i = 0; i < MAX_ARCBUF; i++, arc++) {
		if (arc->linkcount == 0) {
			arc->linkcount |= -1; /* 予約マーク */
			return arc;
		}
	}
	return NULL;
}

struct STR_ARCBUF *arcsub_srchdslt(int dirslot)
{
	struct STR_ARCBUF *arc = arcbuf;
	int i;
	for (i = 0; i < MAX_ARCBUF; i++, arc++) {
		if (arc->dirslot == dirslot)
			return arc;
	}
	return NULL;
}

void arcsub_unlink(struct STR_ARCBUF *arc)
{
	if (--arc->linkcount == 0) {
		arc->dirslot |= -1;
		sgg_execcmd0(0x0020, 0x80000000 + 5, 0x1244, 0x0134, -1, arc->size, arc->paddr, 0x0000);
	}
	return;
}

int arcsub_gethex(unsigned char *p)
{
	int i, j, k = 0;
	for (i = 0; i < 8; i++) {
		j = p[i];
		if (j >= 'a')
			j -= 0x20;
		j -= 0x30;
		if (j > 9)
			j -= 7;
		k = k << 4 | j;
	}
	return k;
}

unsigned char *arcsub_srchname0(struct STR_ARCBUF *arc, unsigned char *p, unsigned char *name, unsigned int *siz, unsigned int *pofs)
/* ディレクトリの中を探索 */
{
	unsigned char n[11], c, *q;
	int i, j, ofs;
	if (arc->flags & 1) { /* SF16 */
		for (i = 0; i < 8; i++)
			n[i] = name[i];
		n[ 8] = name[ 9];
		n[ 9] = name[10];
		n[10] = name[11];
		for (p += arc->dir0; *p != 0; p += 32) {
			c = 0;
			for (i = 0; i < 11; i++)
				c |= p[i] ^ n[i];
			if (c == 0) {
				if (siz)
					*siz = *(int *) &p[28];
				if (pofs)
					*pofs = arc->clu2 + 512 * arc->align * ((*(unsigned short *) &p[26]) - 2);
				return p;
			}
		}
	} else { /* sar */
		for (i = 0; i < 8 && name[i] > ' '; i++)
			n[i] = name[i];
		if (name[9] > ' ') {
			n[i++] = '.';
			n[i++] = name[9];
			if (name[10] > ' ') {
				n[i++] = name[10];
				if (name[11] > ' ')
					n[i++] = name[11];
			}
		}
		ofs = arc->clu2;
		p += arc->dir0;
		while ((j = gets7s(&p)) != 0) {
			c = 1;
			if (j == i) {
				c = 0;
				q = p;
				for (j = 0; j < i; j++)
					c |= p[j] ^ n[j];
			}
			p += j;
			if ((j = gets7s(&p)) & 0x1f)
				c = 1;
			if ((j & 0x20) == 0x00)
				gets7s(&p);
			if (arc->flags & 2) {
				j = gets7s(&p);
				if (j & 1)
					j ^= -1;
				j >>= 1;
				ofs += j * (arc->align + 1);
			}
			j = gets7s(&p);
			if (c == 0) {
				if (siz)
					*siz = j;
				if (pofs)
					*pofs = ofs;
				return q;
			}
			ofs = (ofs + j + arc->align) & ~arc->align;
		}
	}
	return NULL;
}

unsigned char *arcsub_srchname1(struct STR_ARCBUF *arc, unsigned char *p, unsigned char *name)
/* infoの中を探索 */
{
	unsigned char c;
	int i;
#if 0
	for (i = 0; i < 8; i++)
		n[i] = name[i];
	n[ 8] = '.';
	n[ 9] = name[ 8];
	n[10] = name[ 9];
	n[11] = name[10];
#endif

	for (p += arc->info0 + 128; (*(int *) &p[0]) == 0x5f736f64 && (*(int *) &p[4]) == 0x656d616e; p += 128) {
		c = 0;
		for (i = 0; i < 12; i++)
			c |= p[16 + i] ^ name[i];
		if (c == 0)
			return p;
	}
	return NULL;
}

unsigned char *arcsub_srchnum(struct STR_ARCBUF *arc, unsigned char *p, int num)
/* infoの中を探索 */
{
	unsigned char c;
	int i;

	for (p += arc->info0 + 128; (*(int *) &p[0]) == 0x5f736f64 && (*(int *) &p[4]) == 0x656d616e; p += 128) {
		if (arcsub_gethex(&p[0x50]) == num && (arcsub_gethex(&p[0x30]) & 0x70) != 0x70)
			return p;
	}
	return NULL;
}

void arcsub_map(struct STR_ARCBUF *arc, unsigned char *fp0)
{
	int i = (arc->size + 0xfff) & ~0xfff;
	sgg_execcmd0(0x0080, arc->size, arc->paddr, fp0, 0x0000); /* スロットを使わないマッピング */
	return;
}

void arcsub_unmap(struct STR_ARCBUF *arc, unsigned char *fp0)
{
	return;
}

void OsaskMain()
{
	struct FILESELWIN *win;
	struct STR_JOBLIST *pjob = &job;
	struct STR_CONSOLE *pcons;
	struct VIRTUAL_MODULE_REFERENCE *vmref;
	struct FILESELWIN *selwin;

	#if (defined(PROCESS_ALL_POOLED_SIGNAL))
		unsigned int _siglen = 0;
	#endif
	int i, j, sig, *sb0, *sbp, tss;
	int *subcmd;
	struct STR_BANK *bank;
	struct FILEBUF *fbuf, *fbuf0;
	struct SELECTORWAIT *swait;
	struct STR_OPEN_ORDER *order;
	struct SGG_FILELIST *fp;
	struct SELECTORWAIT *selwait;
	int selwaitcount = 0;
	#if (defined(PCAT))
		signed char bootflags = 4;
	#else
		signed char bootflags = 0;
	#endif
	signed char fmode = STATUS_BOOTING;
	unsigned char selwincount = 1;

	MALLOC_ADDR = readCSd10 = lib_readCSd(0x0010);

	lib_init(AUTO_MALLOC);
	sgg_init(AUTO_MALLOC);

	sbp = sb0 = lib_opensignalbox(2048, AUTO_MALLOC, 0, 4);
	pfmode = &fmode;
	pselwincount = &selwincount;

	file = (struct SGG_FILELIST *) malloc(256 * sizeof (struct SGG_FILELIST));
	banklist = (struct STR_BANK *) malloc(MAX_BANK * sizeof (struct STR_BANK));
	filebuf = fbuf0 = (struct FILEBUF *) malloc(MAX_FILEBUF * sizeof (struct FILEBUF));
	selwin0 = selwin = (struct FILESELWIN *) malloc(MAX_SELECTOR * sizeof (struct FILESELWIN));
	selwait = (struct SELECTORWAIT *) malloc(MAX_SELECTORWAIT * sizeof (struct SELECTORWAIT));
	vmref = (struct VIRTUAL_MODULE_REFERENCE *) malloc(MAX_VMREF * sizeof (struct VIRTUAL_MODULE_REFERENCE));
	vmref0 = vmref;
	subcmd = (int *) malloc(256 * sizeof (int));
	order = (struct STR_OPEN_ORDER *) malloc(MAX_ORDER * sizeof (struct STR_OPEN_ORDER));
	pjob->order = order; 
	pcons = console = malloc(sizeof (struct STR_CONSOLE));
	arcbuf = (struct STR_ARCBUF *) malloc(MAX_ARCBUF * sizeof (struct STR_ARCBUF));

	pjob->list = (int *) malloc(JOBLIST_SIZE * sizeof (int));
	*(pjob->rp = pjob->wp = pjob->list) = 0; /* たまった仕事はない */
	pjob->free = JOBLIST_SIZE - 1;

//	pcons->win = (struct LIB_WINDOW *) malloc(sizeof (struct LIB_WINDOW));
//	pcons->title = (struct LIB_TEXTBOX *) malloc(sizeof (struct LIB_TEXTBOX) + 16 * 8);
//	pcons->tbox = (struct LIB_TEXTBOX *) malloc(sizeof (struct LIB_TEXTBOX) + CONSOLESIZEX * CONSOLESIZEY * 8);
//	pcons->buf = (char *) malloc((CONSOLESIZEX + 2) * (CONSOLESIZEY + 1));
	pcons->curx = -1;

	win = selwin;
	for (i = 0; i < MAX_SELECTOR; i++, win++) {
		win->task = 0;
		win->winslot = 0x0220 + i * 16;
		win->sigbase = 512 + 128 * i;
		win->subtitle_str[0] = '\0';
	}
	win = selwin;

	for (i = 0; i < MAX_SELECTORWAIT; i++)
		selwait[i].task = 0;

	for (i = 0; i < MAX_VMREF; i++)
		vmref[i].task = 0;

	for (i = 0; i < MAX_ORDER; i++)
		order[i].task = 0;

	openselwin(&win[0], POKON_VERSION, "< Run Application > ");

	lib_opentimer(SYSTEM_TIMER);
	lib_definesignal1p0(0, 0x0010 /* timer */, SYSTEM_TIMER, 0, CONSOLE_CURSOR_BLINK);

	/* キー操作を追加登録 */
	{
		static struct KEY_TABLE1 {
			int code;
			unsigned char opt, signum;
		} table[] = {
			{ 'F' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_TO_FORMAT_MODE },
			{ 'R' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_TO_RUN_MODE },
			{ 'S' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_CHANGE_FORMAT_MODE },
			{ 'C' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_OPEN_CONSOLE },
			{ 'M' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_OPEN_MONITOR },
			{ 'B' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_BINEDIT },
			{ 'T' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_TXTEDIT },
			{ 'P' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_CMPTEK0 },
			{ 'U' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_CTRL | DEFSIG_NOALT, 0, COMMAND_MCOPY },
	//		{ 'F' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT, 0, COMMAND_TO_FORMAT_MODE },
	//		{ 'R' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT, 0, COMMAND_TO_RUN_MODE },
	//		{ 'S' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT, 0, COMMAND_CHANGE_FORMAT_MODE },
	//		{ 'C' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT, 0, COMMAND_OPEN_CONSOLE },
	//		{ 'M' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT, 0, COMMAND_OPEN_MONITOR },
	//		{ 'B' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT, 0, COMMAND_BINEDIT },
	//		{ 'T' | DEFSIG_EXT1 | DEFSIG_NOSHIFT | DEFSIG_NOCTRL | DEFSIG_ALT, 0, COMMAND_TXTEDIT },

			{ 0,                0, 0    }
		};
		struct KEY_TABLE1 *pkt;
		for (pkt = table; pkt->code; pkt++)
			lib_definesignal1p0(pkt->opt, 0x0100, pkt->code, &selwin[0].window, pkt->signum);
		lib_definesignal0p0(0, 0, 0, 0);
	}

	for (i = 0; i < MAX_BANK; i++)
		banklist[i].tss &= 0;

	for (i = 0; i < MAX_FILEBUF; i++) {
		fbuf0[i].dirslot |= -1;
		fbuf0[i].linkcount &= 0;
	}

	for (i = 0; i < MAX_ARCBUF; i++) {
		arcbuf[i].dirslot |= -1;
		arcbuf[i].linkcount &= 0;
	}

	for (;;) {
		unsigned char siglen = 1;
		/* 全てのシグナルは、main()でやり取りする */
		sig = *sbp;
		win = selwin;
		if (sig < COMMAND_SIGNAL_START) {
			switch (sig) {
			case NO_SIGNAL:
			//	siglen--; /* siglen = 0; */
				pcons->sleep = 1;
				#if (!defined(PROCESS_ALL_POOLED_SIGNAL))
					lib_waitsignal(0x0001, 0, 0);
				#else
					lib_waitsignal(0x0001, _siglen, 0);
					_siglen = 0;
				#endif
				continue;

			case SIGNAL_REWIND:
			//	siglen--; /* siglen = 0; */
				#if (defined(PROCESS_ALL_POOLED_SIGNAL))
					_siglen += sbp[1];
				#else
					lib_waitsignal(0x0000, *(sbp + 1), 0);
				#endif
				sbp = sb0;
				continue;

			case 98:
			//	siglen = 1;
				bootflags ^= 0x02;
				goto bootflags_check;

			case SIGNAL_BOOT_COMPLETE:
			//	siglen = 1;
				bootflags ^= 0x01;
	bootflags_check:
				if (bootflags == 0x03) {
					win[0].ext = ext_ALL;
					list_set(&win[0]);
					fmode = STATUS_RUN_APPLICATION;

					/* ここで"OSASK0.PSF"バッチファイルを探して、読み込み&実行 */
					/* Pokon Script File */
					/* 行頭が'/'だったら、注釈とみなす */
					/* ファイル領域の最後の4096バイトを使用 */
					/* 入りきらないようなら、エラーなので実行しない */
					writejob_n(4, JOB_LOAD_AND_EXEC_PSF, 'O' | 'S' << 8 | 'A' << 16 | 'S' << 24,
						'K' | '0' << 8 | ' ' << 16 | ' ' << 24, '.' | 'P' << 8 | 'S' << 16 | 'F' << 24);
				}
				break;

			case SIGNAL_TERMINATED_TASK:
				siglen++; /* siglen = 2; */
				tss = sbp[1];
				for (bank = banklist; bank->tss != tss; bank++);
				bank->tss = 0;

				/* タスクtssへ通知しようと思っていたダイアログを全てクローズ */
				for (i = 1; i < MAX_SELECTOR; i++) {
					if (win[i].task == tss) {
						if (win[i].mdlslot > 0)
							win[i].mdlslot |= -1;
						if (win[i].subtitle_str[0] != 0 && win[i].lp != NULL) {
							win[i].lp = NULL;
							lib_closewindow(0, &win[i].window);
							win[i].mdlslot = -2;
						}
					}
				}
				/* 本来は、タスクを終了する前に、pokon0に通知があってしかるべき */
				/* そうでないと、終了したのにシグナルを送ってしまうという事が起こりうる */
				/* スロットのクローズを検出すれば、通知は可能 */

				for (i = 0; i < MAX_SELECTORWAIT; i++) {
					if (selwait[i].task == tss) {
						selwait[i].task &= 0;
						selwaitcount--;
					}
				}

				unlinkfbuf(bank->fbuf);
				if (bank->arcbuf)
					arcsub_unlink(bank->arcbuf);

				for (i = 0; i < MAX_ORDER; i++) {
					if (tss != order[i].task)
						continue;
					order[i].task &= 0;
				}

		freefiles:
//lib_putstring_ASCII(0x0000, 0, 0, &win[0].subtitle.tbox, 0, 0, "debug!(2)");
				for (i = 0; i < MAX_VMREF; i++, vmref++) {
					if ((tss & ~0xfff) == vmref->task) {
						struct VIRTUAL_MODULE_REFERENCE *vmr1;
						if ((tss & 0xfff) != 0 && (tss & 0xfff) != vmref->slot)
							continue;
						unlinkfbuf(vmref->fbuf);
						vmref->task = 0;
						vmr1 = vmref0;
						for (j = 0; j < MAX_VMREF; j++, vmr1++) {
							if (vmr1->task == 0)
								continue;
							if (vmr1->fbuf != vmref->fbuf)
								continue;
							if (vmr1->task == tss)
								continue;
							if (vmr1->flags == 0)
								continue;
							/* 以下は暫定 */
							/* サイズ確定と残りの部分のフラッシュを送る */
							if (vmr1->flushed_size != vmr1->fbuf->size)
								sgg_execcmd0(0x0020, 0x80000000 + 5, vmr1->task | 0x0244,
									0x7f000003, vmr1->sigbase + 0, vmr1->fbuf->size - vmr1->flushed_size, vmr1->flushed_size, 0x0000);
							sgg_execcmd0(0x0020, 0x80000000 + 4, vmr1->task | 0x0243,
								0x7f000002, vmr1->sigbase + 1, vmr1->fbuf->size, 0x0000);
						}
					}
				}
				vmref = vmref0;
				break;

			case SIGNAL_REQUEST_DIALOG:
			case SIGNAL_REQUEST_DIALOG2:
				/* とりあえずバッファに入れておく */
				siglen = 6;
				for (swait = selwait; swait->task; swait++); /* 行き過ぎる事は考えてない */
				selwaitcount++;
				swait->task    = sbp[1];
				swait->slot    = sbp[2];
				swait->bytes   = sbp[3];
				swait->ofs     = sbp[4];
				swait->sel     = sbp[5];
				break;

			case SIGNAL_FREE_FILES:
				/* ファイル開放要求(えせファイルシステム用) */
				siglen++; /* siglen = 2; */
				tss = sbp[1];
				goto freefiles;

			case SIGNAL_RESIZE_FILE:
				/* ファイルサイズ変更要求 */
				/* cmd, virtualmodule, new-size, task, sig, slot */
				siglen = 6;
/* lib_putstring_ASCII(0x0000, 0, 0, &win[0].subtitle.tbox, 0, 0, "debug!debug!"); */
				for (fbuf = fbuf0; fbuf->virtualmodule != sbp[1] || fbuf->linkcount <= 0; fbuf++);
				if (fbuf->pipe) {




					if (((sbp[2] + 0xfff) & 0xfffff000) != ((fbuf->size + 0xfff) & 0xfffff000))
						goto resize_error; /* ページ数が変わるようならエラー */
					sgg_execcmd0(0x0074, 0, fbuf->virtualmodule, 0x0000); /* virtualmoduleの破棄 */
					fbuf->size = sbp[2];
					fbuf->virtualmodule = sgg_createvirtualmodule(fbuf->size, fbuf->paddr);

					/* 変わってないので更新しない */
				//	for (vmr = vmref0; vmr->task; vmr++);
				//	vmr->task = pjob->bank->tss;
				//	vmr->fbuf = fbuf;
				//	vmr->slot = 0x0200;

					/* 他のタスクのやつもリサイズする */
					for (i = 0; i < MAX_VMREF; i++, vmref++) {
						if (vmref->task == 0)
							continue;
						if (vmref->fbuf != fbuf)
							continue;
						sgg_directwrite(0, 4, 0, vmref->slot,
							(0x003c /* slot_sel */ | vmref->task << 8) + 0xf80000, (int) &fbuf->virtualmodule, 0x000c);
					}
					vmref = vmref0;
					sendsignal1dw(sbp[3], sbp[4]); /* success */
					break;
				}
				if (pjob->free >= 8 + 5 + 4) {
					/* 空きが十分にある */
					/* これ以降はかなりの手抜きがある(とりあえず動けばよいというレベル) */
					/* ディスクが交換されるかもしれないことに配慮していない */
					/*   →いや、ちゃんと配慮している */
					if ((i = fbuf->dirslot) != -1 && selwincount < MAX_SELECTOR && fbuf->linkcount == 1) {
						struct VIRTUAL_MODULE_REFERENCE *vmr;
						if  (fbuf->readonly != 0) {
							if (sbp[2] != 0)
								goto resize_error;
						}
						for (fp = file + 1; fp->name[0]; fp++) {
							if (fp->id == i)
								goto resize_find;
						}
						goto resize_error;
	resize_find:
						for (win = &selwin[1]; win->task; win++);
						selwincount++;
						win->lp = win->list; /* window-close処理中でないことを明示 */
						win->task = sbp[3];
						win->mdlslot = sbp[5];
						win->siglen = 2;
						win->sig[1] = sbp[4];
						/* reloadのために、vmrefを捨てる */
						for (vmr = vmref; vmr->fbuf != fbuf || vmr->task == 0; vmr++);
						vmr->task &= 0;
						unlinkfbuf(fbuf);
						fbuf->linkcount |= -1; /* このfbufをリザーブする */
						writejob_n(13, JOB_RESIZE_FILE, *((int *) &fp->name[0]),
							*((int *) &fp->name[4]), (*((int *) &fp->name[8]) << 8) | '.',
							sbp[2], 0 /* new-size, max-linkcount */, 0, 0 /* task, signal */,
							JOB_LOAD_FILE, (int) fbuf, (int) win, 0, fp);
						break;
					}
				}
	resize_error:
				sendsignal1dw(sbp[3], sbp[4] + 1); /* error */
				break;

			case SIGNAL_NEED_WB:
				/* ファイルキャッシュはライトバックが必要 */
				need_wb = -1;
		no_wb_cache2:
				siglen++; /* siglen = 2; */
				if (fmode == STATUS_RUN_APPLICATION) {
					for (i = 0; i < MAX_SELECTOR; i++) {
						if (win[i].subtitle_str[0])
							lib_putstring_ASCII(0x0000, 0, 0, &win[i].subtitle.tbox, need_wb & 9, 0, win[i].subtitle_str);
					}
				}
				break;

			case SIGNAL_JSUB:
				siglen = (*pjob->jsubfunc)(sbp);
				break;

			case SIGNAL_NO_WB_CACHE:
				need_wb = 0;
				pjob->now = 0;
				goto no_wb_cache2;

			case SIGNAL_CHECK_WB_CACHE_NEXT:
				siglen++; /* siglen = 2; */
				fbuf = (struct FILEBUF *) sbp[1];
				if (check_wb_cache(fbuf) == NULL) /* 終了したらNULLを返す */
					goto job_end;
				break;

			case SIGNAL_REFRESH_FLIST:
				siglen++; /* siglen = 2; */
				if (sbp[1])
					pjob->param[7]++;
				if (pjob->param[6])
					sendsignal1dw(pjob->param[6], pjob->param[7]);
				goto refresh_selector0;

			case SIGNAL_REFRESH_FLIST0:
				siglen++; /* siglen = 2; */
				if (sbp[1])
					pjob->param[7]++;
				if (pjob->param[6])
					sendsignal1dw(pjob->param[6], pjob->param[7]);
	refresh_filelist:
				sgg_getfilelist(256, file, 0, 0);
	job_end:
				pjob->now = 0;
				break;

			case SIGNAL_RELOAD_FAT_COMPLETE:
			//	siglen = 1;
				for (i = 0; i < MAX_FILEBUF; i++)
					fbuf0[i].dirslot |= -1;
				for (i = 0; i < MAX_ARCBUF; i++)
					arcbuf[i].dirslot |= -1;

			refresh_selector0:
				pjob->now = 0;
			refresh_selector:
				/* 全てのファイルセレクタを更新 */
				for (i = 0; i < MAX_SELECTOR; i++) {
					if (selwin[i].subtitle_str[0])
						list_set(&selwin[i]);
				}
				break;

			case SIGNAL_FORMAT_COMPLETE: /* フォーマット完了 */
			//	siglen = 1;
write_exe:
				fmode = STATUS_FORMAT_COMPLETE;
				fbuf = (struct FILEBUF *) pjob->param[0];
				pjob->fbuf = (struct FILEBUF *) pjob->param[1];
				/* 何があってもキャッシュ無効 */
				for (i = 0; i < MAX_FILEBUF; i++)
					fbuf0[i].dirslot = -1;
				putselector0(win, 1, " Writing        ");
				putselector0(win, 3, "   system image.");
				putselector0(win, 5, "  Please wait.  ");
				sgg_format2(0x0128 /* 1,440KBフォーマット用 非圧縮 */,
					//	0x011c /* 1,760KBフォーマット用 非圧縮 */
					//	0x0128 /* 1,440KBフォーマット用 非圧縮 */
					//	0x0138 /* 1,440KBフォーマット用 圧縮 */
					pjob->fbuf->size, pjob->fbuf->paddr, fbuf->size, fbuf->paddr,
					SIGNAL_WRITE_KERNEL_COMPLETE /* finish signal */); // store system image
				break;

			case SIGNAL_WRITE_KERNEL_COMPLETE: /* .EXE書き込み完了 */
			//	siglen = 1;
				unlinkfbuf((struct FILEBUF *) pjob->param[0]);
				unlinkfbuf((struct FILEBUF *) pjob->param[1]);
				putselector0(win, 1, "   Completed.   ");
				putselector0(win, 3, " Change disks.  ");
				putselector0(win, 5, " Hit Ctrl+R key.");
				fmode = STATUS_WRITE_KERNEL_COMPLETE;
				goto job_end;

				#if (defined(PCAT))
			case SIGNAL_VBELIST:
					siglen++; /* siglen = 2; */
					sgg_debug00(0, sizeof vbebuf, 0, sbp[1],
						0x000c | (0x3000 << 8) + 0xf80000, (const int) vbebuf, 0x000c);
					bootflags ^= 0x04;
					goto bootflags_check;
				#endif

			case 3: /* launcher機能(run) わざわざ.PSFを作らなくてもいいし、作ってもいい */
				siglen = 4; /* sbp[1～3]は"FILENAMEEXT\0" */
				fp = searchfid1((const unsigned char *) &sbp[1]);
				if (fp)
					runfile(fp, (const unsigned char *) &sbp[1]);
			//	break;

			}
		} else if (COMMAND_SIGNAL_START <= sig && sig < COMMAND_SIGNAL_END + 1) {
			/* selwin[0]に対する特別コマンド */
		//	siglen = 1;
			if (fmode >= STATUS_FORMAT_COMPLETE)
				goto nextsig; /* boot中は無視 */
			fp = win[0].lp[win[0].cur].ptr;
			switch (sig) {
			case COMMAND_TO_FORMAT_MODE:
			//	j = 0;
			//	for (i = 1; i < MAX_SELECTOR; i++)
			//		j |= win[i].task;
				if (/* j != 0 || */ selwincount != 1 || pcons->curx != -1 || need_wb != 0)
					break;
				if (fmode == STATUS_LOAD_BOOT_SECTOR_CODE_COMPLETE) {
					unlinkfbuf((struct FILEBUF *) pjob->param[0]);
					unlinkfbuf((struct FILEBUF *) pjob->param[1]);
					pjob->now = 0;
				}
				win[0].ext = ext_EXE;
				if (fmode == STATUS_WRITE_KERNEL_COMPLETE) {
					/* 空きが十分にある */
					writejob_1(JOB_INVALID_DISKCACHE);
					win->cur = -1;
				} else {
					list_set(&win[0]);
				}
				fmode = STATUS_MAKE_PLAIN_BOOT_DISK;
				lib_putstring_ASCII(0x0000, 0, 0, &win[0].subtitle.tbox, 0, 0, "< Load Systemimage >");
				break;

		/* フォーマットモードに入るには、他のファイルセレクタが全て閉じられていなければいけない */
		/* また、フォーマットモードに入っている間は、ファイルセレクタが開かない */

			case COMMAND_TO_RUN_MODE:
				if (fmode == STATUS_LOAD_BOOT_SECTOR_CODE_COMPLETE) {
					unlinkfbuf((struct FILEBUF *) pjob->param[0]);
					unlinkfbuf((struct FILEBUF *) pjob->param[1]);
					pjob->now = 0;
				}
				win[0].ext = ext_ALL;
				if (fmode == STATUS_WRITE_KERNEL_COMPLETE) {
					writejob_1(JOB_INVALID_DISKCACHE);
					win->cur = -1;
				} else {
					list_set(&win[0]);
				}
				fmode = STATUS_RUN_APPLICATION;
				lib_putstring_ASCII(0x0000, 0, 0, &win[0].subtitle.tbox, need_wb & 9, 0, "< Run Application > ");
				/* 待機している要求があれば、ウィンドウを開く */
				break;

			case COMMAND_CHANGE_FORMAT_MODE:
				if (fmode == STATUS_LOAD_BOOT_SECTOR_CODE_COMPLETE)
					goto write_exe;
				if (fmode == STATUS_MAKE_PLAIN_BOOT_DISK || fmode == STATUS_MAKE_COMPRESSED_BOOT_DISK) {
					fmode = STATUS_MAKE_PLAIN_BOOT_DISK + STATUS_MAKE_COMPRESSED_BOOT_DISK - fmode;
					lib_putstring_ASCII(0x0000, 0, 0, &win[0].subtitle.tbox, (fmode - 1) * 9, 0, "< Load Systemimage >");
				}
				break;

			case COMMAND_OPEN_CONSOLE:
				if (pcons->curx == -1 && fmode == STATUS_RUN_APPLICATION)
					open_console();
				break;

			case COMMAND_OPEN_MONITOR:
				break;

			case COMMAND_BINEDIT:
				i = (int) ".B ";
		runviewer_ij:
				i = (int) search_viewer0((const unsigned char *) i);
				if (i)
					run_viewer((void *) i, fp);
				break;

			case COMMAND_TXTEDIT:
				i = (int) ".T ";
				goto runviewer_ij;

			case COMMAND_CMPTEK0:
				i = (int) ".P ";
				goto runviewer_ij;

			case COMMAND_MCOPY:
				i = (int) ".U ";
				goto runviewer_ij;

		//	case 99:
		//		lib_putstring_ASCII(0x0000, 0, 0, mode,     0, 0, "< Error 99        > ");
		//		break;
			}
		} else if (CONSOLE_SIGNAL_START <= sig && sig < FILE_SELECTOR_SIGNAL_START) {
			/* console関係のシグナル */
		//	siglen = 1;
			if (CONSOLE_KEY_SIGNAL_START <= sig && sig <= CONSOLE_KEY_SIGNAL_END) {
				/* consoleへの1文字入力 */
				if (pcons->curx >= 0) {
					if (pcons->curx < CONSOLESIZEX - 1) {
						static char c[2] = { 0, 0 };
						c[0] = sig - CONSOLE_SIGNAL_START;
						consoleout(c);
					}
					if (pcons->cursoractive) {
						lib_settimer(0x0001, SYSTEM_TIMER);
						pcons->cursorflag = ~0;
						putcursor();
						lib_settimertime(0x0032, SYSTEM_TIMER, 0x80000000 /* 500ms */, 0, 0);
					}
				}
			} else {
				switch (sig) {
				case CONSOLE_VRAM_ACCESS_ENABLE /* VRAMアクセス許可 */:
					break;

				case CONSOLE_VRAM_ACCESS_DISABLE /* VRAMアクセス禁止 */:
					lib_controlwindow(0x0100, &pcons->win);
					break;

				case CONSOLE_REDRAW_0:
					/* 再描画 */
					lib_controlwindow(0x0207, &pcons->win); /* コンソールは枠だけでいいから */
				case CONSOLE_REDRAW_1:
					/* 差分再描画 */
					lib_controlwindow(0x020f, &pcons->win); /* 枠だけ＆差分モード */
					break;

				case CONSOLE_CHANGE_TITLE_COLOR /* change console title color */:
					siglen++; /* siglen = 2; */
					if (sbp[1] & 0x02) {
						if (!(pcons->cursoractive)) {
							lib_settimer(0x0001, SYSTEM_TIMER);
							pcons->cursoractive = 1;
							pcons->cursorflag = ~0;
							putcursor();
							lib_settimertime(0x0032, SYSTEM_TIMER, 0x80000000 /* 500ms */, 0, 0);
						}
					} else {
						if (pcons->cursoractive) {
							pcons->cursoractive = 0;
							pcons->cursorflag = 0;
							putcursor();
							lib_settimer(0x0001, SYSTEM_TIMER);
						}
					}
					break;

				case CONSOLE_CLOSE_WINDOW /* close console window */:
					if (pcons->cursoractive) {
						pcons->cursoractive = 0;
						lib_settimer(0x0001, SYSTEM_TIMER);
					}
					lib_closewindow(0, &pcons->win);
					pcons->curx = -1;
					break;

				case CONSOLE_CURSOR_BLINK /* cursor blink */:
					if (pcons->sleep != 0 && pcons->cursoractive != 0) {
						pcons->cursorflag =~ pcons->cursorflag;
						putcursor();
						lib_settimertime(0x0012, SYSTEM_TIMER, 0x80000000 /* 500ms */, 0, 0);
					}
					break;

				case CONSOLE_INPUT_ENTER /* consoleへのEnter入力 */:
					if (pcons->curx < 0)
						break;
					const char *p = pcons->buf + pcons->cury * (CONSOLESIZEX + 2) + 5;
					if (pcons->cursorflag != 0 && pcons->cursoractive != 0) {
						pcons->cursorflag = 0;
						putcursor();
					}
					poko_exec_cmd(p);
			prompt:
					consoleout(POKO_PROMPT);
					if (pcons->cursoractive) {
						lib_settimer(0x0001, SYSTEM_TIMER);
						pcons->cursorflag = ~0;
						putcursor();
						lib_settimertime(0x0032, SYSTEM_TIMER, 0x80000000 /* 500ms */, 0, 0);
					}
					break;

				case CONSOLE_INPUT_BACKSPACE /* consoleへのBackSpace入力 */:
					if (pcons->curx >= 0) {
						if (pcons->cursorflag != 0 && pcons->cursoractive != 0) {
							pcons->cursorflag = 0;
							putcursor();
						}
						if (pcons->curx > 5) {
							pcons->curx--;
							consoleout(" ");
							pcons->curx--;
						}
						if (pcons->cursoractive) {
							lib_settimer(0x0001, SYSTEM_TIMER);
							pcons->cursorflag = ~0;
							putcursor();
							lib_settimertime(0x0032, SYSTEM_TIMER, 0x80000000 /* 500ms */, 0, 0);
						}
					}
					break;
				}
			}
		} else {
			/* ファイルセレクタへの一般シグナル */
			win = &selwin[(sig - FILE_SELECTOR_SIGNAL_START) >> 7];
			sig &= 0x7f;
		//	siglen = 1;
			if (fmode == STATUS_LOAD_BOOT_SECTOR_CODE_COMPLETE && sig == SIGNAL_ENTER) {
				putselector0(win, 1, "  Formating...  ");
				putselector0(win, 3, "                ");
				putselector0(win, 5, "  Please wait.  ");
				/* 何があってもキャッシュ無効 */
				for (i = 0; i < MAX_FILEBUF; i++)
					fbuf0[i].dirslot = -1;
				sgg_format(0x0124 /* 1,440KBフォーマット */, SIGNAL_FORMAT_COMPLETE /* finish signal */); // format
				/* 1,760KBフォーマットと1,440KBフォーマットの混在モードは0x0118 */
				fmode = STATUS_FORMAT_COMPLETE;
				goto nextsig;
			}

			if (win->subtitle_str[0]) {
				switch(sig) {
				case SIGNAL_WINDOW_DISABLE_DRAW:
					lib_controlwindow(0x100, &win->window);
					win->flags &= ~FILESELWINFLAG_DRAWENABLED;
					break;

				case SIGNAL_WINDOW_ENABLE_DRAW:
					win->flags |= FILESELWINFLAG_DRAWENABLED;
					break;

				case SIGNAL_WINDOW_REDRAW:
					lib_controlwindow(0x03, &win->window);
					win->flags &= ~FILESELWINFLAG_SBARDIRTY;
					if (win->lp) {
						draw_sbar_frame(win);
						draw_sbar(win->listsize, win->lp - win->list, win);
					}
					lib_controlwindow(0x200, &win->window);
					break;

				case SIGNAL_WINDOW_REDRAW_PARTIAL:
					lib_controlwindow(0x0b, &win->window);
					if (win->flags & FILESELWINFLAG_SBARDIRTY) {
						win->flags &= ~FILESELWINFLAG_SBARDIRTY;
						if (win->lp) {
							draw_sbar_frame(win);
							draw_sbar(win->listsize, win->lp - win->list, win);
						}
					}
					lib_controlwindow(0x200, &win->window);
				//	break;
				}
			}
			if (fmode > STATUS_MAKE_COMPRESSED_BOOT_DISK) {
				if (sig == SIGNAL_MOSPOS)
					siglen = 3;
				goto nextsig; /* boot中は無視 */
			}

			if (win->subtitle_str[0]) {
				int cur = win->cur;
				struct FILELIST *lp = win->lp, *list = win->list;
				fp = lp[cur].ptr;

				switch (sig) {
				case SIGNAL_CURSOR_UP:
					if (cur < 0 /* ファイルが１つもない */)
						break;
					if (cur > 0) {
 						put_file(win, lp[cur].name, cur, 0);
						cur--;
 						put_file(win, lp[cur].name, cur, 1);
					} else if (lp > win->list) {
						lp--;
listup:
						for (i = 0; i < LIST_HEIGHT; i++) {
							if (i != cur)
								put_file(win, lp[i].name, i, 0);
							else
								put_file(win, lp[cur].name, cur, 1);
						}
						if (win->flags & FILESELWINFLAG_DRAWENABLED)
							draw_sbar(win->listsize, lp-list, win);
						else
							win->flags |= FILESELWINFLAG_SBARDIRTY;
					}
					break;

				case SIGNAL_CURSOR_DOWN:
				//	if (cur < 0 /* ファイルが１つもない */)
				//		break;
				//	ファイルがない場合、cur == -1 && lp[0].name[0] == '\0'
				//	なので、以下のifが成立しない。
					if (lp[cur + 1].name[0]) {
						if (cur < LIST_HEIGHT - 1) {
							put_file(win, lp[cur].name, cur, 0);
							cur++;
	 						put_file(win, lp[cur].name, cur, 1);
						} else {
							lp++;
							goto listup;
						}
					}
					break;

				case SIGNAL_ENTER:
				exec_or_open:
					if (cur < 0 /* ファイルが1つもない */)
						break;
					if (pjob->now)
						break; /* ダブルクリック対策 */
					if (win != selwin) { /* not pokon */
						/* ファイルをロードして、仮想モジュールを生成し、
							スロットを設定し、シグナルを発する */
						/* 最後に、ウィンドウを閉じる */
						if ((fbuf = searchfrefbuf()) != NULL && pjob->free >= 5) {
							lib_closewindow(0, &win->window);
							/* 空きが十分にある */
							writejob_n(5, JOB_LOAD_FILE, (int) fbuf, (int) win, win->task, (int) fp);
							lp = NULL;
						//	bank->size = -1; /* これは何だ？？？ */
						}
						break;
					}
					if (win->ext == ext_ALL) {
						/* ALLファイルモード */
						runfile(fp, lp[cur].name);
						break;
					}

					/* .EXEファイルモード */
					/* キャッシュチェックをしない */
					if (pjob->free >= 4) {
						/* 空きが十分にある */
						fmode = STATUS_FORMAT_COMPLETE;
						if ((i = (int) searchfrefbuf()) == 0)
							break;
						if ((fbuf = searchfrefbuf()) == NULL)
							break;
						writejob_n(4, JOB_LOAD_FILE_AND_FORMAT,
							(int) fp, i, (int) fbuf);
					}
					break;

				case SIGNAL_CURSOR_PAGE_UP:
					if (cur < 0 /* ファイルが１つもない */
						|| lp == list && cur == 0)
						break;
					lp += cur - LIST_HEIGHT;
					if (lp < list)
						lp = list;
					cur = 0;
					goto listup;

				case SIGNAL_CURSOR_PAGE_DOWN:
					if (cur < 0 /* ファイルが１つもない */
						|| lp+cur >= list+win->listsize-1)
						break;
					i = win->listsize - LIST_HEIGHT;
					if (i < 0)
						cur = win->listsize - 1;
					else{
						lp += cur+1;
						if (lp > list + i)
							lp = list + i;
						cur = LIST_HEIGHT -1;
					}
					goto listup;

				case SIGNAL_MOSPOS:
					win->mosx = sbp[1];
					win->mosy = sbp[2];
					siglen = 3;
					if (win->flags & FILESELWINFLAG_GRABBED) {
						if (win->listsize > LIST_HEIGHT) {
							i = (win->mosy - win->grabbedy) * win->listsize / SBARH;
							if (i < 0) {
								if (cur < 0)
									break;
								if (win->grabbedlp - list + i < 0)
									i = - (win->grabbedlp - list);
								goto scroll;
							} else if (i > 0) {
								if (cur < 0)
									break;
								if (win->grabbedlp - list + i + LIST_HEIGHT > win->listsize)
									i = win->listsize - (LIST_HEIGHT + win->grabbedlp - list);
							scroll:
								if (lp != win->grabbedlp + i) {
									cur += lp - (win->grabbedlp + i);
									lp = win->grabbedlp + i;
									if (cur > LIST_HEIGHT - 1)
										cur = LIST_HEIGHT - 1;
									if (cur < 0)
										cur = 0;
								goto listup;
								}
							}
						}
					} else
						win->flags |= FILESELWINFLAG_SBARDIRTY;
					break;

				case SIGNAL_MOSBTN:
					if (cur >= 0 && (unsigned)(win->mosx - SBARX0) < SBARW){
					  #if defined(WIN9X) || defined (WIN31) || defined(NEWSTYLE) || defined(TMENU)
						/* scroll line up button */
						if ((unsigned)(win->mosy - (SBARY0-SBARW)) < SBARW){
							lp--;
							if (lp < list)
								lp = list;
							else{
								cur++;
								if (cur > LIST_HEIGHT-1)
									cur = LIST_HEIGHT-1;
								goto listup;
							}
						}
						/* scroll line down button */
						if ((unsigned)(win->mosy - (SBARY1+1)) < SBARW){
							lp++;
							if (lp > list +win->listsize-LIST_HEIGHT){
								if (win->listsize <= LIST_HEIGHT)
									lp = list;
								else
									lp = list +win->listsize-LIST_HEIGHT;
							}else{
								cur--;
								if (cur < 0)
									cur = 0;
								goto listup;
							}
						}
					  #endif
						/* scroll bar page up/down */
						if ((unsigned)(win->mosy - SBARY0) < SBARH){
							if (win->mosy < win->shndly0)
								goto page_up;
							else if (win->mosy >= win->shndly1)
								goto page_down;
							else{
								win->flags |= FILESELWINFLAG_GRABBED;
								win->grabbedy = win->mosy;
								win->grabbedlp = lp;
							}
						}
					}
					/* move cursor */
					if (cur >= 0 && (unsigned)(win->mosx - LISTX0) < LISTW){
						int newcur = win->mosy - LISTY0;
						if ((unsigned)newcur < LISTH){
							int oldcur = cur;
							newcur /= 16;
							if (oldcur == newcur)
								goto exec_or_open;
							cur = newcur;
							newcur = list+win->listsize -lp -1; /* max */
							if (cur > newcur)
								cur = newcur;
							if (oldcur != cur){
								put_file(win, lp[cur].name, cur, 1);
								put_file(win, lp[oldcur].name, oldcur, 0);
							}
						}
					}
					break;

				case SIGNAL_MOSBTN+3:
					win->flags &= ~FILESELWINFLAG_GRABBED;
					break;

				case SIGNAL_PAGE_UP:
				page_up:
					if (cur < 0 || lp == list)
						break;
					i = lp - list;
					if (i >  LIST_HEIGHT)
						i = LIST_HEIGHT;
					lp -= i;
					cur += i;
					if (cur > LIST_HEIGHT-1)
						cur = LIST_HEIGHT-1;
					goto listup;

				case SIGNAL_PAGE_DOWN:
				page_down:
					if (cur < 0)
						break;
					i = win->listsize - (lp - list + LIST_HEIGHT);
					if (0 >= i)
						break;
					if (i > LIST_HEIGHT) // 残りが1画面分より多い
						i = LIST_HEIGHT;
					lp += i;
					cur -= i;
					if (cur < 0)
						cur = 0;
					goto listup;

				case SIGNAL_TOP_OF_LIST:
					if (cur < 0 /* ファイルが１つもない */ || lp - list + cur <= 0)
						break;
					lp = list;
					cur = 0;
					goto listup;

				case SIGNAL_BOTTOM_OF_LIST:
					if (cur < 0 /* ファイルが１つもない */)
						break;
					i = win->listsize;
					if ((lp-list)+cur >= i)
						break;
					lp = list;
					if (i < LIST_HEIGHT) {
						// ファイル数が1画面分に満たなかった
						cur = i - 1;
					} else {
						lp += i - LIST_HEIGHT;
						cur = LIST_HEIGHT - 1;
					}
					goto listup;

				case SIGNAL_DISK_CHANGED:
					/* Insert */
					writejob_n(2, JOB_CHECK_WB_CACHE, JOB_INVALID_DISKCACHE);
					break;

				case SIGNAL_START_WB:
					/* Delete */
					writejob_n(2, JOB_CHECK_WB_CACHE, JOB_WRITEBACK_CACHE);
					break;

				case SIGNAL_FORCE_CHANGED:
					/* Shift+Insert */
					writejob_n(3, JOB_CHECK_WB_CACHE, JOB_INVALID_WB_CACHE,
						JOB_INVALID_DISKCACHE);
					break;

				case SIGNAL_CHECK_WB_CACHE:
					/* Shift+Delete */
					writejob_1(JOB_CHECK_WB_CACHE);
					break;

				case SIGNAL_CREATE_NEW:
					writejob_n(6, JOB_CREATE_FILE, 'N' | 'E' << 8 | 'W' << 16 | '_' << 24,
						'F' | 'I' << 8 | 'L' << 16 | 'E' << 24, '.' | ' ' << 8 | ' ' << 16 | ' ' << 24,
						0, 0);
					break;

				case SIGNAL_DELETE_FILE:
					if (cur < 0 /* ファイルが1つもない */)
						break;
					if (pjob->free >= 15) {
						/* 空きが十分にある */
						int name[3];
						char *cname = lp[cur].name;
						name[0] = cname[0] | cname[1] << 8 | cname[2] << 16 | cname[3] << 24;
						name[1] = cname[4] | cname[5] << 8 | cname[6] << 16 | cname[7] << 24;
						name[2] = '.' | cname[8] << 8 | cname[9] << 16 | cname[10] << 24;
						writejob_1(JOB_RESIZE_FILE);
						writejob_3p(&name[0]);
						writejob_n(5, 0, 0, 0, 0, JOB_DELETE_FILE);
						writejob_3p(&name[0]);
						writejob_n(3, 0, 0, 0);
					}
					break;

				case SIGNAL_RESIZE:
					i = (int) "..S";
					goto runviewer_ij;

				case SIGNAL_CHANGE_SORT_MODE:
					if (fmode == STATUS_RUN_APPLICATION) {
						sort_mode = (sort_mode + 1) % SORTS;
						/* 全てのファイルセレクタを更新 */
						goto refresh_selector;
				    }
				    goto nextsig;

				case SIGNAL_WINDOW_CLOSE0 /* close window */:
#if 0	/* 一般ウィンドウが閉じられんので削除 */
					if (i == 0){
						lib_execcmd0(0x48,1,&win->window,0xc0, 0,0, 15,0, 2,'C','R',0);	/* デバッグメッセージ */
						break;
					}
#endif
					/* キャンセルを通知して、閉じる */
					/* 待機しているものがあれば、応じる(応じるのは127を受け取ってからにする) */
					sendsignal1dw(win->task, win->sig[1] + 1 /* cancel */);
					lp = NULL;
					lib_closewindow(0, &win->window);
					win->mdlslot = -2;
					break;

				case SIGNAL_WINDOW_CLOSE1 /* closed window */:
					win->subtitle_str[0] = '\0';
					lp = win->list;
					if (win->mdlslot == -2) {
						win->task = 0;
						selwincount--;
					}
					break;

				default:
					if (SIGNAL_DISK_CHANGE0 <= sig && sig <= SIGNAL_DISK_CHANGE0 + 9) {
						writejob_n(3,
							JOB_CHECK_WB_CACHE,
							JOB_CHANGE_DRIVE, sig - SIGNAL_DISK_CHANGE0
						);
						break;
					}

					/* search filename */
					if (cur < 0 /* ファイルが１つもない */)
						break;
					/* search from current to bottom */
				//	lp = win->lp;
					for (i = cur + 1; lp[i].name[0]; i++) {
						if (lp[i].name[0] == sig) {
							cur = i;
							j = LIST_HEIGHT - 1;
							if (cur >= LIST_HEIGHT - 1) {
								if (lp[i + 1].name[0] != '\0')
									j--; /* 下から 2段目 */
					search_fixcur:
								lp += cur - j;
								cur = j;
							}
							goto listup;
						}
					}
					/* search from top to current */
					if (lp[i].name[0] == '\0') {
						lp = list;
						for (i = 0; lp[i].name[0] && lp != win->lp + cur; i++) {
							if (lp[i].name[0] == sig) {
								cur = i;
								for (i = 1; i <= LIST_HEIGHT - 1; ++i) {
									if (lp[cur + i].name[0] == '\0')
										break;
								}
								j = LIST_HEIGHT - i;
								if (cur > j)
									goto search_fixcur;
								goto listup;
							}
						}
					}
					goto nextsig;
				}
				win->cur = cur;
				win->lp = lp;
			}
		}
nextsig:
		if (siglen) {
			#if (!defined(PROCESS_ALL_POOLED_SIGNAL))
				lib_waitsignal(0x0000, siglen, 0);
			#else
				_siglen += siglen;
			#endif
			sbp += siglen;
		}
		while (*sbp == 0 && selwaitcount != 0 && selwincount < MAX_SELECTOR && fmode == STATUS_RUN_APPLICATION) {
			static char t[24] = "< for ########     >";
			unsigned char *fp0 = (char *) readCSd10, *p;
			for (swait = selwait; swait->task == 0; swait++);
			for (win = &selwin[1]; win->task; win++);
			selwaitcount--;
			selwincount++;
			/* task, slot, num, siglen, sig[16]を取得 */
			win->lp = win->list; /* window-close処理中でないことを明示 */
			win->task = swait->task;
			win->mdlslot = swait->slot;
		//	i = swait->bytes & 0x80000000;
			sgg_debug00(0, swait->bytes & 0x7fffffff, 0, swait->ofs,
				swait->sel | (win->task << 8) + 0xf80000, (const int) subcmd, 0x000c);
			swait->task = 0;
			bank = NULL;
			if (win->task >= 0x5000)
				for (bank = banklist; bank->tss != win->task; bank++);
			if (subcmd[0] == 0xffffff01 /* num */) {
				win->num = subcmd[1];
				win->siglen = subcmd[3];
				win->sig[0] = subcmd[4];
				win->sig[1] = subcmd[5];
				fp = NULL;
				for (i = 0; i < MAX_ORDER; i++) {
					if (order[i].task == win->task && order[i].num == win->num) {
						order[i].task = 0;
						fp = order[i].fp;
					}
				}
				if (bank != NULL && bank->arcbuf != NULL) {
					arcsub_map(bank->arcbuf, fp0);
					p = arcsub_srchnum(bank->arcbuf, fp0, win->num);
					if (p) {
						i = (arcsub_gethex(&p[0x30]) >> 4) & 0x07; /* optionsのbit4-6 */
						if ((i == 1 && fp == NULL) || i == 0) {
							/* 反応する */
							int size3;
			arcmatch:
							p = arcsub_srchname0(bank->arcbuf, fp0, &p[0x10], &size3, &i);
							if (p) {
								i += bank->arcbuf->paddr;
								fbuf = searchfbuf0(i);
								if (fbuf)
									fbuf->linkcount++;
								else {
									if ((fbuf = searchfrefbuf()) != NULL) {
										fbuf->linkcount = 1;
										fbuf->readonly = 1;
										fbuf->paddr = i;
										fbuf->size = size3;
										fbuf->arcbuf = bank->arcbuf;
										fbuf->dirslot = fbuf->paddr;
										fbuf->virtualmodule = sgg_createvirtualmodule(fbuf->size, fbuf->paddr);
									}
								}
								if (fbuf) {
									bank->arcbuf->linkcount++;
									job_load_file1(win, fbuf, bank->tss);
									win->mdlslot = -2;
									win->task = 0;
									selwincount--;
									arcsub_unmap(bank->arcbuf, fp0);
									continue;
								}
							}
						}
					}
					arcsub_unmap(bank->arcbuf, fp0);
				}
				if (fp)
					goto open_redirect;
				for (i = 0; i < 8; i++)
					t[i + 6] = bank->name[i];
				openselwin(win, "(open)", t);
				win->ext = ext_ALL;
				list_set(win);
				continue;
			}
			if (subcmd[0] == 0xffffff03 /* direct-name */) {
				/* とりあえず、名前は12バイト固定(最後のバイトは00) */
				/* 最後のバイトを01にしてもいい。01は強制移動 */
				win->siglen = subcmd[6];
				win->sig[0] = subcmd[7];
				win->sig[1] = subcmd[8];
				fp = searchfid((unsigned char *) &subcmd[2]);
				if (bank != NULL && bank->arcbuf != NULL) {
					arcsub_map(bank->arcbuf, fp0);
					p = arcsub_srchname1(bank->arcbuf, fp0, (unsigned char *) &subcmd[2]);
					if (p) {
						i = arcsub_gethex(&p[0x30]) & 0x07; /* optionsのbit0-2 */
						if ((i == 1 && fp == NULL) || i == 0) {
							if (arcsub_srchname0(bank->arcbuf, fp0, &p[0x10], NULL, NULL))
								goto arcmatch;
						}
					}
					arcsub_unmap(bank->arcbuf, fp0);
				}
				if (fp == NULL) {
					/* 強制生成 */
					if ((swait->bytes & 0x80000000) != 0 && pjob->free >= 16 && (fbuf = searchfrefbuf()) != NULL) {
						/* 空きが十分にある */
						writejob_1(JOB_CREATE_FILE);
						writejob_3p(&subcmd[2]);
						writejob_n(2, 0, 0 /* task, signal */);
						writejob_n(2, JOB_SEARCH_FP, (int) win); /* fp__に代入する */
						writejob_3p(&subcmd[2]);
						writejob_n(5, JOB_LOAD_FILE, (int) fbuf, (int) win, win->task, NULL);
						continue;
					}
					goto error_sig;
				}
open_redirect:
				/* 見付かった */
				if ((fbuf = searchfrefbuf()) != NULL &&
					writejob_n(5, JOB_LOAD_FILE, (int) fbuf, (int) win, win->task, fp))
					continue;

error_sig:
				/* エラーなのでslotを無効にしようかとも思ったが、そこまでやることもないよな */
#if 0
				k = (0x003c /* slot_sel */ | win->task << 8) + 0xf80000;
				sgg_directwrite(0, 4, 0, win->mdlslot, k, (int) &j, 0x000c);
#endif
				sendsignal1dw(win->task, win->sig[1] + 1);
				win->task = 0;
				selwincount--;
#if 0
				continue;
#endif
			}
		}

		if (pjob->now == 0)
			runjobnext();

	} /* for (;;) */
}

void open_monitor()
/*	モニターをオープンする */
{



}

void putconsline(int y)
{
	struct STR_CONSOLE *pcons = console;
	char *bp = pcons->buf + y * (CONSOLESIZEX + 2);
	lib_putstring_ASCII(0x0001, 0, y, &pcons->tbox.tbox,
		bp[CONSOLESIZEX + 1] & 0x0f, (bp[CONSOLESIZEX + 1] >> 4) & 0x0f, bp);
	return;
}

void consoleout(char *s)
{
	struct STR_CONSOLE *pcons = console;
	char *cbp0 = pcons->buf + pcons->cury * (CONSOLESIZEX + 2);
	if (pcons->curx != -1) {
		while (*s) {
			if (*s == '\n') {
				s++;
				cbp0[CONSOLESIZEX + 1] = pcons->col;
				putconsline(pcons->cury);
				pcons->cury++;
				pcons->curx = 0;
				if (pcons->cury == CONSOLESIZEY) {
					/* スクロールする */
					int i, j;
					char *bp = pcons->buf;
					bp[CONSOLESIZEY * (CONSOLESIZEX + 2) + (CONSOLESIZEX + 1)] = pcons->col;
					for (j = 0; j < CONSOLESIZEY; j++) {
						for (i = 0; i < CONSOLESIZEX + 2; i++)
							bp[i] = bp[i + (CONSOLESIZEX + 2)];
						putconsline(j);
						bp += CONSOLESIZEX + 2;
					}
					pcons->cury = CONSOLESIZEY - 1;
				}
				cbp0 = pcons->buf + pcons->cury * (CONSOLESIZEX + 2);
			} else {
				cbp0[pcons->curx++] = *s++;
			}
		}
		cbp0[CONSOLESIZEX + 1] = pcons->col;
		putconsline(pcons->cury);
	}
	return;
}

void open_console()
/*	コンソールをオープンする */
/*	カーソル点滅のために、setmodeも拾う */
/*	カーソル点滅のためのタイマーをイネーブルにする */
{
	static char charsetinit = 1;
	struct STR_CONSOLE *pcons = console;
	struct LIB_WINDOW *win = &pcons->win;
	int i, j;
	char *bp;

	if (charsetinit) {
		/* キャラクターセットの用意 */

		#if (!defined(NEWSTYLE))
			static unsigned char conscurfnt[] = {
				0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
				0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
			};
		#elif (defined(NEWSTYLE))
			static unsigned char conscurfnt[] = {
				0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 
				0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00
			};
		#endif

		lib_loadfontset0(0x80000001 /* ANK font (8x16 mono) */, 0x0300 /* slot */);
		lib_loadfontset(1 /* type(8x16 mono) */, 0x0310 /* slot */, 1 /* len */, conscurfnt);
		lib_makecharset(0, 0x0320, 0x0300, 0xff, 0, 0x00);
		lib_makecharset(0, 0x0330, 0x0310, 1,    0, 0xff);
		lib_makecharset(0, 0x0340, 0, 0, 0, 0);
		charsetinit = 0;
	}

	lib_openwindow1_nm(win, 0x0200, CONSOLESIZEX * 8, CONSOLESIZEY * 16, 0x0d, 256);
	lib_opentextbox_nm(0x1000, &pcons->title.tbox, 0, 16,  1,  0,  0, win, 0x00c0, 0);
	lib_opentextbox_nm(0x0001, &pcons->tbox.tbox,  0, CONSOLESIZEX, CONSOLESIZEY,  0,  0, win, 0x0320, 0); // 5KB
	lib_putstring_ASCII(0x0000, 0, 0, &pcons->title.tbox, 0, 0, POKON_VERSION" console");

	bp = pcons->buf;
	for (j = 0; j < CONSOLESIZEY + 1; j++) {
		for (i = 0; i < CONSOLESIZEX; i++) {
			*bp++ = ' ';
		}
		bp[0] = '\0';
		bp[1] = 0;
		bp += 2;
	}
	lib_definesignal1p0(0x7f - ' ', 0x0100, ' ',              win, CONSOLE_KEY_SIGNAL_START);
	lib_definesignal1p0(1,    0x0100, 0xa0 /* Enter */, win, CONSOLE_INPUT_ENTER);
	lib_definesignal0p0(0, 0, 0, 0);
	pcons->curx = pcons->cury = pcons->cursoractive = pcons->sleep = 0;
	pcons->col = 15;
//	consoleout(POKO_VERSION);
//	consoleout(POKO_PROMPT);
	consoleout(POKO_VERSION POKO_PROMPT);
	if (pcons->cursoractive) {
		lib_settimer(0x0001, SYSTEM_TIMER);
		pcons->cursorflag = ~0;
		putcursor();
		lib_settimertime(0x0032, SYSTEM_TIMER, 0x80000000 /* 500ms */, 0, 0);
	}
	return;
}

const int console_getdec(const char **p)
{
	const char *cmdlin = *p;
	int dec = 0, mul = 10, sign = 1;
	while (*cmdlin == ' ')
		cmdlin++;
	if (*cmdlin == '+')
		cmdlin++;
	if (*cmdlin == '-') {
		cmdlin++;
		sign = -1;
	}
	if (*cmdlin == '0') {
		cmdlin++;
		if (*cmdlin == 'X' || *cmdlin == 'x') {
			mul = 16;
			cmdlin++;
		} else if (*cmdlin == 'B' || *cmdlin == 'b') {
			mul = 2;
			cmdlin++;
		} else if ('0' <= *cmdlin && *cmdlin <= '7') {
			mul = 8;
		}
	}
	for (;;) {
		unsigned char c = *cmdlin;
		if ('0' <= c && c <= '9')
			dec = dec * mul + c - '0';
		else if ('A' <= c && c <= 'F')
			dec = dec * mul + c - 'A' + 0xa;
		else if ('a' <= c && c <= 'f')
			dec = dec * mul + c - 'a' + 0xa;
		else if (c != '_')
			break;
		cmdlin++;
	}
	*p = cmdlin;
	return sign * dec;
}

const int cons_getdec_skpspc(const char **p)
{
	const char *s = *p;
	int i = console_getdec(&s);
	while (*s == ' ')
		s++;
	*p = s;
	return i;
}

int poko_memory(const char *cmdlin)
{
	static struct {
		int cmd, opt, mem20[4], mem24[4], mem32[4], eoc;
	} command = { 0x0034, 0, { 0 }, { 0 }, { 0 }, 0x0000 };
	char str[12];
//	if (*cmdlin) return -ERR_ILLEGAL_PARAMETERS;

	sgg_execcmd(&command);
	consoleout(       "\n20bit memory : ");
	itoa10(command.mem20[1 /* free */] >> 10, str);
	consoleout(str + 3);
	consoleout("KB free\n24bit memory : ");
	itoa10(command.mem24[1 /* free */] >> 10, str);
	consoleout(str + 3);
	consoleout("KB free\n32bit memory : ");
	itoa10(command.mem32[1 /* free */] >> 10, str);
	consoleout(str + 3);
	consoleout("KB free");
	return 1;
}

int poko_color(const char *cmdlin)
{
	int param0, param1 = console->col & 0xf0;
//	if (*cmdlin == '\0')
//		goto error;

	param0 = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin) {
		param1 = cons_getdec_skpspc(&cmdlin) << 4;
		if (*cmdlin)
			goto error;
	}
	consoleout("\n");
	console->col = param0 | param1;
	return 0;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_cls(const char *cmdlin)
{
	struct STR_CONSOLE *pcons = console;
	int i, j;
	char *bp = pcons->buf;
//	if (*cmdlin)
//		return -ERR_ILLEGAL_PARAMETERS;
	for (j = 0; j < CONSOLESIZEY; j++) {
		for (i = 0; i < CONSOLESIZEX + 2; i++)
			bp[i] = (pcons->buf)[i + (CONSOLESIZEX + 2) * CONSOLESIZEY];
		putconsline(j);
		bp += CONSOLESIZEX + 2;
	}
	pcons->cury = 0;
	return 0;
}
/* mouseaccelを付けたのでもういらないかと
int poko_mousespeed(const char *cmdlin)
{
	int param;
//	if (*cmdlin == '\0')
//		goto error;
	param = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	sgg_wm0s_sendto2_winman0(0x6f6b6f70 + 0, param); // mousespeed
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}
*/

int poko_mouseaccel(const char *cmdlin)
{
	int param, param2;
//	if (*cmdlin == '\0')
//		goto error;
	param = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin == '\0')
		goto error;
	param2 = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	sgg_execcmd0(0x0020, 0x80000000 + 5, 0x3244, 0x7f000003, 0x6f6b6f70 + 1, param, param2, 0x0000);
//	sgg_wm0s_sendto2_winman0(0x6f6b6f70 + 1 /* mouseaccel */, param, param2);
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_setdefaultIL(const char *cmdlin)
{
//	if (*cmdlin == '\0')
//		goto error;
	defaultIL = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_tasklist(const char *cmdlin)
{
	char str[12];
	static char msg[] = "000 name----\n";
	int i, j;
	struct STR_BANK *bank = banklist;
//	if (*cmdlin)
//		return -ERR_ILLEGAL_PARAMETERS;
	consoleout("\n");
	for (i = 0; i < MAX_BANK; i++) {
		if (bank[i].tss <= 0)
			continue;
		itoa10(bank[i].tss >> 12, str);
		msg[0] = str[ 8]; /* 100の位 */
		msg[1] = str[ 9]; /*  10の位 */
		msg[2] = str[10]; /*   1の位 */
		for (j = 0; j < 8; j++)
			msg[4 + j] = bank[i].name[j];
		consoleout(msg);
	}
	return 0;
}

int poko_sendsignalU(const char *cmdlin)
{
	int task, sig;
//	if (*cmdlin == '\0')
//		goto error;
	task = cons_getdec_skpspc(&cmdlin) * 4096 + 0x0242;
	if (*cmdlin == '\0')
		goto error;
	sig = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	sendsignal1dw(task, sig);
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_LLlist(const char *cmdlin)
{
	int task, i;
	struct STR_BANK *bank = banklist;
//	if (*cmdlin == '\0')
//		goto error;
	task = cons_getdec_skpspc(&cmdlin) * 4096;
	for (i = 0; i < MAX_BANK; i++) {
		if (bank[i].tss == task)
			goto find;
	}
error:
	return -ERR_ILLEGAL_PARAMETERS;

find:
	bank += i;
	if (*cmdlin)
		goto error;
	consoleout("\nLL GL   IL\n");
	for (i = 0; i < 3; i++) {
		int global;
		char msg[16], str[16];
		msg[ 0] = i + '0';
		msg[ 1] = ' ';
		itoa10(global = bank->Llv[i].global, str);
		msg[ 2] = str[ 8];
		msg[ 3] = str[ 9];
		msg[ 4] = str[10];
		msg[ 5] = ' ';
		msg[ 6] = '-';
		msg[ 7] = '-';
		msg[ 8] = '-';
		msg[ 9] = '-';
		if (global == 12) {
			itoa10(bank->Llv[i].inner, str);
			msg[ 6] = str[ 7];
			msg[ 7] = str[ 8];
			msg[ 8] = str[ 9];
			msg[ 9] = str[10];
		}
		msg[10] = '\n';
		msg[11] = '\0';
		consoleout(msg);
	}
	return 0;
}

int poko_setIL(const char *cmdlin)
{
	int task, i, l;
	struct STR_BANK *bank = banklist;
//	if (*cmdlin == '\0')
//		goto error;
	task = cons_getdec_skpspc(&cmdlin) * 4096;
	for (i = 0; i < MAX_BANK; i++) {
		if (bank[i].tss == task)
			goto find;
	}
error:
	return -ERR_ILLEGAL_PARAMETERS;

find:
	bank += i;
	if (*cmdlin == '\0')
		goto error;
	l = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin != '\0')
		goto error;
	if (l == 0)
		goto error;
	
	sgg_settasklocallevel(task,
		1 * 32 /* local level 1 (起動・システム処理レベル) */,
		12 * 64 + 0x0100 /* global level 12 (一般アプリケーション) */,
		l /* Inner level */
	);
	bank->Llv[1].global = 12;
	bank->Llv[1].inner  = l;
	sgg_settasklocallevel(task,
		2 * 32 /* local level 2 (通常処理レベル) */,
		16 * 64 /* global level 16 (一般アプリケーション) */,
		l /* Inner level */
	);
	bank->Llv[2].global = 12;
	bank->Llv[2].inner  = l;
	return 1;
}

const char *pokosub_getfilename(const char *p, char *s)
{
	int i, c;
	while (*p <= ' ' && *p != '\0')
		p++;
	s[0] = '\0';
	for (i = 1; i < 12; i++)
		s[i] = ' ';
	s[8] = '.';
	for (i = 0; i < 12; i++, p++) {
		c = *p;
		if (c <= ' ')
			break;
		if (c == '.')
			i = 8;
		if ('a' <= c && c <= 'z')
			c += 'A' - 'a';
		s[i] = c;
	}
	while (*p > ' ')
		p++;
	while (*p <= ' ' && *p != '\0')
		p++;
	return p;
}

int poko_create(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename = { 0 };
	struct STR_JOBLIST *pjob = &job;

	cmdlin = pokosub_getfilename(cmdlin, filename.s);
	if (filename.s[0] == '\0')
		goto error;
	if (*cmdlin != '\0')
		goto error;
	if (pjob->free >= 6) {
		/* 空きが十分にある */
		writejob_1(JOB_CREATE_FILE);
		writejob_3p(&filename.i[0]);
		writejob_n(2, 0, 0 /* task, signal */);
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_delete(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename = { 0 };
	struct STR_JOBLIST *pjob = &job;
	cmdlin = pokosub_getfilename(cmdlin, filename.s);
	if (filename.s[0] == '\0')
		goto error;
	if (*cmdlin != '\0')
		goto error;
	if (pjob->free >= 15) {
		/* 空きが十分にある */
		writejob_1(JOB_RESIZE_FILE);
		writejob_3p(&filename.i[0]);
		writejob_n(5, 0 /* new-size */, 0 /* max-linkcount */,
			0 /* task */, 0 /* signal */, JOB_DELETE_FILE);
		writejob_3p(&filename.i[0]);
		writejob_n(3, 0 /* max-linkcount */, 0 /* task */, 0 /* signal */);
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_rename(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename0 = { 0 }, filename1 = { 0 };
	struct STR_JOBLIST *pjob = &job;
	cmdlin = pokosub_getfilename(cmdlin, filename0.s);
	cmdlin = pokosub_getfilename(cmdlin, filename1.s);
	if (filename0.s[0] == '\0')
		goto error;
	if (filename1.s[0] == '\0')
		goto error;
	if (*cmdlin != '\0')
		goto error;
	if (pjob->free >= 9) {
		/* 空きが十分にある */
		writejob_1(JOB_RENAME_FILE);
		writejob_3p(&filename0.i[0]);
		writejob_3p(&filename1.i[0]);
		writejob_n(2, 0, 0);
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_resize(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename = { 0 };
	struct STR_JOBLIST *pjob = &job;
	int size;
	cmdlin = pokosub_getfilename(cmdlin, filename.s);
	if (filename.s[0] == '\0')
		goto error;
	if (*cmdlin == '\0')
		goto error;
	size = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin != '\0')
		goto error;
	if (pjob->free >= 8) {
		/* 空きが十分にある */
		writejob_1(JOB_RESIZE_FILE);
		writejob_3p(&filename.i[0]);
		writejob_n(4, size, 0 /* max-linkcount */, 0 /* task */, 0 /* signal */);
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_nfname(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename = { 0 };
	struct STR_JOBLIST *pjob = &job;
	cmdlin = pokosub_getfilename(cmdlin, filename.s);
	if (filename.s[0] == '\0')
		goto error;
	if (*cmdlin != '\0')
		goto error;
	if (pjob->free >= 9) {
		/* 空きが十分にある */
		writejob_n(4, JOB_RENAME_FILE, 'N' | 'E' << 8 | 'W' << 16 | '_' << 24,
			'F' | 'I' << 8 | 'L' << 16 | 'E' << 24, '.' | ' ' << 8 | ' ' << 16 | ' ' << 24);
		writejob_3p(&filename.i[0]);
		writejob_n(2, 0, 0 /* task, signal */);
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

struct STR_BANK *run_viewer(struct STR_VIEWER *viewer, struct SGG_FILELIST *fp2)
{
	int i;
	struct STR_JOBLIST *pjob = &job;
	struct FILEBUF *fbuf;
	struct STR_BANK *bank;
	struct SGG_FILELIST *fp;

	if ((bank = searchfrebank()) == NULL)
		goto ret_null;
	for (i = 0; i < 12; i++)
		bank->name[i] = viewer->binary[i];
//	bank->name[11] = '\0';
	if ((fp = searchfid1(viewer->binary)) == NULL)
		goto error;
	if ((fbuf = searchfrefbuf()) == NULL)
		goto error;

	if (pjob->free >= 10) {
		/* 空きが十分にある */
		writejob_n(6, JOB_VIEW_FILE, (int) fp, (int) fbuf, (int) bank, 1 /* num */, fp2);
		writejob_np(4, &viewer->signal[0]);
		return bank;
	}
	fbuf->linkcount = 0;
error:
	bank->tss = 0;
ret_null:
	return NULL;
}

void runfile(struct SGG_FILELIST *fp, char *name)
/* nameにはピリオドを含まない */
{
	int i, j;
	struct STR_BANK *bank;
	struct FILEBUF *fbuf;

	j = name[8] | name[9] << 8 | name[10] << 16;
	if (j == ('B' | 'I' << 8 | 'N' << 16)) {
		if ((bank = searchfrebank()) == NULL)
			goto ret;
		for (i = 0; i < 11; i++)
			bank->name[i] = name[i];
		bank->name[11] = '\0';
		if ((fbuf = searchfrefbuf()) == NULL)
			goto ret;
		writejob_n(4, JOB_LOAD_FILE_AND_EXECUTE, (int) fp,
			(int) fbuf, (int) bank);
			goto ret;
	}
	if (j == ('P' | 'S' << 8 | 'F' << 16)) {
		writejob_n(4, JOB_LOAD_AND_EXEC_PSF,
			name[0] | name[1] << 8 | name[2] << 16 | name[3] << 24,
			name[4] | name[5] << 8 | name[6] << 16 | name[7] << 24,
			'.' | 'P' << 8 | 'S' << 16 | 'F' << 24
		);
		goto ret;
	}
	i = (int) search_viewer0(&name[8]);
	if (i == 0)
		i = (int) search_viewer0("***");
	if (i != 0)
		run_viewer((void *) i, fp);
ret:
	return;
}

int poko_autodecomp(const char *cmdlin)
{
	int param;
//	if (*cmdlin == '\0')
//		goto error;
	param = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	auto_decomp = param;
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_sortmode(const char *cmdlin)
{
	int param, i;

//	if (*cmdlin == '\0')
//		goto error;
	param = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	if (param < SORT_NAME)
		goto error;
	if (param >= SORTS)
		goto error;
	sort_mode = param;
	/* 全てのファイルセレクタを更新 */
	for (i = 0; i < MAX_SELECTOR; i++) {
		if (selwin0[i].subtitle_str[0])
			list_set(&selwin0[i]);
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_kill(const char *cmdlin)
{
	int task, i;
	struct STR_BANK *bank = banklist;
//	if (*cmdlin == '\0')
//		goto error;
	task = cons_getdec_skpspc(&cmdlin) * 4096;
	for (i = 0; i < MAX_BANK; i++) {
		if (bank[i].tss == task)
			goto find;
	}
error:
	return -ERR_ILLEGAL_PARAMETERS;

find:
	sgg_execcmd0(0x0020, 0x80000000 + 3, task | 0x0242, 0x0020, 0, 0x0000);
	return 1;
}

#if (defined(PCAT))

void sethex4(char *s, int i)
{
	int j = 3;
	i &= 0xffff;
	s[0] = s[1] = s[2] = ' ';
	do {
		s[j] = "0123456789ABCDEF"[i & 0x0f];
		j--;
	} while (i >>= 4);
	return;
}

void setdec4(char *s, int i)
{
	int j = 3;
	if (i > 9999)
		i = 9999;
	s[0] = s[1] = s[2] = ' ';
	do {
		s[j] = (i % 10) + '0';
		j--;
	} while (i /= 10);
	return;
}

int poko_vesalist(const char *cmdlin)
{
	int i;
	unsigned char c0, c1;
	struct STR_VBEMODE *lp;
	static char foundmsg[] = "\nVESA-  BIOS is found.\n";
	static char msg[] = "    .     x         ";
	lp = vbebuf;
	if (*cmdlin == '\0')
		goto error;
	i = cons_getdec_skpspc(&cmdlin);
	if (i < 0)
		goto error;
	if (i > 3)
		goto error;
//	if (vbebuf[127].flag == 0) {
//		consoleout("\nVESA-info isn't got yet.");
//		return 1;
//	}
	if (vbebuf[127].dummy == 0) {
		consoleout("\nVESA BIOS is not found.");
		return 1;
	}
	foundmsg[6] = '0' + vbebuf[127].dummy;
	consoleout(foundmsg);
	c0 = c1 = i;
	if (i == 0) {
		c0 = 16;
		c1 = 19;
	}
	i = 0;
	while (lp->mode) {
		if (c0 <= lp->flag && lp->flag <= c1) {
			sethex4(&msg[ 0], lp->mode);
			setdec4(&msg[ 6], lp->x_res);
			setdec4(&msg[11], lp->y_res);
			msg[16] = 'W';
			if (lp->dummy)
				msg[16] = 'L';
			msg[17] = '1' - 16 + lp->flag;
			if (c0 == c1)
				msg[17] = ' ';
			consoleout(msg);
			if (i & 1)
				consoleout("\n");
			i++;
		}
		lp++;
	}
	if (i == 0)
		consoleout(" - none -\n");
	return i & 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_setvesa(const char *cmdlin)
{
	int i, j;
	struct STR_VBEMODE *lp;
	if (*cmdlin == '\0')
		goto error;
	i = cons_getdec_skpspc(&cmdlin);
//	if (i != 3 && i != 4 && i != 0)
//		goto error;
	if (*cmdlin == '\0')
		goto error;
	j = cons_getdec_skpspc(&cmdlin);
//	if (vbebuf[127].flag == 0) {
//		consoleout("\nVESA-info isn't got yet.");
//		return 1;
//	}
	if (vbebuf[127].dummy == 0) {
		consoleout("\nVESA BIOS is not found.");
		return 1;
	}
	for (lp = vbebuf; lp->mode != 0; lp++) {
		if (lp->mode == (j & 0x3fff)) {
			if (lp->dummy)
				j |= 0x4000;
			sgg_execcmd0(0x0020, 0x80000000 + 5, 0x3244, 0x7f000003, 0x0210, i, j, 0x0000);
			return 1;
		}
	}
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_detectpcivga(const char *cmdlin)
{
	unsigned int bus, dev, fnc, buf[16], i, c = 0, j, port[32], vram[32], size[32];
	char s[30];
	for (bus = 0; bus <= LASTPCIBUS; bus++) {
		for (dev = 0; dev < 32; dev++) {
			for (fnc = 0; fnc < 8; fnc++) {
				sgg_execcmd0(0x0098, 0, bus << 16 | dev << 11 | fnc << 8, buf, 0x000c, 0x0000);
				if (*buf != 0xffffffff) {
					if (((buf[1] >> 24) & 0xff) == 0x03) {
						sgg_execcmd0(0x0098, 1, bus << 16 | dev << 11 | fnc << 8, buf, 0x000c, 0x0000);
						for (i = 0; i < 6; i++) {
							if ((buf[i * 2 + 1] & 0xfffffffc) == 0)
								continue; /* none */
							if (buf[i * 2 + 1] & 0x01)
								continue; /* I/O */
							buf[i * 2 + 1] &= ~0x0f;
							if ((size[c] = - buf[i * 2 + 1]) >= 128 * 1024) {
								port[c] = bus << 16 | dev << 11 | fnc << 8 | i;
								vram[c] = buf[i * 2] & ~0x0f;
								c++;
								if (c >= 32)
									goto skip;
							}
						}
					}
					if (fnc == 0 && (buf[2] & 0x00800000) == 0)
						break;
				} else {
					if (fnc == 0)
						break;
				}
			}
		}
	}
skip:
	if (*cmdlin == '\0') {
		for (i = 0; i < c; i++) {
			bus = (port[i] >> 16) & 0xff;
			dev = (port[i] >> 11) & 0x1f;
			j = size[i];
			s[0] = '\n';
			setdec4(&s[ 1], i);
			s[ 5] = '.';
			setdec4(&s[ 6], bus);
			s[10] = ':';
			s[11] = (dev / 10) + '0';
			s[12] = (dev % 10) + '0';
			s[13] = ':';
			s[14] = ((port[i] >> 8) & 0x07) + '0';
			s[15] = ':';
			s[16] = (port[i] & 0x07) + '0';
			s[17] = '(';
			j >>= 10;
			s[22] = 'K';
			if (j > 1024) {
				j >>= 10;
				s[22] = 'M';
			}
			setdec4(&s[18], j);
			s[23] = 'B';
			s[24] = ')';
			s[25] = '\0';
			consoleout(s);
		}
		if (c == 0)
			consoleout("\n - none -");
		return 1;
	}
	/* 系列ごとに番号を指定できる */
	/* 8bit系列、16bit系列、32bit系列 */
	i = cons_getdec_skpspc(&cmdlin);
	if (i < 0)
		goto error;
	if (i > 3)
		goto error;
	if (*cmdlin == '\0')
		goto error;
	j = cons_getdec_skpspc(&cmdlin);
	if (j >= c)
		goto error;
	sgg_execcmd0(0x0020, 0x80000000 + 5, 0x3244, 0x7f000003, 0x0211, i, vram[j], 0x0000);
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;
}

#endif

int poko_defkeybind(const char *cmdlin)
{
	int i, raw0, shft0, raw1, shft1;
	i = cons_getdec_skpspc(&cmdlin);
	raw0  = cons_getdec_skpspc(&cmdlin);
	shft0 = cons_getdec_skpspc(&cmdlin);
	raw1  = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin == '\0')
		goto error;
	shft1 = cons_getdec_skpspc(&cmdlin);
	sgg_execcmd0(0x0020, 0x80000000 + 5, 0x3244, 0x7f000003,
		0x0070, i, raw0 | shft0 << 8 | raw1 << 16 | shft1 << 24, 0x0000);
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_defspkeybind(const char *cmdlin)
{
	int i, j, k;
	i = cons_getdec_skpspc(&cmdlin);
	j  = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin == '\0')
		goto error;
	k = cons_getdec_skpspc(&cmdlin);
	sgg_execcmd0(0x0020, 0x80000000 + 6, 0x3245, 0x7f000004, 0x0074, i, j, k, 0x0000);
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_setwindef(const char *cmdlin)
{
	int i, j;
	if (*cmdlin == '\0')
		goto error;
	i = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin == '\0')
		goto error;
	j = cons_getdec_skpspc(&cmdlin);
	sgg_execcmd0(0x0020, 0x80000000 + 5, 0x3244, 0x7f000003, 0x0230, i, j, 0x0000);
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_run(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename = { 0 };
	struct SGG_FILELIST *fp;

	cmdlin = pokosub_getfilename(cmdlin, filename.s);
	if (filename.s[0] == '\0')
		goto error;
	if (*cmdlin != '\0')
		goto error;
	filename.i[2] >>= 8; /* ピリオドを消す */
	fp = searchfid1(filename.s);
	if (fp == NULL)
		goto error;
	runfile(fp, filename.s);
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

#if (defined(PCAT) | defined(TOWNS))

int poko_drvfd(const char *cmdlin)
{
	int i;
	if (*cmdlin == '\0')
		goto error;
	i = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin != '\0')
		goto error;
	if (i > 255 || i < 0)
		goto error;

	writejob_n(3,
		JOB_CHECK_WB_CACHE,
		JOB_CHANGE_DEVICE, i | 0x0000
	);
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;

}

int poko_drvcf(const char *cmdlin)
{
	int i;
	if (*cmdlin == '\0')
		goto error;
	i = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin != '\0')
		goto error;
	if (i > 255 || i < 0)
		goto error;

	writejob_n(3,
		JOB_CHECK_WB_CACHE,
		JOB_CHANGE_DEVICE, i | 0x0200
	);
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;

}

#endif

#if (defined(PCAT))

int poko_drvata(const char *cmdlin)
{
	int i;
	if (*cmdlin == '\0')
		goto error;
	i = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin != '\0')
		goto error;
	if (i > 255 || i < 0)
		goto error;

	writejob_n(3,
		JOB_CHECK_WB_CACHE,
		JOB_CHANGE_DEVICE, i | 0x0100
	);
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;

}

int poko_drvbfd(const char *cmdlin)
{
	int i;
	if (*cmdlin == '\0')
		goto error;
	i = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin != '\0')
		goto error;
	if (i > 255 || i < 0)
		goto error;

	writejob_n(3,
		JOB_CHECK_WB_CACHE,
		JOB_CHANGE_DEVICE, i | 0x4000
	);
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;

}

#endif

int poko_setwallpaper(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename = { 0 };
	cmdlin = pokosub_getfilename(cmdlin, filename.s);
//	if (filename.s[0] == '\0')
//		goto error;
	if (*cmdlin != '\0')
		goto error;
	sgg_execcmd0(0x0020, 0x80000000 + 6, 0x3245, 0x7f000004,
		0x024c, filename.i[0], filename.i[1], filename.i[2], 0x0000);

	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

int poko_setext(const char *cmdlin)
{
	union {
		char s[12];
		int i[3];
	} filename = { 0 };
	unsigned char ext[3];
	int i;
	struct STR_VIEWER *v, *v1 = viewers + MAX_VIEWERS;

	while (*cmdlin <= ' ' && *cmdlin != '\0')
		cmdlin++;
	if (*cmdlin == '\0')
		goto error;
	i = 0;
	ext[1] = ext[2] = ' ';
	do {
		if (i == 3)
			goto error;
		ext[i] = *cmdlin++;
		if ('a' <= ext[i] && ext[i] <= 'z')
			ext[i] += 'A' - 'a';
		i++;
	} while (*cmdlin > ' ');
	v = search_viewer0(ext);
	if (v)
		v->ext[0] = '\0';
	if (*cmdlin == '\0')
		return 1; /* 削除 */
	cmdlin = pokosub_getfilename(cmdlin, filename.s);
	if (filename.s[0] == '\0')
		goto error;
	v = viewers;
	do {
		if (v->ext[0] == '\0')
			goto find;
		v++;
	} while (v < v1);
	consoleout("\next-table full");
	return 1;

error:
	return -ERR_ILLEGAL_PARAMETERS;

find:
	filename.i[2] >>= 8; /* ピリオドを消す */
	v->ext[0] = ext[0];
	v->ext[1] = ext[1];
	v->ext[2] = ext[2];
	for (i = 0; i < 11; i++)
		v->binary[i] = filename.s[i];
	for (i = 0; i < 4; i++)
		v->signal[i] = 0;

	i = 1;
	while (*cmdlin) {
		if (i == 4) {
			v->ext[0] = '\0';
			goto error;
		}
		v->signal[i++] = cons_getdec_skpspc(&cmdlin);
	}
	v->signal[0] = i - 1;
	return 1;
}

struct STR_VIEWER *search_viewer0(const unsigned char *ext)
{
	struct STR_VIEWER *v = viewers, *v1 = v + MAX_VIEWERS;
	do {
		if (ext[0] == v->ext[0] && ext[1] == v->ext[1] && ext[2] == v->ext[2])
			goto find;
		v++;
	} while (v < v1);
	v = NULL;
find:
	return v;
}

int poko_autodearc(const char *cmdlin)
{
	int param;
//	if (*cmdlin == '\0')
//		goto error;
	param = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	auto_dearc = param;
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

#if (defined(TOWNS))
int poko_townsmouse(const char *cmdlin)
{
	int i;
	unsigned char par[3] = {0,0,0}, *p = par;

	while (*cmdlin == ' ')
	  cmdlin++;
	i = 0;
	while (cmdlin[i] && cmdlin[i] != ' ')
	  i++;
	if (i > 3)		/* 多すぎ */
	  goto error;
	for (; i ; i--)
	  *p++ = cmdlin[i-1] - '0';
	if (par[2] > 1 || (par[0] | par[1]) > 3)
	  goto error;
	sgg_execcmd0(0x0020, 0x80000004, 0x3243, 0x7f000002,
		     0x0300, (par[2] << 4) | (par[0] << 2) | par[1], 0x0000);
	return 1;
 error:
	return -ERR_ILLEGAL_PARAMETERS;
}
#endif

#if 0
struct STR_VIEWER *search_viewer1(const unsigned char *ext)
{
	struct STR_VIEWER *v = search_viewer0(ext);
	if (v == NULL)
		v = &viewers[0];
	return v;
}
#endif

void rjc(UCHAR *p0, UCHAR *p1, int ofs0, int ofs, int ofs1)
{
	UCHAR *p = p0, *pp = p0 - 4;
	int i, j, k;
	while (p < p1) {
		if (0xe8 <= *p && *p <= 0xe9 && &p[4] < p1) {	/* e8 (call32), e9 (jmp32) */
	r32:
			p++;
			if (p - pp < 4)
				continue;
			i = p[0] | p[1] << 8 | p[2] << 16 | p[3] << 24;
			j = (p - p0) + ofs + 4; /* 相対アドレス基点 */
			k = i;
			if (ofs0 <= i && i < ofs1)
				i -= j;
			else if (ofs0 - j <= i && i < ofs0)
				i += ofs1 - ofs0;
			pp = p;
			if (i != k ) {
				p[0] =  i        & 0xff;
				p[1] = (i >>  8) & 0xff;
				p[2] = (i >> 16) & 0xff;
				p[3] = (i >> 24) & 0xff;
				p += 4;
			}
			continue;
		}
		p++;
		if (p[-1] == 0x0f && &p[4] < p1 && (p[0] & 0xf0) == 0x80)	/* 0f 8x (jcc32) */
			goto r32;
	}
	return;
}

int osarjc(int siz, UCHAR *p0)
{
	if (siz >= 0x20 && p0[16] == 0x00 && (p0[20] & 0x02) != 0
		&& *(int *) &p0[8] == ('G' | 'U' << 8 | 'I' << 16 | 'G' << 24)
		&& *(int *) &p0[12] == ('U' | 'I' << 8 | '0' << 16 | '0' << 24)) {
		/* エンコードしてあるものをデコード */
		if ((p0[20] & 0xfe) == 0x06)
			siz = *(int *) &p0[0x2c];
		rjc(p0 + 0x20, p0 + siz, 0x20, 0x20, siz); /* decode */
		/* 今のところ、0x02と0x06しか考えていない */
		p0[20] &= 0x01;
		return 1;
	}
	return 0;
}

int poko_exec(const char *cmdlin)
{
	int i;
	struct STR_BANK *bank, *bank1;
	struct FILEBUF *fbuf, *fbuf1, *fbuf2;
	struct SGG_FILELIST *fp, *fp1;
	struct VIRTUAL_MODULE_REFERENCE *vmr, *vmr1;
//	unsigned char *fp0 = (char *) readCSd10;

	if ((fp1 = searchfid1("CONSOLE0BIN")) == NULL)
		return 1;
	if ((fp = searchfid1("CHELLOC0BIN")) == NULL)
		return 1;
	bank = searchfrebank();
	if ((bank1 = searchfrebank()) == NULL)
		return 1;
	for (i = 0; i < 11; i++) {
		bank->name[i] = "CHELLO0CBIN"[i];
		bank1->name[i] = "console    "[i];
	}
	bank->name[11] = '\0';
	bank1->name[11] = '\0';
	fbuf1 = searchfrefbuf();
	fbuf2 = searchfrefbuf(); /* for pipe */
	if ((fbuf = searchfrefbuf()) == NULL) {
error:
		bank->tss = 0;
		bank1->tss = 0;
		return 1;
	}
	for (vmr = vmref0; vmr->task; vmr++);
	vmr->task = -1; /* reserve */
	for (vmr1 = vmref0; vmr1->task; vmr1++);
	vmr1->task = -1; /* reserve */

	fbuf2->size = 1;
	if ((fbuf2->paddr = sgg_execcmd1(2 * 4 + 12, 0x0084, fbuf2->size, 0, 0x0000)) == -1) /* メモリをもらう */
		goto error;
	fbuf2->linkcount = 2;
	fbuf2->dirslot = -1;
	fbuf2->readonly = 0;
	fbuf2->virtualmodule = sgg_createvirtualmodule(fbuf2->size, fbuf2->paddr);
	fbuf2->pipe = 1;

//	sgg_execcmd0(0x0080, 14, fbuf2->paddr, fp0, 0x0000); /* スロットを使わないマッピング */
//	for (i = 0; i < 14; i++)
//		fp0[i] = "This is test.\n"[i];

	writejob_n(4 + 5 + 4 + 5,
		JOB_LOAD_FILE_AND_EXECUTE, (int) fp1, (int) fbuf1, (int) bank1, /* "CONSOLE0.BIN", 0x5000 */
		JOB_EXT_OPEN, (int) fbuf2, (int) bank1, (int) vmr1, 0x200,
		JOB_LOAD_FILE_AND_EXECUTE, (int) fp, (int) fbuf, (int) bank, /* "CHELLOC0.BIN", 0x6000 */
		JOB_EXT_OPEN, (int) fbuf2, (int) bank, (int) vmr, 0x200
	);

	return 1;

/*	"console0.bin"を準備して、slot210にhw.txtを接続して、シグナルを送ってやる */
/* どんなシグナル？ */
/*	サイズ変更確定、リード確定 */
/*	consoleはこれに応じて、ロックをかけて読み込む */
/*	仕事が済んだらスリープして待つ。ユーザがタスク終了シグナルを送っておわり */
/*	シェルと通信したければ、そういうコネクションが必要...別になくてもいいか。shellcallすればどうせ分かる */


/*	自動伸長型の確定範囲管理は、srmlでできる。確定領域を加えていって先頭が0でサイズが伸びたら連絡 */
/*	これはあまりに典型的なので、特別なモードを作る(リードオンリー・ライトオンリー) */
/*	サイズ確定と・ライト確定(しかも順方向)しか通知しない */
/*	32bitモード, 64bitモード, 128bitモード, リザーブがある */
/*  sighed, 確定後のサイズ(32bit) */
/*	sighed, サイズ、確定領域 */

/* 通知は、いろいろある。確定か一時か。サイズ、ライト完了、リード完了、オプショナル */
/* アクセスロック要求(リード、ライト、サイズ変更権) */


/* モジュールシグナルハブ */

/*
(1)アクセスロック要求 (リード一時・リード確定・リードライト)
(2)ロック開放
(3)アクセス可能範囲通知 (リード・ライト、一時・確定)
(4)通知シグナル設定
(5)通知シグナル送信 (リード・ライト・サイズ変更、一時・確定)
*/

#if 0
//	if (*cmdlin == '\0')
//		goto error;
	param = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	if (param < SORT_NAME)
		goto error;
	if (param >= SORTS)
		goto error;
	sort_mode = param;
	/* 全てのファイルセレクタを更新 */
	for (i = 0; i < MAX_SELECTOR; i++) {
		if (selwin0[i].subtitle_str[0])
			list_set(&selwin0[i]);
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
#endif
}


#if 0

void poko_puthex2(int i)
{
	char str[3];
	str[0] = (i >> 4)   + '0';
	str[1] = (i & 0x0f) + '0';
	str[2] = '\0';
	if (str[0] > '9')
		str[0] += 'A' - 10 - '0';
	if (str[1] > '9')
		str[1] += 'A' - 10 - '0';
	consoleout(str);
	return;
}

int poko_debug(const char *cmdlin)
{
	static unsigned char *base = 0;
	int ofs, i;
//	if (*cmdlin == '\0')
//		goto error;
	ofs = cons_getdec_skpspc(&cmdlin);
	if (*cmdlin)
		goto error;
	for (i = 0; i < 8; i++) {
		poko_puthex2(base[ofs + i]);
		consoleout(" ");
	}
	return 1;
error:
	return -ERR_ILLEGAL_PARAMETERS;
}

#endif
