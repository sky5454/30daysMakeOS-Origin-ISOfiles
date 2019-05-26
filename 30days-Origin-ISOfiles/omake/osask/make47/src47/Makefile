# Makefile for OSASK
#  ver. 0.0

TOOLPATH = ../z_tools/

include make_com.txt

ALL :
# デフォルト動作：各自好きなようにカスタマイズすればいい
	$(MAKE) img_at

all :
	$(MAKE) at
	$(MAKE) tw
	$(MAKE) ne

at :
	$(MAKE) -C pcat
	$(COPY) pcat\OSASK.EXE OSASK_AT.EXE
	$(EDIMG) binin:OSASK_AT.EXE exe2bin seg:2048 binout:OSASK_AT.SYS

tw :
	$(MAKE) -C towns
	$(COPY) towns\OSASK.EXE OSASK_TW.EXE
	$(EDIMG) binin:OSASK_TW.EXE exe2bin seg:2048 binout:OSASK_TW.SYS

ne :
	$(MAKE) -C nec98
	$(COPY) nec98\OSASK.EXE OSASK_NE.EXE
	$(EDIMG) binin:OSASK_NE.EXE exe2bin seg:2048 binout:OSASK_NE.SYS

qe :
	$(MAKE) -C qemu
	$(COPY) qemu\OSASK.EXE OSASK_QE.EXE
	$(EDIMG) binin:OSASK_QE.EXE exe2bin seg:2048 binout:OSASK_QE.SYS

run : Makefile qemu/edimgopt.txt $(TOOLPATH)osa_qemu/OSAIMGAT.BIN
	$(MAKE) qe
	$(EDIMG) imgin:$(TOOLPATH)osa_qemu/OSAIMGAT.BIN @qemu/edimgopt.txt \
		imgout:qemu/OSAIMGQE.BIN imgout:$(TOOLPATH)qemu/FDIMAGE0.BIN
	$(MAKE) -C $(TOOLPATH)qemu

bo :
	$(MAKE) -C bochs
	$(COPY) bochs\OSASK.EXE OSASK_BO.EXE
	$(EDIMG) binin:OSASK_BO.EXE exe2bin seg:2048 binout:OSASK_BO.SYS

vm :
	$(MAKE) -C vmware3
	$(COPY) vmware3\OSASK.EXE OSASK_VM.EXE
	$(EDIMG) binin:OSASK_VM.EXE exe2bin seg:2048 binout:OSASK_VM.SYS

img_at :
	$(MAKE) at
	$(EDIMG) imgin:fdimg0at.tek wbinimg src:osaskbs1.bin len:512 from:0 to:0 \
		bias:9 create file:@:osask.sys size:108k begin:5 \
		ovrcopy from:OSASK_AT.SYS to:@:OSASK.SYS \
		setattr file:@:OSASK.SYS attr:0x06 imgout:OSAIMGAT.BIN

img_tw :
	$(MAKE) tw
	$(EDIMG) imgin:fdimg0tw.tek wbinimg src:osaiplt0.bin len:1024 from:0 to:0 \
		bias:9 create file:@:osask.sys size:106k begin:7 \
		ovrcopy from:OSASK_TW.SYS to:@:OSASK.SYS \
		setattr file:@:OSASK.SYS attr:0x06 imgout:OSAIMGTW.BIN

img_ne :
	$(MAKE) ne
	$(EDIMG) imgin:fdimg0tw.tek wbinimg src:osaipln0.bin len:1024 from:0 to:0 \
		bias:9 create file:@:osask.sys size:106k begin:7 \
		ovrcopy from:OSASK_NE.SYS to:@:OSASK.SYS \
		setattr file:@:OSASK.SYS attr:0x06 imgout:OSAIMGNE.BIN

img_qe :
	$(MAKE) qe
	$(EDIMG) imgin:fdimg0at.tek wbinimg src:osaskbs1.bin len:512 from:0 to:0 \
		bias:9 create file:@:osask.sys size:108k begin:5 \
		ovrcopy from:OSASK_QE.SYS to:@:OSASK.SYS \
		setattr file:@:OSASK.SYS attr:0x06 imgout:OSAIMGQE.BIN

img_bo :
	$(MAKE) bo
	$(EDIMG) imgin:fdimg0at.tek wbinimg src:osaskbs1.bin len:512 from:0 to:0 \
		bias:9 create file:@:osask.sys size:108k begin:5 \
		ovrcopy from:OSASK_BO.SYS to:@:OSASK.SYS \
		setattr file:@:OSASK.SYS attr:0x06 imgout:OSAIMGBO.BIN

img_vm :
	$(MAKE) vm
	$(EDIMG) imgin:fdimg0at.tek wbinimg src:osaskbs1.bin len:512 from:0 to:0 \
		bias:9 create file:@:osask.sys size:108k begin:5 \
		ovrcopy from:OSASK_VM.SYS to:@:OSASK.SYS \
		setattr file:@:OSASK.SYS attr:0x06 imgout:OSAIMGVM.BIN

clean :
# OSASK_??.EXE/SYSやディスクイメージは残るが中間生成物は全て消される
	$(MAKE) -C pcat     clean
	$(MAKE) -C towns    clean
	$(MAKE) -C nec98    clean
	$(MAKE) -C sgg00lib clean
	$(MAKE) -C qemu     clean
	$(MAKE) -C bochs    clean
	$(MAKE) -C vmware3  clean

src_only :
	$(MAKE) clean
	-$(DELE) sgg00lib\sgg00lib.lib
	-$(DELE) OSASK_*.EXE
	-$(DELE) OSASK_*.SYS
	-$(DELE) OSAIMG*.BIN
	-$(DELE) qemu\OSAIMGQE.BIN
