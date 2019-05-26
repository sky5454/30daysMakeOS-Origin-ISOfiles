# Makefile for OSASK/AT
#  ver. 0.0

TOOLPATH = ../../z_tools/
INCPATH  = ../../z_tools/guigui00/
VPATH = ..

include ../make_inc.txt
include ../make_com.txt
include ../make_wm0.txt
include ../make_pk0.txt

DEFINES = $(DEFINES_AT) -DPCAT -D$(DESIGN)

MKFL = Makefile ../Makefile ../make_inc.txt ../make_com.txt

ALL :
	$(MAKE) OSASK.EXE

OSASK.EXE : $(MKFL) osalink1.opt base.exe boot32.bin ankfont0.tek tapi0.tek \
			timerdrv.tek keymos0.tek fdcdrv0.tek pioneer0.tek vgadrv0.tek \
			decode0.tek papi0.tek init.tek winman0.tek pokon0.tek vesa8.tek \
			vesa16.tek vesa32.tek
	$(OSALINK)

base.exe : $(MKFL) ../base.nap
	$(CPP0) -P $(DEFINES) -o base.nas ../base.nap
	$(NASK) base.nas base.exe base.lst
	$(DELE) base.nas

ankfont0.bin : $(MKFL) ../ankfont0/$(FONTSRC)
	$(TXT2BIN) ../ankfont0/$(FONTSRC) ankfont0.bin

%.ias : %.ask $(MKFL) 
	$(CPP0) -P -I.. $(DEFINES) -o $@ $<

%.gas : %.c $(MKFL)
	$(CC1) $(DEFINES) -I../sgg00lib -o $@ $<

winman0.bin : $(MKFL) ../make_wm0.txt winman0.obj
	$(MAKE) -C ../sgg00lib
	$(OBJ2BIM) @../linkrule.rul stack:$(STK_WM_AT) map:winman0.map \
		out:winman0.bim winman0.obj ../sgg00lib/sgg00lib.lib
	$(BIM2BIN) malloc:$(MLC_WM_AT) mmarea:$(MMA_WM_AT) input:winman0.bim \
		output:winman0.bin $(BIM_WM_AT)
	$(DELE) winman0.bim

pokon0.bin : $(MKFL) ../make_pk0.txt pokon0.obj
	$(MAKE) -C ../sgg00lib
	$(OBJ2BIM) @../linkrule.rul stack:$(STK_PK_AT) map:pokon0.map \
		out:pokon0.bim pokon0.obj ../sgg00lib/sgg00lib.lib
	$(BIM2BIN) malloc:$(MLC_PK_AT) mmarea:$(MMA_PK_AT) input:pokon0.bim \
		output:pokon0.bin $(BIM_PK_AT)
	$(DELE) pokon0.bim

%.bin : $(MKFL) %.ias
	$(ASKA) $*.ias $*.3as
	$(NASKCNV) $*.3as $*.nas
	$(NASK) $*.nas $*.bin $*.lst
	$(DELE) $*.3as
	$(DELE) $*.nas

%.obj : $(MKFL) %.gas
	$(GAS2NASK) $*.gas $*.nas
	$(NASK) $*.nas $*.obj $*.lst
	$(DELE) $*.nas

%.tek : $(MKFL) %.bin
	$(BIM2BIN) in:$*.bin out:$*.tek -osacmp -tek0 rjc:0

clean :
	-$(DELE) OSASK.EXE
	-$(DELE) *.lst
	-$(DELE) *.ias
	-$(DELE) *.gas
	-$(DELE) *.map
	-$(DELE) base.exe
	-$(DELE) *.obj
	-$(DELE) *.bin
	-$(DELE) *.tek
