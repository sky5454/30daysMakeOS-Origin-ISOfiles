#ifndef __SYSGG00_H
#define __SYSGG00_H

struct SGG_WORK {
	int data[256 / 4];
};

struct SGG_FILELIST {
	int id;
	unsigned char name[11], type;
	int size;
};

struct SGG_WINDOW {
	int image[32 / 4];
	int handle;
};

#if 1

#define	WINSTR_STATUS		 0 / 4
#define	WINSTR_USERID		 4 / 4
#define	WINSTR_SIGNALBASE	 8 / 4
#define	WINSTR_SIGNALEBOX	12 / 4
#define	WINSTR_XSIZE		16 / 4
#define	WINSTR_YSIZE		20 / 4
#define	WINSTR_X0			24 / 4
#define	WINSTR_Y0			28 / 4

#endif

void sgg_execcmd0(const int cmd, ...);
const int sgg_execcmd1(const int ret, const int cmd, ...);
void sgg_execcmd(void *EBX);

#define	sgg_init(work)		(work)

#if 0

#define	sgg_init(work) \
	(struct SGG_WORK *) sgg_execcmd1(1 * 4 + 12, 0x0010, \
	(work) ? (void *) (work) : malloc(sizeof (struct SGG_WORK)), 0x0000)

#endif

#if 1

#define sgg_wm0s_movewindow(window, x, y) \
	sgg_execcmd0(0x0020, 0x80000000 + 5, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 4, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 0, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], \
	((struct SGG_WINDOW *) (window))->image[WINSTR_X0] = (int) (x), \
	((struct SGG_WINDOW *) (window))->image[WINSTR_Y0] = (int) (y), \
	0x002c, 0, ((struct SGG_WINDOW *) (window))->handle, \
	((struct SGG_WINDOW *) (window))->image, 0x0c, 0x0000)

#define sgg_wm0s_setstatus(window, status) \
	sgg_execcmd0(0x0020, 0x80000000 + 4, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 1, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], \
	(int) (status), 0x0000)

#define sgg_wm0s_accessenable(window) \
	sgg_execcmd0(0x0020, 0x80000000 + 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 2, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 2, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], 0x0000)

#define sgg_wm0s_accessdisable(window) \
	sgg_execcmd0(0x0020, 0x80000000 + 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 2, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 4, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], 0x0000)

#define sgg_wm0s_redraw(window) \
	sgg_execcmd0(0x0020, 0x80000000 + 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 2, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 8, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], 0x0000)

#define sgg_wm0s_redrawdif(window) \
	sgg_execcmd0(0x0020, 0x80000000 + 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 2, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 9, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], 0x0000)

#define sgg_wm0_win2sbox(window) \
	(((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX])

#define sgg_wm0_winsizex(window) \
	(((struct SGG_WINDOW *) (window))->image[WINSTR_XSIZE])

#define sgg_wm0_winsizey(window) \
	(((struct SGG_WINDOW *) (window))->image[WINSTR_YSIZE])

#define sgg_wm0s_close(window) \
	sgg_execcmd0(0x0020, 0x80000000 + 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 2, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], 0x0000)

#define sgg_wm0s_windowclosed(window) \
	sgg_execcmd0(0x0020, 0x80000000 + 3, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALEBOX] | 2, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_SIGNALBASE] + 5, \
	((struct SGG_WINDOW *) (window))->image[WINSTR_USERID], 0x0000)

#define sgg_wm0_setvideomode(mode, signal) \
	sgg_execcmd0(0x0054, 0, (int) (mode), 0x3240 + 3, 0x7f000002, \
	(int) (signal), 0x0000)

#define sgg_wm0_gapicmd_0010_0000() \
	sgg_execcmd0(0x0050, 6 * 4, 0x0010, 0, 0x0000, 0x0000, 0x0000)

#define	sgg_wm0_gapicmd_001c_0004() \
	sgg_execcmd0(0x0050, 6 * 4, 0x001c, 0, 0x0004, 0x0000, 0x0000)

#define	sgg_wm0_gapicmd_001c_0020() \
	sgg_execcmd0(0x0050, 6 * 4, 0x001c, 0, 0x0020, 0x0000, 0x0000)

#define sgg_wm0_putmouse(x, y) \
	sgg_execcmd0(0x0050, 8 * 4, 0x0180, 0, 0x0100, (int) (x), (int) (y), \
	0x0000, 0x0000)

