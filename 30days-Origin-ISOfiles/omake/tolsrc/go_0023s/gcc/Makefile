include ../include/rules.mak


LIBIBERTY = ../libiberty/libiberty.lib
INTLLIBS = ../intl/libintl.lib
GOLIB = ../go_lib/go_lib.lib ../go_lib/stdin.o

LIBCPP_OBJS = cpplib.o cpplex.o cppmacro.o cppexp.o cppfiles.o cpphash.o \
	cpperror.o cppinit.o cppdefault.o line-map.o mkdeps.o prefix.o mbchar.o

C_OBJS = c-parse.o c-lang.o attribs.o c-errors.o c-lex.o c-pragma.o \
	c-decl.o c-typeck.o c-convert.o c-aux-info.o c-common.o c-format.o \
	c-semantics.o c-objc-common.o libcpp.lib

BACKEND = libbackend.lib

OBJS = alias.o bb-reorder.o bitmap.o builtins.o caller-save.o calls.o \
 cfg.o cfganal.o cfgbuild.o cfgcleanup.o cfglayout.o cfgloop.o cfgrtl.o \
 combine.o conflict.o convert.o cse.o cselib.o dbxout.o debug.o dependence.o \
 df.o diagnostic.o doloop.o dominance.o dwarf2asm.o dwarf2out.o dwarfout.o \
 emit-rtl.o except.o explow.o expmed.o expr.o final.o flow.o \
 fold-const.o function.o gcse.o genrtl.o ggc-common.o global.o graph.o \
 haifa-sched.o hash.o hashtable.o hooks.o ifcvt.o insn-attrtab.o insn-emit.o \
 insn-extract.o insn-opinit.o insn-output.o insn-peep.o insn-recog.o \
 integrate.o intl.o jump.o langhooks.o lcm.o lists.o local-alloc.o \
 loop.o mbchar.o optabs.o params.o predict.o print-rtl.o print-tree.o \
 profile.o real.o recog.o reg-stack.o regclass.o regmove.o regrename.o \
 reload.o reload1.o reorg.o resource.o rtl.o rtlanal.o rtl-error.o \
 sbitmap.o sched-deps.o sched-ebb.o sched-rgn.o sched-vis.o sdbout.o \
 sibcall.o simplify-rtx.o ssa.o ssa-ccp.o ssa-dce.o stmt.o \
 stor-layout.o stringpool.o toplev.o tree.o tree-dump.o \
 tree-inline.o unroll.o varasm.o varray.o version.o vmsdbgout.o xcoffout.o \
 ggc-page.o i386.o winnt.o

CXX_OBJS = ../cp/call.o ../cp/decl.o ../cp/expr.o ../cp/pt.o ../cp/typeck2.o \
	../cp/class.o ../cp/decl2.o ../cp/error.o ../cp/lex.o ../cp/parse.o \
	../cp/ptree.o ../cp/rtti.o ../cp/spew.o ../cp/typeck.o ../cp/cvt.o \
	../cp/except.o ../cp/friend.o ../cp/init.o ../cp/method.o ../cp/search.o \
	../cp/semantics.o ../cp/tree.o ../cp/repo.o ../cp/dump.o ../cp/optimize.o \
	../cp/mangle.o ../cp/cp-lang.o

CXX_C_OBJS = attribs.o c-common.o c-format.o c-pragma.o c-semantics.o c-lex.o

LIBS = $(INTLLIBS) $(LIBIBERTY) $(GOLIB)

all :
	$(MAKER) cpp0.exe cc1.exe cc1plus.exe

clean :
	-$(DEL) *.exe
	-$(DEL) *.lib
	-$(DEL) *.o
	-$(DEL) osaskgo.map
	-$(DEL) osaskgo.org
	-$(DEL) osaskgo.bim
	-$(DEL) osaskgo.bin

libcpp.lib : $(LIBCPP_OBJS) Makefile ../include/rules.mak
	$(LIBRARIAN) out:$@ $(LIBCPP_OBJS)

libbackend.lib : $(OBJS)
	$(LIBRARIAN) out:$@ $(OBJS)

cpp0.exe : cppmain.o intl.o libcpp.lib hashtable.o version.o \
		Makefile ../include/rules.mak
	$(MAKEC) ../libiberty
	$(MAKEC) ../intl
	$(MAKEC) ../go_lib
	$(MAKEC) $(GODRVDIR)
	$(LINK) -o $@ $(LINKOPT_CPP0) $(GODRVDIR)/cpp0main.obj cppmain.o intl.o \
		libcpp.lib hashtable.o version.o $(LIBS) $(GODRV) $(LINK_ADDLIB)

cc1.exe : $(C_OBJS) $(BACKEND) Makefile ../include/rules.mak
	$(MAKEC) ../libiberty
	$(MAKEC) ../intl
	$(MAKEC) ../go_lib
	$(MAKEC) $(GODRVDIR)
	$(LINK) -o $@ $(LINKOPT_CC1) $(GODRVDIR)/cc1main.obj $(C_OBJS) $(BACKEND) \
		$(LIBS) $(GODRV) $(LINK_ADDLIB)

cc1plus.exe : $(CXX_OBJS) $(CXX_C_OBJS) $(BACKEND) libcpp.lib \
		Makefile ../include/rules.mak
	$(MAKEC) ../libiberty
	$(MAKEC) ../intl
	$(MAKEC) ../go_lib
	$(MAKEC) $(GODRVDIR)
	$(LINK) -o $@ $(LINKOPT_CC1P) $(GODRVDIR)/cc1pmain.obj $(CXX_OBJS) \
		$(CXX_C_OBJS) $(BACKEND) libcpp.lib $(LIBS) $(GODRV) $(LINK_ADDLIB)

OBJ2BIM  = obj2bim3
BIM2BIN  = bim2bin3
RULEFILE = f:/osask/inclib/guigui00.rul

STACKSIZE = 128k
MALLOCSIZE = 6016k
MMAREA = 520k

OSADRV = ../drv_osa/drv_osa.lib

osaskgo.org : $(C_OBJS) $(BACKEND) Makefile ../include/rules.mak
	$(MAKEC) ../libiberty
	$(MAKEC) ../intl
	$(MAKEC) ../go_lib
	$(MAKEC) ../drv_osa
	$(MAKEC) ../nasklib
	$(OBJ2BIM) @$(RULEFILE) out:osaskgo.bim stack:$(STACKSIZE) map:osaskgo.map \
		$(OSADRV) $(C_OBJS) $(BACKEND) $(LIBS) ../nasklib/nasklib.lib
	$(BIM2BIN) in:osaskgo.bim out:osaskgo.org malloc:$(MALLOCSIZE) mmarea:$(MMAREA)

osaskgo.bin : $(C_OBJS) $(BACKEND) Makefile ../include/rules.mak
	$(MAKEC) ../libiberty
	$(MAKEC) ../intl
	$(MAKEC) ../go_lib
	$(MAKEC) ../drv_osa
	$(MAKEC) ../nasklib
	$(OBJ2BIM) @$(RULEFILE) out:osaskgo.bim stack:$(STACKSIZE) map:osaskgo.map \
		$(OSADRV) $(C_OBJS) $(BACKEND) $(LIBS) ../nasklib/nasklib.lib
	$(BIM2BIN) in:osaskgo.bim out:osaskgo.org malloc:$(MALLOCSIZE) mmarea:$(MMAREA)
	$(BIM2BIN) -osacmp in:osaskgo.org out:osaskgo.bin
