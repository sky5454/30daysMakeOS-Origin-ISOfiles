// ƒ‰ƒCƒuƒ‰ƒŠ‰Šú‰»

#include <sysgg00.h>

struct SGG_WORK *sgg_init(struct SGG_WORK *work)
{
	return 0;
}

/*
#include <guigui00.h>
#include <stdlib.h>

struct LIB_WORK *lib_init(struct LIB_WORK *work)
{
	static struct {
		int cmd;
		struct LIB_WORK *work;
		int eoc;
	} command = { 0x0004, 0, 0x0000 };

	if (work)
		command.work = work;
	else
		command.work = (struct LIB_WORK *) malloc(sizeof (struct LIB_WORK));

	lib_execcmd(&command);
	return command.work;
}
*/
