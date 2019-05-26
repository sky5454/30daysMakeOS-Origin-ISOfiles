// for debug

#include <sysgg00.h>

void sgg_debug00(const int opt, const int bytes, const int reserve,
	const int src_ofs, const int src_sel, const int dest_ofs, const int dest_sel)
{
	static struct {
		int cmd, opt, bytes, reserve;
		int src_ofs, src_sel, dest_ofs, dest_sel;
		int eoc;
	} command = { 0x8010, 0, 0, 0, 0, 0, 0, 0, 0x0000 };

	command.opt = opt;
	command.bytes = bytes;
	command.reserve = reserve;
	command.src_ofs = src_ofs;
	command.src_sel = src_sel;
	command.dest_ofs = dest_ofs;
	command.dest_sel = dest_sel;

	sgg_execcmd(&command);
	return;
}
