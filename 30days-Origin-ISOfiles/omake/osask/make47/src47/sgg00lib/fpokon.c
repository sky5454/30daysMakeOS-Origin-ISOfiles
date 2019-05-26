// for pokon0

#include <sysgg00.h>

const int sgg_getfilelist(const int size, struct SGG_FILELIST *fp, const int reserve0, const int reserve1)
{
	static struct {
		int cmd1, opt; void *buf; int sel;
		int reserve0, reserve1, reserve2, reserve3;
		int eoc;
	} command = { 0x0040, 0, 0, 0x000f, 0, 0, 0, 0, 0x0000 };
	struct SGG_FILELIST *fp0 = fp + 1;

	command.opt = size;
	command.buf = fp;
	sgg_execcmd(&command);

	do {
		fp++;
	} while (fp->name[0]);

	return fp - fp0;
}

#if 0

void sgg_loadfile(const int mdl_ent, const int file_id, const int fin_sig)
{
	static struct {
		int cmd, opt, data[8];
		int eoc;
	} command = {
		0x0020, 0x80000000 + 8,
		0x1247, 0x0100, 0, 0, 0x4243 /* to pokon0 */, 0x7f000002, 0, 0,
		0x0000
	};

	command.data[2] = mdl_ent;
	command.data[3] = file_id;
	command.data[6] = fin_sig;

	sgg_execcmd(&command);
	return;
}

void sgg_createtask(const int mdl_ent, const int fin_sig)
{
	static struct {
		int cmd, opt, data[7];
		int eoc;
	} command = {
		0x0020, 0x80000000 + 7,
		0x1246, 0x0104, 0, 0x4243 /* to pokon0 */, 0x7f000002, 0, 0,
		0x0000
	};

	command.data[2] = mdl_ent;
	command.data[5] = fin_sig;

	sgg_execcmd(&command);
	return;

	// このコマンドが別タスクで処理されていることは、効率の悪いことだ。
}

#endif

void sgg_settasklocallevel(const int task, const int local, const int global, const int inner)
{
	static struct {
		int cmd, opt, data[6];
		int eoc;
	} command = {
		0x0020, 0x80000000 + 6,
		0x1245, 0x0108, 0, 0, 0, 0,
		0x0000
	};

	command.data[2] = task;
	command.data[3] = local;
	command.data[4] = global;
	command.data[5] = inner;

	sgg_execcmd(&command);
	return;

	// このコマンドが別タスクで処理されていることは、効率の悪いことだ。
}

void sgg_runtask(const int task, const int local)
{
	static struct {
		int cmd, opt, data[4];
		int eoc;
	} command = {
		0x0020, 0x80000000 + 4,
		0x1243, 0x010c, 0, 0,
		0x0000
	};

	command.data[2] = task;
	command.data[3] = local;

	sgg_execcmd(&command);
	return;

	// このコマンドが別タスクで処理されていることは、効率の悪いことだ。
}

#if 0

void sgg_freememory(const int mdl_ent)
{
	static struct {
		int cmd, opt, data[3];
		int eoc;
	} command = {
		0x0020, 0x80000000 + 3,
		0x1242, 0x0110, 0,
		0x0000
	};

	command.data[2] = mdl_ent;

	sgg_execcmd(&command);
	return;

	// このコマンドが別タスクで処理されていることは、効率の悪いことだ。
}

#endif

void sgg_format(const int sub_cmd, const int sig)
{
	sgg_execcmd0(0x0020, 0x80000000 + 6, 0x1245, sub_cmd, 0, 0x4242 /* to pokon0 */, 0x7f000001, sig, 0x0000);

#if 0
	static struct {
		int cmd, opt, data[6];
		int eoc;
	} command = {
		0x0020, 0x80000000 + 6,
		0x1245, 0, 0, 0x4242 /* to pokon0 */, 0x7f000001, 0,
		0x0000
	};

	command.data[1] = sub_cmd;
	command.data[5] = sig;

	sgg_execcmd(&command);
#endif

	return;
}

#if 0
void sgg_wm0s_sendto1_winmam0(const int signal)
{
	static struct {
		int cmd, opt;
		int data[3];
		int eoc;
	} command = { 0x0020, 0x80000000 + 3, { 0x3240 + 2, 0x7f000001, 0 }, 0x0000 };
	command.data[2] = signal;

	sgg_execcmd(&command);
	return;
}
#endif

void sgg_wm0s_sendto2_winman0(const int signal, const int param)
{
	sgg_execcmd0(0x0020, 0x80000000 + 4, 0x3240 + 3, 0x7f000002, signal, param, 0x0000);

#if 0
	static struct {
		int cmd, opt;
		int data[4];
		int eoc;
	} command = { 0x0020, 0x80000000 + 4, { 0x3240 + 3, 0x7f000002, 0, 0 }, 0x0000 };
	command.data[2] = signal;
	command.data[3] = param;

	sgg_execcmd(&command);
#endif

	return;
}
