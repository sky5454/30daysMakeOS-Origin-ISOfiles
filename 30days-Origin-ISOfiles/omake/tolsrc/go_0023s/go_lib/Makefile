include ../include/rules.mak

TARGETLIB = go_lib.lib
OBJS = memchr.o memcmp.o memcpy.o memmove.o memset.o strcat.o strchr.o \
	strcmp.o strcpy.o strcspn.o strlen.o strncat.o strncmp.o strncpy.o \
	strpbrk.o strrchr.o strspn.o strstr.o strdup.o ldexp.o frexp.o \
	atof.o atoi.o abs.o rand.o errno.o  abort.o sprintf.o fprintf.o vfprintf.o \
	calloc.o fputs.o fputc.o fwrite.o feof.o ungetc.o fseek.o ftell.o \
	fgets.o fread.o malloc.o realloc.o dummy.o fgetc.o mmmalloc.o \
	symalloc.o vsprintf.o fopen.o fclose.o mmreallo.o printf.o strtoul.o \
	strtoul0.o strtol.o qsort.o # stdin.o

###

# stdinÇ™ï Ç…Ç»Ç¡ÇƒÇ¢ÇÈÇÃÇÕÅAld.exeÇÃÉoÉOâÒîÇÃÇΩÇﬂ

all :
	$(MAKER) $(TARGETLIB) stdin.o

clean :
	-$(DEL) *.o
	-$(DEL) $(TARGETLIB)

$(TARGETLIB) : $(OBJS) Makefile ../include/rules.mak
	$(LIBRARIAN) out:$@ $(OBJS)
