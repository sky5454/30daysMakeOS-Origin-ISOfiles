include ../include/rules.mak

TARGETLIB = libintl.lib
OBJS = intl-compat.o bindtextdom.o dcgettext.o dgettext.o gettext.o \
	finddomain.o localealias.o textdomain.o explodename.o dcigettext.o \
	dcngettext.o dngettext.o ngettext.o plural.o localcharset.o loadmsgcat.o \
	l10nflist.o 

###

all :
	$(MAKER) $(TARGETLIB)

clean :
	-$(DEL) $(TARGETLIB)
	-$(DEL) *.o

$(TARGETLIB) : $(OBJS) Makefile ../include/rules.mak
	$(LIBRARIAN) out:$@ $(OBJS)
