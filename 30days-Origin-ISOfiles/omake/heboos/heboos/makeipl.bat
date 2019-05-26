cpp0 -P -I. -o ipl.ias ipl.ask
aska ipl.ias ipl.3as
naskcnv0 -l -s ipl.3as ipl.nas
nask ipl.nas ipl.bin ipl.lst
copy /B ipl.bin+os.com fdimage.bin