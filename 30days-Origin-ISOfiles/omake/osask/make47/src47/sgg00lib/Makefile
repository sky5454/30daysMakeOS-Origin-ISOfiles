# Makefile for sgg00lib
#  ver. 0.0

TOOLPATH = ../../z_tools/
INCPATH  = ../../z_tools/guigui00/

include ../make_inc.txt
include ../make_com.txt

DEFINES += -DPCAT -D$(DESIGN)

TARGET = sgg00lib.lib
OBJS   = execcmd.obj execcmd0.obj execcmd1.obj fwinman.obj fpokon.obj fdebug.obj
MKFL   = Makefile ../Makefile ../make_inc.txt ../make_com.txt

ALL :
	$(MAKE) sgg00lib.lib

%.gas : $(MKFL) %.c
	$(CC1) $(DEFINES) -I. -o $*.gas $*.c

%.nas : $(MKFL) %.gas
	$(GAS2NASK) $*.gas $*.nas

%.ias : $(MKFL) %.ask
	$(CPP0) -P $(DEFINES) -I. -o $*.ias $*.ask

%.3as : $(MKFL) %.ias
	$(ASKA) $*.ias $*.3as

%.nas : $(MKFL) %.3as
	$(NASKCNV) -w $*.3as $*.nas

%.obj : $(MKFL) %.nas
	$(NASK) $*.nas $*.obj $*.lst

$(TARGET) : $(MKFL) $(OBJS)
	$(GOLIB) out:$(TARGET) $(OBJS)

clean :
	-$(DELE) *.lst
	-$(DELE) *.obj
