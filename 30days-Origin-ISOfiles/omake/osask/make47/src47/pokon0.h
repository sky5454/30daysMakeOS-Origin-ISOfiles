#ifndef _POKON0_H
#define _POKON0_H

#define AUTO_MALLOC			0
#define NULL				0
#define SYSTEM_TIMER		0x01c0
#define LIST_HEIGHT			8
#define ext_EXE				('E' | ('X' << 8) | ('E' << 16))
#define ext_BIN				('B' | ('I' << 8) | ('N' << 16))
#define	ext_ALL				-1
#define CONSOLESIZEX		40
#define CONSOLESIZEY		15
#define MAX_BANK			56
#define MAX_FILEBUF			64
#define MAX_SELECTOR		5
#define MAX_SELECTORWAIT	64
#define MAX_VMREF			256
#define JOBLIST_SIZE		1024
#define MAX_ORDER			16	/* 256B */ //	256 /* 4KB */
#define MAX_ARCBUF			32
#define MAX_LARGECACHE		MAX_FILEBUF

/* key defines */
#define DEFSIG_EXT1     0x00001000
#define DEFSIG_MAKE     0x00000000
#define DEFSIG_BREAK    0x00004000
#define DEFSIG_REMAKE   0x00008000
#define DEFSIG_NOCAPS   0x00040000
#define DEFSIG_CAPS     0x04040000
#define DEFSIG_NOSHIFT  0x00100000
#define DEFSIG_SHIFT    0x10100000
#define DEFSIG_NOCTRL   0x00200000
#define DEFSIG_CTRL     0x20200000
#define DEFSIG_NOALT    0x00400000
#define DEFSIG_ALT      0x40400000

/* pokon status */
enum {
	STATUS_RUN_APPLICATION,
	STATUS_MAKE_PLAIN_BOOT_DISK,
	STATUS_MAKE_COMPRESSED_BOOT_DISK,
	FMODE3,
	FMODE4,
	FMODE5,
	FMODE6,
	STATUS_LOAD_BOOT_SECTOR_CODE_COMPLETE,/* 'S'と'Enter'と'F'と'R'しか入力できない */
	STATUS_WRITE_KERNEL_COMPLETE,
	STATUS_FORMAT_COMPLETE,
	STATUS_BOOTING
};

/* pokon sort mode */
enum {
	SORT_NAME,
	SORT_EXT,
	SORTS,
	DEFAULT_SORT_MODE = SORT_NAME, 
};

/* signal defines */
/* main signals */
#define NO_SIGNAL                               0x0000 /* no signal */
#define SIGNAL_REWIND                           0x0004 /* rewind */
#define SIGNAL_BOOT_COMPLETE                    99 /* boot完了 */
#define SIGNAL_TERMINATED_TASK                  0x0080 /* terminated task */
#define SIGNAL_REQUEST_DIALOG                   0x0084 /* ダイアログ要求シグナル */
#define SIGNAL_REQUEST_DIALOG2                  0x0088
#define	SIGNAL_FREE_FILES						0x008c /* ファイル開放要求(えせファイルシステム用) */
#define SIGNAL_RESIZE_FILE						0x008d /* cmd, addr, new-size, task, sig, slot */
#define	SIGNAL_NEED_WB							0x0090 /* ファイルキャッシュはライトバックが必要 */
#define	SIGNAL_NO_WB_CACHE						0x0094 /* to clear need_wb */
#define	SIGNAL_CHECK_WB_CACHE_NEXT				0x0098 /* JOB_CHECK_WB_CACHEの作業用シグナル */
#define	SIGNAL_REFRESH_FLIST					0x009c
#define	SIGNAL_REFRESH_FLIST0					0x009d /* ファイルリストは変更しない */
#define SIGNAL_RELOAD_FAT_COMPLETE              0x00a0 /* FAT再読み込み完了(Insert) */
#define	SIGNAL_JSUB								0x00a4 /* 汎用シグナル */
#define SIGNAL_FORMAT_COMPLETE                  0x00b8 /* フォーマット完了 */
#define SIGNAL_WRITE_KERNEL_COMPLETE            0x00bc /* .EXE書き込み完了 */
#define	SIGNAL_RESIZE_SUB0						0x00bd /* size == 0 からのリサイズ */
#define SIGNAL_VBELIST							0x00be /* VESA情報アドレス通知(ATのみ, winman0から) */

