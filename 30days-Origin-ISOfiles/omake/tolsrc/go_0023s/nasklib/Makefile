include ../include/rules.mak

TARGETLIB = nasklib.lib
OBJS = ll.o ll_lib.o nask.o

###

all :
	$(MAKER) $(TARGETLIB)

clean :
	-$(DEL) *.o
	-$(DEL) $(TARGETLIB)

$(TARGETLIB) : $(OBJS) Makefile ../include/rules.mak
	$(LIBRARIAN) out:$@ $(OBJS)
