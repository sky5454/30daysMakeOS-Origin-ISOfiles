// for winman0

#include <sysgg00.h>

#if 0

#define	WINSTR_STATUS		 0 / 4
#define	WINSTR_USERID		 4 / 4
#define	WINSTR_SIGNALBASE	 8 / 4
#define	WINSTR_SIGNALEBOX	12 / 4
#define	WINSTR_XSIZE		16 / 4
#define	WINSTR_YSIZE		20 / 4
#define	WINSTR_X0			24 / 4
#define	WINSTR_Y0			28 / 4

void sgg_wm0s_movewindow(struct SGG_WINDOW *window, const int x, const int y)
// wm0sは、"winman0signal"の略
{
	static struct {
		int cmd1, opt1, data[5];
		int cmd2, opt2, handle; void *ofs; int sel;
		int eoc;
	} command = {
		0x0020, 0x80000000 + 5, { 0 },
		0x002c, 0, 0, 0, 0x0c, 
		0x0000
	};

	command.data[0] = window->image[WINSTR_SIGNALEBOX] | 4;
	command.data[1] = window->image[WINSTR_SIGNALBASE] + 0;
	command.data[2] = window->image[WINSTR_USERID];
	command.data[3] = window->image[WINSTR_X0] = x;
	command.data[4] = window->image[WINSTR_Y0] = y;
	command.handle = window->handle;
	command.ofs = (void *) window->image;

	sgg_execcmd(&command);
	return;
}

void sgg_wm0s_setstatus(const struct SGG_WINDOW *window, const int status)
{
	static struct {
		int cmd, opt;
		int data[4];
		int eoc;
	} command = { 0x0020, 0x80000000 + 4, { 0 }, 0x0000 };

	command.data[0] = window->image[WINSTR_SIGNALEBOX] | 3;
	command.data[1] = window->image[WINSTR_SIGNALBASE] + 1;
	command.data[2] = window->image[WINSTR_USERID];
	command.data[3] = status;

	sgg_execcmd(&command);
	return;
}

void sgg_wm0s_accessenable(const struct SGG_WINDOW *window)
{
	static struct {
		int cmd, opt;
		int data[3];
		int eoc;
	} command = { 0x0020, 0x80000000 + 3, { 0 }, 0x0000 };

	command.data[0] = window->image[WINSTR_SIGNALEBOX] | 2;
	command.data[1] = window->image[WINSTR_SIGNALBASE] + 2;
	command.data[2] = window->image[WINSTR_USERID];

	sgg_execcmd(&command);
	return;
}

void sgg_wm0s_accessdisable(const struct SGG_WINDOW *window)
// 完了シグナルが帰ってくるので注意
{
	static struct {
		int cmd, opt;
		int data[3];
		int eoc;
	} command = { 0x0020, 0x80000000 + 3, { 0 }, 0x0000 };

	command.data[0] = window->image[WINSTR_SIGNALEBOX] | 2;
	command.data[1] = window->image[WINSTR_SIGNALBASE] + 4;
	command.data[2] = window->image[WINSTR_USERID];

	sgg_execcmd(&command);
	return;
}

void sgg_wm0s_redraw(const struct SGG_WINDOW *window)
// 完了シグナルが帰ってくるので注意
{
	static struct {
		int cmd, opt;
		int data[3];
		int eoc;
	} command = { 0x0020, 0x80000000 + 3, { 0 }, 0x0000 };

	command.data[0] = window->image[WINSTR_SIGNALEBOX] | 2;
	command.data[1] = window->image[WINSTR_SIGNALBASE] + 8;
	command.data[2] = window->image[WINSTR_USERID];

	sgg_execcmd(&command);
	return;
}

#endif

void sgg_wm0_openwindow(struct SGG_WINDOW *window, const int handle)
{
	static struct {
		int cmd, opt, handle;
		void *ofs;
		int sel;
		int eoc;
	} command = { 0x0028, 0, 0, 0, 0x0c, 0x0000 };

	command.handle = window->handle = handle;
	command.ofs = (void *) window->image;

	sgg_execcmd(&command);
	return;
}

#if 0

const int sgg_wm0_win2sbox(const struct SGG_WINDOW *window)
{
	return window->image[WINSTR_SIGNALEBOX];
}

#endif

#if 0

void sgg_wm0_definesignal2(const int opt, const int device, const int code,
	const int signalbox, const int signal0, const int signal1)
{
	static struct {
		int cmd, opt, device, code, signalbox;
		int length, signal0, signal1;
		int eoc;
	} command = { 0x0030, 0, 0, 0, 0, 2, 0, 0, 0x0000 };

	command.opt = opt;
	command.device = device;
	command.code = code;
	command.signalbox = signalbox;
	command.signal0 = signal0;
	command.signal1 = signal1;

	sgg_execcmd(&command);
	return;
}

void sgg_wm0_definesignal0(const int opt, const int device, const int code)
{
	static struct {
		int cmd, opt, device, code, signalbox, length;
		int eoc;
	} command = { 0x0030, 0, 0, 0, 0, 0, 0x0000 };

	command.opt = opt;
	command.device = device;
	command.code = code;

	sgg_execcmd(&command);
	return;
}

#endif

#if 0

const int sgg_wm0_winsizex(const struct SGG_WINDOW *window)
{
	return window->image[WINSTR_XSIZE];
}

const int sgg_wm0_winsizey(const struct SGG_WINDOW *window)
{
	return window->image[WINSTR_YSIZE];
}

