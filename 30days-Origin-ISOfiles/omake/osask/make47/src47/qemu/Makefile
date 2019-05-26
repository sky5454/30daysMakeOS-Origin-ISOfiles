# Makefile for OSASK/qemu
#  ver. 0.0

TOOLPATH = ../../z_tools/
INCPATH  = ../../z_tools/guigui00/

include ../make_inc.txt
include ../make_com.txt

MKFL = Makefile ../Makefile ../make_inc.txt ../make_com.txt

ALL :
	$(MAKE) OSASK.EXE

OSASK.EXE : $(MKFL) osalink1.opt timerdrv.tek
	$(MAKE) -C .. at
	$(COPY) ..\osask_at.exe osask_at.exe
	$(OSALINK)
	$(DELE) osask_at.exe

clean :
	-$(DELE) OSASK.EXE
