include ../include/rules.mak

TARGETS = drv_osa.lib
OBJS = osamain.o cc1main.o cmdline.o gas2nask.o \
	naskmain.o obj2bim.o bim2bin.o refresh.o sjisconv.o

###

all :
	$(MAKER) $(TARGETS)

clean :
	-$(DEL) drv_osa.lib
	-$(DEL) *.o

%.ias : %.ask Makefile
	$(CPP0) -P -o $*.ias $*.ask

%.3as : %.ias Makefile
	$(ASKA) $*.ias $*.3as

%.nas : %.3as Makefile
	$(NASKCNV) -l -s -w $*.3as $*.nas

%.o : %.nas Makefile ../include/rules.mak
	$(NASK) $*.nas $*.o

drv_osa.lib : $(OBJS) Makefile ../include/rules.mak
	$(LIBRARIAN) out:$@ $(OBJS)