/* action signals */
enum {
	SIGNAL_CURSOR_UP = 4,
	SIGNAL_CURSOR_DOWN,
	SIGNAL_ENTER = 6,
	SIGNAL_CURSOR_PAGE_UP = 10,
	SIGNAL_CURSOR_PAGE_DOWN,
	SIGNAL_TOP_OF_LIST = 12,
	SIGNAL_BOTTOM_OF_LIST,
	SIGNAL_DISK_CHANGED = 14,
	SIGNAL_START_WB,
	SIGNAL_FORCE_CHANGED,
	SIGNAL_CHECK_WB_CACHE,
	SIGNAL_CREATE_NEW,
	SIGNAL_DELETE_FILE,
	SIGNAL_RESIZE,
	SIGNAL_CHANGE_SORT_MODE, /* 21 */
	SIGNAL_DISK_CHANGE0, /* 10個必要(22-31) */
	SIGNAL_LETTER_START = '!', /* 33 */
	SIGNAL_LETTER_END = 'Z',	/* 5a */
	SIGNAL_PAGE_UP = 0x60,
	SIGNAL_PAGE_DOWN,
	SIGNAL_MOSPOS,
	SIGNAL_MOSBTN,
	SIGNAL_WINDOW_ENABLE_DRAW = 120,
	SIGNAL_WINDOW_DISABLE_DRAW,
	SIGNAL_WINDOW_REDRAW,
	SIGNAL_WINDOW_REDRAW_PARTIAL,
	SIGNAL_WINDOW_CLOSE0 = 126,
	SIGNAL_WINDOW_CLOSE1 = 127,
};

/* command signals */
enum {
	COMMAND_SIGNAL_START = 0xc0,					/* 192 */
	COMMAND_TO_FORMAT_MODE = COMMAND_SIGNAL_START,  /* to format-mode */
	COMMAND_TO_RUN_MODE,                            /* to run-mode */
	COMMAND_CHANGE_FORMAT_MODE,                     /* change format-mode */
	COMMAND_OPEN_CONSOLE,                           /* open console */
	COMMAND_OPEN_MONITOR,                           /* open monitor */
	COMMAND_BINEDIT,								/* binary edit */
	COMMAND_TXTEDIT,								/* text viewer */
	COMMAND_CMPTEK0,
	COMMAND_MCOPY,
	COMMAND_SIGNAL_END = 0xff,
};

/* console signals ( + file selector signal start) */
enum {
	CONSOLE_SIGNAL_START = 256,
	CONSOLE_VRAM_ACCESS_ENABLE = CONSOLE_SIGNAL_START,
	CONSOLE_VRAM_ACCESS_DISABLE,
	CONSOLE_REDRAW_0,
	CONSOLE_REDRAW_1,
	CONSOLE_CHANGE_TITLE_COLOR = CONSOLE_SIGNAL_START + 5,
	CONSOLE_CLOSE_WINDOW,
	CONSOLE_CURSOR_BLINK = CONSOLE_SIGNAL_START + 31,
	CONSOLE_KEY_SIGNAL_START = CONSOLE_SIGNAL_START + ' ',
	CONSOLE_KEY_SIGNAL_END = CONSOLE_SIGNAL_START + 0x7f,
	CONSOLE_INPUT_ENTER = CONSOLE_SIGNAL_START + 0xa0,
	CONSOLE_INPUT_BACKSPACE = CONSOLE_SIGNAL_START + 0xa1,
	CONSOLE_SIGNAL_END = 512 - 1,
	FILE_SELECTOR_SIGNAL_START,
};

