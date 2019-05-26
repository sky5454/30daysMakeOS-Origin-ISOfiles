cpp0 -P -I. -o os.ias os.ask
aska os.ias os.3as
naskcnv0 -l -s os.3as os.nas
nask os.nas os.bin os.lst
txt2bin charfont.txt charfont.bin
copy /B os.bin+charfont.bin os.com