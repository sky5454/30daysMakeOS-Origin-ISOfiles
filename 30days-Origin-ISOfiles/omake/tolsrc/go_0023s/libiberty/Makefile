include ../include/rules.mak

TARGETLIB = libiberty.lib
OBJS = alloca.o argv.o choose-temp.o concat.o dyn-string.o fdmatch.o \
	fibheap.o floatformat.o fnmatch.o getopt.o getopt1.o getpwd.o \
	hashtab.o hex.o lbasename.o make-temp-file.o objalloc.o \
	obstack.o partition.o safe-ctype.o sort.o spaces.o splay-tree.o \
	strerror.o strsignal.o ternary.o xatexit.o xexit.o xmalloc.o xmemdup.o \
	xstrdup.o xstrerror.o \
	regex.o cplus-dem.o cp-demangle.o md5.o \
	asprintf.o basename.o insque.o sigsetmask.o vasprintf.o \
	strcasecmp.o strncasecmp.o

###

all :
	$(MAKER) $(TARGETLIB)

clean :
	-$(DEL) $(TARGETLIB)
	-$(DEL) *.o

$(TARGETLIB) : $(OBJS) Makefile ../include/rules.mak
	$(LIBRARIAN) out:$@ $(OBJS)