/* jobs */
#define JOB_INVALID_DISKCACHE			0x0004  /* invalid diskcache -> reload fat */
#define JOB_LOAD_FILE_AND_EXECUTE		0x0008  /* file load & execute */
//#define JOB_CREATE_TASK					0x000c  /* create task */
#define JOB_LOAD_FILE					0x0010  /* file load */
#define JOB_LOAD_FILE_AND_FORMAT		0x0014  /* file load & format (1) */
#define	JOB_VIEW_FILE					0x0018	/* viewer load & execute, file open */
#define JOB_CHECK_WB_CACHE				0x001c  /* check WB cache */
#define JOB_WRITEBACK_CACHE				0x0020  /* writeback cache */
#define JOB_INVALID_WB_CACHE			0x0024  /* invalid WB cache */
#define JOB_FREE_MEMORY					0x0028	/* free memory */
#define	JOB_CREATE_FILE					0x002c
#define	JOB_DELETE_FILE					0x0030
#define	JOB_RENAME_FILE					0x0034
#define	JOB_RESIZE_FILE					0x0038
#define JOB_LOAD_FILE_AND_EXEC_CONS		0x003c  /* file load & execute (console) */
#define JOB_EXT_OPEN					0x0040
#define	JOB_SEND_TEST_MODULE_SIGNAL		0x0044
#define	JOB_SEARCH_FP					0x0048
#define JOB_CHANGE_DRIVE				0x004c
#define JOB_LOAD_AND_EXEC_PSF			0x0050
#define JOB_CHANGE_DEVICE				0x0054

/* structs */
struct FILELIST {
	char name[11];
	struct SGG_FILELIST *ptr;
};


struct FILEBUF {
	int dirslot, linkcount, size, paddr, virtualmodule;
	struct STR_ARCBUF *arcbuf;
	char readonly, pipe /* resize時の挙動を決める */;
};

struct STR_BANK { /* 84bytes */
	int tss; /* ここが0だと未使用bank, 負の値だと予約bank */
	struct FILEBUF *fbuf;
	struct STR_ARCBUF *arcbuf;
	char name[12];
	struct {
		int global, inner;
	} Llv[8];
};

#define FILESELWINFLAG_DRAWENABLED	1
#define FILESELWINFLAG_GRABBED		2
#define FILESELWINFLAG_SBARDIRTY	4
struct FILESELWIN { /* 1つあたり、5.6KB必要 */
	int ext, cur, winslot, sigbase, listsize;
	int task, mdlslot, num, siglen, sig[16];
	int shndly0, shndly1, grabbedy;
	int mosx, mosy, mosbtns;
	char subtitle_str[24];
	char flags;
	struct FILELIST *lp, list[256] /* 4KB */, *grabbedlp;
	struct LIB_WINDOW window; /* (128B) */
	struct {
		struct LIB_TEXTBOX tbox;
		int data[8 * 10 * 1 / 4];
	} wintitle; /* 144B */
	struct {
		struct LIB_TEXTBOX tbox;
		int data[8 * 20 * 1 / 4];
	} subtitle; /* 224B */
	struct {
		struct LIB_TEXTBOX tbox;
		int data[8 * 16 * 8 / 4];
	} selector; /* 1088B */

//	subtitle_str[0] == '\0' : ウィンドウクローズ完了
//	task == 0 :	未使用マーク(subtitle_str[0]と同じじゃないのか？)
//	lp == NULL : close処理中
//	mdlslot == -1 : タスク終了によってキャンセルされた
//	mdlslot == -2 : close処理中

	/*
		close windowを実施すると、lp = NULLになる。
		closedを受け取ると、lp = listになる。
		ロードが終わったら、mdlslotが-2になる。
	*/

};

struct SELECTORWAIT {
	int task, slot, bytes, ofs, sel;
};

struct STR_JOBLIST {
	int *list, free, *rp, *wp, now;
	struct FILEBUF *fbuf;
	struct STR_BANK *bank;
	struct FILESELWIN *win;
	int param[8];
	struct SGG_FILELIST *fp, *fp__;
	int dirslot;
	struct STR_OPEN_ORDER *order;
	void (*retfunc)(int);
	int (*jsubfunc)(int *);
};