void sgg_wm0s_close(const struct SGG_WINDOW *window)
// クローズの要請をタスクに伝える
{
	static struct {
		int cmd, opt;
		int data[3];
		int eoc;
	} command = { 0x0020, 0x80000000 + 3, { 0 }, 0x0000 };

	command.data[0] = window->image[WINSTR_SIGNALEBOX] | 2;
	command.data[1] = window->image[WINSTR_SIGNALBASE] + 3;
	command.data[2] = window->image[WINSTR_USERID];

	sgg_execcmd(&command);
	return;
}

void sgg_wm0s_windowclosed(const struct SGG_WINDOW *window)
{
	static struct {
		int cmd, opt;
		int data[3];
		int eoc;
	} command = { 0x0020, 0x80000000 + 3, { 0 }, 0x0000 };

	command.data[0] = window->image[WINSTR_SIGNALEBOX] | 2;
	command.data[1] = window->image[WINSTR_SIGNALBASE] + 5;
	command.data[2] = window->image[WINSTR_USERID];

	sgg_execcmd(&command);
	return;
}

void sgg_wm0_setvideomode(const int mode, const int signal)
{
	static struct {
		int cmd, opt;
		int mode, sig[3];
		int eoc;
	} command = { 0x0054, 0, 0, { 0x3240 /* winman0 */ + 3, 0x7f000002, 0 }, 0x0000 };
	command.mode = mode;
	command.sig[2] = signal;

	sgg_execcmd(&command);
	return;
}

void sgg_wm0_gapicmd_0010_0000()
{
	static struct {
		int cmd, length;
		int gapicmd[4];
		int eoc;
	} command = {
		0x0050, 6 * 4, {
			0x0010 /* initialize */,
			0      /* priority/command-handle */,
			0x0000 /* opt */,
			0x0000 /* EOC */
		}, 0 /* EOC */
	};

	sgg_execcmd(&command);
	return;
}

void sgg_wm0_gapicmd_001c_0004()
{
	static struct {
		int cmd, length;
		int gapicmd[4];
		int eoc;
	} command = {
		0x0050, 6 * 4, {
			0x001c /* hardware control */,
			0      /* priority/command-handle */,
			0x0004 /* hardware connect(device reset) */,
			0x0000 /* EOC */
		}, 0 /* EOC */
	};

	sgg_execcmd(&command);
	return;
}

void sgg_wm0_gapicmd_001c_0020()
{
	static struct {
		int cmd, length;
		int gapicmd[4];
		int eoc;
	} command = {
		0x0050, 6 * 4, {
			0x001c /* hardware control */,
			0      /* priority/command-handle */,
			0x0020 /* special command */,
			0x0000 /* EOC */
		}, 0 /* EOC */
	};

	sgg_execcmd(&command);
	return;
}

void sgg_wm0_putmouse(const int x, const int y)
{
	static struct {
		int cmd, length;
		int gapicmd[6];
		int eoc;
	} command = {
		0x0050, 8 * 4, {
			0x0180 /* mouse */,
			0      /* priority/command-handle */,
			0x0100 /* opt */,
			0, 0   /* x, y */,
			0x0000 /* EOC */
		}, 0 /* EOC */
	};
	command.gapicmd[3] = x;
	command.gapicmd[4] = y;
	sgg_execcmd(&command);
	return;
}

void sgg_wm0_removemouse()
{
	static struct {
		int cmd, length;
		int gapicmd[4];
		int eoc;
	} command = {
		0x0050, 6 * 4, {
			0x0180 /* mouse */,
			0      /* priority/command-handle */,
			0x0200 /* opt */,
			0x0000 /* EOC */
		}, 0 /* EOC */
	};
	sgg_execcmd(&command);
	return;
}

void sgg_wm0_movemouse(const int x, const int y)
{
	static struct {
		int cmd, length;
		int gapicmd[6];
		int eoc;
	} command = {
		0x0050, 8 * 4, {
			0x0180 /* mouse */,
			0      /* priority/command-handle */,
			0x0300 /* opt */,
			0, 0   /* x, y */,
			0x0000 /* EOC */
		}, 0 /* EOC */
	};
	command.gapicmd[3] = x;
	command.gapicmd[4] = y;
	sgg_execcmd(&command);
	return;
}

void sgg_wm0_enablemouse()
{
	static struct {
		int cmd, length;
		int keymoscmd[2];
		int eoc;
	} command = {
		0x0060, 4 * 4, {
			0x0120 /* MouseEnable */,
			0x0000 /* EOC */
		}, 0 /* EOC */
	};
	sgg_execcmd(&command);
	return;
}

#endif

#if 0
void sgg_wm0s_sendto1_pokon0(const int signal)
{
	static struct {
		int cmd, opt;
		int data[3];
		int eoc;
	} command = { 0x0020, 0x80000000 + 3, { 0x4240 /* pokon0 */ + 2, 0x7f000001, 0 }, 0x0000 };
	command.data[2] = signal;

	sgg_execcmd(&command);
	return;
}

void sgg_wm0s_sendto2_pokon0(const int signal, const int param)
{
	static struct {
		int cmd, opt;
		int data[4];
		int eoc;
	} command = { 0x0020, 0x80000000 + 4, { 0x4240 /* pokon0 */ + 3, 0x7f000002, 0, 0 }, 0x0000 };
	command.data[1] = signal;
	command.data[2] = param;

	sgg_execcmd(&command);
	return;
}
#endif
