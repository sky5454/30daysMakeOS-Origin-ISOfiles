# Makefile for OSASK/NEC98
#  ver. 0.0

TOOLPATH = ../../z_tools/
INCPATH  = ../../z_tools/guigui00/

include ../make_inc.txt
include ../make_com.txt
include ../make_wm0.txt
include ../make_pk0.txt

DEFINES = $(DEFINES_NE) -DNEC98 -D$(DESIGN)

MKFL = Makefile ../Makefile ../make_inc.txt ../make_com.txt

ALL :
	$(MAKE) OSASK.EXE

OSASK.EXE : $(MKFL) osalink1.opt base.exe boot32.bin ankfont0.tek tapi0.tek \
			timerdrv.tek keymos0.tek fdcdrv0.tek pioneer0.tek vgadrv0.tek \
			decode0.tek papi0.tek init.tek winman0.tek pokon0.tek
	$(OSALINK)

base.exe : $(MKFL) ../base.nap
	$(CPP0) -P $(DEFINES) -o base.nas ../base.nap
	$(NASK) base.nas base.exe base.lst
	$(DELE) base.nas

boot32.ias : $(MKFL) ../boot32.ask
	$(CPP0) -P $(DEFINES) -o boot32.ias ../boot32.ask

ankfont0.bin : $(MKFL) ../ankfont0/$(FONTSRC)
	$(TXT2BIN) ../ankfont0/$(FONTSRC) ankfont0.bin

tapi0.ias : $(MKFL) ../tapi0.ask
	$(CPP0) -P $(DEFINES) -o tapi0.ias ../tapi0.ask

timerdrv.ias : $(MKFL) timerdrv.ask
	$(CPP0) -P -I.. $(DEFINES) -o timerdrv.ias timerdrv.ask

keymos0.ias : $(MKFL) keymos0.ask
	$(CPP0) -P -I.. $(DEFINES) -o keymos0.ias keymos0.ask

fdcdrv0.ias : $(MKFL) fdcdrv0.ask
	$(CPP0) -P -I.. $(DEFINES) -o fdcdrv0.ias fdcdrv0.ask

pioneer0.ias : $(MKFL) ../pioneer0.ask
	$(CPP0) -P $(DEFINES) -o pioneer0.ias ../pioneer0.ask

vgadrv0.ias : $(MKFL) vgadrv0.ask
	$(CPP0) -P -I.. $(DEFINES) -o vgadrv0.ias vgadrv0.ask

decode0.ias : $(MKFL) decode0.ask
	$(CPP0) -P -I.. $(DEFINES) -o decode0.ias decode0.ask

papi0.ias : $(MKFL) ../papi0.ask
	$(CPP0) -P $(DEFINES) -o papi0.ias ../papi0.ask

init.ias : $(MKFL) ../init.ask
	$(CPP0) -P $(DEFINES) -o init.ias ../init.ask

winman0.gas : $(MKFL) ../winman0.c
	$(CC1) $(DEFINES) -I../sgg00lib -o winman0.gas ../winman0.c

winman0.bin : $(MKFL) ../make_wm0.txt winman0.obj
	$(MAKE) -C ../sgg00lib
	$(OBJ2BIM) @../linkrule.rul stack:$(STK_WM_NE) map:winman0.map \
		out:winman0.bim winman0.obj ../sgg00lib/sgg00lib.lib
	$(BIM2BIN) malloc:$(MLC_WM_NE) mmarea:$(MMA_WM_NE) input:winman0.bim \
		output:winman0.bin $(BIM_WM_NE)
	$(DELE) winman0.bim

pokon0.gas : $(MKFL) ../pokon0.c
	$(CC1) $(DEFINES) -I../sgg00lib -o pokon0.gas ../pokon0.c

pokon0.bin : $(MKFL) ../make_pk0.txt pokon0.obj
	$(MAKE) -C ../sgg00lib
	$(OBJ2BIM) @../linkrule.rul stack:$(STK_PK_NE) map:pokon0.map \
		out:pokon0.bim pokon0.obj ../sgg00lib/sgg00lib.lib
	$(BIM2BIN) malloc:$(MLC_PK_NE) mmarea:$(MMA_PK_NE) input:pokon0.bim \
		output:pokon0.bin $(BIM_PK_NE)
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
