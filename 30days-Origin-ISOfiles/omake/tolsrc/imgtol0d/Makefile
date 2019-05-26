all:
	make imgtol.com

%.ias : %.ask
	cpp0 -P -I. -o $*.ias $*.ask

%.3as : %.ias
	aska $*.ias $*.3as

%.nas : %.3as
	naskcnv0 -l -s $*.3as $*.nas

%.com : %.nas
	nask $*.nas $*.org $*.lst
	bim2bin3 -osacmp -l2d3 in:$*.org out:$*.ld3
	comcom $*.ld3 $*.com