#define sgg_wm0_removemouse() \
	sgg_execcmd0(0x0050, 6 * 4, 0x0180, 0, 0x0200, 0x0000, 0x0000)

#define sgg_wm0_movemouse(x, y) \
	sgg_execcmd0(0x0050, 8 * 4, 0x0180, 0, 0x0300, (int) (x), (int) (y), \
	0x0000, 0x0000)

#define sgg_wm0_enablemouse() \
	sgg_execcmd0(0x0060, 4 * 4, 0x0120, 0x0000, 0x0000)

/* for pokon0 */
#define sgg_createtask2(size, addr, fin_sig) \
        sgg_execcmd0(0x0020, 0x80000000 + 8, 0x1247, 0x0130, (int) (size), \
                (int) (addr), 0x4243 /* to pokon0 */, 0x7f000002, (int) (fin_sig), \
                0, 0x0000)

#define sgg_format2(sub_cmd, bsc_size, bsc_addr, exe_size, exe_addr, sig) \
        sgg_execcmd0(0x0020, 0x80000000 + 10, 0x1249, (int) (sub_cmd), 0, \
                (int) (bsc_size), (int) (bsc_addr), (int) (exe_size), \
                (int) (exe_addr), 0x4242 /* to pokon0 */, 0x7f000001, (int) (sig), \
                0x0000)

#define sgg_directwrite(opt, bytes, reserve, src_ofs, src_sel, dest_ofs, dest_sel) \
        sgg_execcmd0(0x0078, (int) (opt), (int) (bytes), (int) (reserve), \
                (int) (src_ofs), (int) (src_sel), (int) (dest_ofs), (int) (dest_sel), \
                0x0000)

#define sgg_createvirtualmodule(size, addr) \
        (int) sgg_execcmd1(3 * 4 + 12, 0x0070, 0, (int) (size), 0, (int) (addr), \
        0, 0x0000)

#endif

//	struct SGG_WORK *sgg_init(struct SGG_WORK *work);
const int sgg_getfilelist(const int size, struct SGG_FILELIST *fp, const int reserve0, const int reserve1);
//	void sgg_wm0s_movewindow(struct SGG_WINDOW *window, const int x, const int y);
//	void sgg_wm0s_setstatus(const struct SGG_WINDOW *window, const int status);
//	void sgg_wm0s_accessenable(const struct SGG_WINDOW *window);
//	void sgg_wm0s_accessdisable(const struct SGG_WINDOW *window);
//	void sgg_wm0s_redraw(const struct SGG_WINDOW *window);
void sgg_wm0_openwindow(struct SGG_WINDOW *window, const int handle);
//	const int sgg_wm0_win2sbox(const struct SGG_WINDOW *window);
//void sgg_wm0_definesignal2(const int opt, const int device, const int code,
//	const int signalbox, const int signal0, const int signal1);
//void sgg_wm0_definesignal0(const int opt, const int device, const int code);
//	const int sgg_wm0_winsizex(const struct SGG_WINDOW *window);
//	const int sgg_wm0_winsizey(const struct SGG_WINDOW *window);
//	void sgg_wm0s_close(const struct SGG_WINDOW *window);
//	void sgg_wm0s_windowclosed(const struct SGG_WINDOW *window);
//	void sgg_wm0_setvideomode(const int mode, const int signal);
//	void sgg_wm0_gapicmd_0010_0000();
//	void sgg_wm0_gapicmd_001c_0004();
//	void sgg_wm0_gapicmd_001c_0020();
//	void sgg_wm0_putmouse(const int x, const int y);
//	void sgg_wm0_removemouse();
//	void sgg_wm0_movemouse(const int x, const int y);
//	void sgg_wm0_enablemouse();
void sgg_loadfile(const int mdl_ent, const int file_id, const int fin_sig);
void sgg_createtask(const int mdl_ent, const int fin_sig);
void sgg_settasklocallevel(const int task, const int local, const int global, const int inner);
void sgg_runtask(const int task, const int local);
void sgg_freememory(const int mdl_ent);
void sgg_format(const int sub_cmd, const int sig);
void sgg_debug00(const int opt, const int bytes, const int reserve,
	const int src_ofs, const int src_sel, const int dest_ofs, const int dest_sel);

#endif
