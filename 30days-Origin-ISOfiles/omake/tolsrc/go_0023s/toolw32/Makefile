include ../include/rules.mak

all :
	$(MAKER) golib00w.exe sjisconv.exe gas2nask.exe nask.exe naskcnv0.exe

golib :
	$(MAKER) golib00w.exe

golib00w.exe : golib00.o Makefile ../include/rules.mak
	$(LINK) --stack 0x2000000 -o golib00w.exe golib00.o $(LINK_ADDLIB)
#		16MB(apl) + 16MB(sys)

sjisconv.exe : sjisconv.o Makefile ../include/rules.mak
	$(LINK) --stack 0x2000000 -o sjisconv.exe sjisconv.o $(LINK_ADDLIB)
#		16MB(apl) + 16MB(sys)

gas2nask.exe : gas2nask.o Makefile ../include/rules.mak
	$(LINK) --stack 0x2000000 -o gas2nask.exe gas2nask.o $(LINK_ADDLIB)
#		16MB(apl) + 16MB(sys)

nask.exe : nask.o Makefile ../include/rules.mak
	$(MAKEC) ../nasklib
	$(MAKEC) ../go_lib
	$(LINK) --stack 0x2200000 -o nask.exe nask.o ../nasklib/nasklib.lib \
		../go_lib/go_lib.lib ../go_lib/stdin.o $(LINK_ADDLIB)
#		18MB(apl) + 16MB(sys)

naskcnv0.exe : naskcnv0.o Makefile ../include/rules.mak
	$(MAKEC) ../go_lib
	$(LINK) --stack 0x2000000 -o naskcnv0.exe naskcnv0.o \
		../go_lib/go_lib.lib $(LINK_ADDLIB)
#		16MB(apl) + 16MB(sys)

clean :
	-$(DEL) *.o
	-$(DEL) *.exe
