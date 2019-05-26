; へぼOS用アプリ "HELLO.NAS"
; TAB = 4
; copyright(C) 2003 川合秀実, KL-01

;	prompt>nask hello.nas hello.hoa hello.lst
; でアセンブルできます。naskはtolset05以降に含まれています。
; tolset05は http://www.imasy.orr/~kawai/osask/developers.html にあります。

[FORMAT "BIN"]
[INSTRSET "i386"]
[OPTIMIZE 1]
[OPTION 1]
[BITS 16]
			ORG		0x0100

			MOV		AX,1
			MOV		SI,msg
			INT		0x80
			XOR		AX,AX
			XOR		CX,CX
			INT		0x80
msg:
			DB		"hello, world",10,0