#define	PPJ_fbuf	 5
#define	PPJ_bank	 6
#define	PPJ_win		 7
#define	PPJ_prm0	 8
#define	PPJ_prm1	 9
#define	PPJ_prm2	10
#define	PPJ_prm3	11
#define	PPJ_prm4	12
#define	PPJ_prm5	13
#define	PPJ_prm6	14
#define	PPJ_prm7	15
#define	PPJ_fp		16

struct VIRTUAL_MODULE_REFERENCE {
	int task, slot;
	struct FILEBUF *fbuf;
	int sigbase, flushed_size;
	char flags;
};

struct STR_CONSOLE {
	unsigned char col;
	char curx, cury;
	char sleep, cursorflag, cursoractive;
	unsigned char buf[(CONSOLESIZEX + 2) * (CONSOLESIZEY + 1)];
	struct LIB_WINDOW win;
	struct {
		struct LIB_TEXTBOX tbox;
		int data[8 * 16 * 1 / 4];
	} title; /* 192B */
	struct {
		struct LIB_TEXTBOX tbox;
		int data[8 * CONSOLESIZEX * CONSOLESIZEY / 4];
	} tbox;
};

struct STR_OPEN_ORDER {
	int task, num, dummy;
	struct SGG_FILELIST *fp;
};

struct STR_VIEWER {
	unsigned char ext[4], binary[12];
	int signal[4];
};

struct STR_PROCESS_TASK {
	struct STR_BANK *bank;
	struct VIRTUAL_MODULE_REFERENCE *vmr_lst[6];
	char flags; /* bit0:1ならこのタスクが死ぬときプロセスを巻き添えにする */
};

struct STR_PROCESS {
	struct STR_PROCESS_TASK task[4];
};

struct STR_ARCBUF {
	int dirslot, linkcount, size, paddr, clu2;
	int dir0, info0, flags, align;
};

/* functions */
void consoleout(char *s);
void open_console();

void poko_exec_cmd(const char *cmdlin);

/* pokon console command */
int poko_memory(const char *cmdlin);
int poko_color(const char *cmdlin);
int poko_cls(const char *cmdlin);
//int poko_mousespeed(const char *cmdlin);
int poko_mouseaccel(const char *cmdlin);
int poko_setdefaultIL(const char *cmdlin);
int poko_tasklist(const char *cmdlin);
int poko_sendsignalU(const char *cmdlin);
int poko_LLlist(const char *cmdlin);
int poko_setIL(const char *cmdlin);
int poko_create(const char *cmdlin);
int poko_delete(const char *cmdlin);
int poko_rename(const char *cmdlin);
int poko_resize(const char *cmdlin);
int poko_debug(const char *cmdlin);
int poko_nfname(const char *cmdlin);
int poko_autodecomp(const char *cmdlin);
int poko_sortmode(const char *cmdlin);
int poko_exec(const char *cmdlin);
int poko_kill(const char *cmdlin);
int poko_vesalist(const char *cmdlin);
int poko_setvesa(const char *cmdlin);
int poko_detectpcivga(const char *cmdlin);
int poko_defkeybind(const char *cmdlin);
int poko_defspkeybind(const char *cmdlin);
int poko_setwindef(const char *cmdlin);
int poko_run(const char *cmdlin);
int poko_drvfd(const char *cmdlin);
int poko_drvata(const char *cmdlin);
int poko_drvcf(const char *cmdlin);
int poko_drvbfd(const char *cmdlin);
int poko_setwallpaper(const char *cmdlin);
int poko_setext(const char *cmdlin);
int poko_autodearc(const char *cmdlin);
int poko_townsmouse(const char *cmdlin);

/* */
void sgg_wm0s_sendto2_winman0(const int signal, const int param);

struct STR_VIEWER *search_viewer0(const unsigned char *ext);
//struct STR_VIEWER *search_viewer1(const unsigned char *ext);

#if 0
void fileselect(struct FILESELWIN *win, int fileid);
#endif



#endif /* pokon0.h */
