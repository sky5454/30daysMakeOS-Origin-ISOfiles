include ../include/rules.mak

all :
	$(MAKER) golib00.exe sjisconv.exe gas2nask.exe nask.exe naskcnv0.exe

golib :
	$(MAKER) golib00.exe

clean :
	-$(DEL) *.obj
	-$(DEL) *.exe

%.exe : %.obj Makefile ../include/rules.mak
	$(LINK) -o $*.exe $*.obj

nask.exe : nask.obj Makefile ../include/rules.mak
	$(MAKEC) ../nasklib
	$(MAKEC) ../go_lib
	$(LINK) -o nask.exe nask.obj ../nasklib/nasklib.lib \
		../go_lib/go_lib.lib ../go_lib/stdin.o

naskcnv0.exe : naskcnv0.obj Makefile ../include/rules.mak
	$(MAKEC) ../go_lib
	$(LINK) -o naskcnv0.exe naskcnv0.obj ../go_lib/go_lib.lib
