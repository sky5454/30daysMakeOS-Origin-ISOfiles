; NASKで作ったへぼOS専用IPL(AT互換機用)
; TAB = 4
; copyright(C) 2003 川合秀実, KL-01
; OSは512バイト未満であると仮定
; OSはシリンダ0、ヘッド0、セクタ2から入っていると想定

;	prompt>nask ipl.nas ipl.bin ipl.lst
; でアセンブルできます。naskはtolset05以降に含まれています。
; tolset05は http://www.imasy.orr/~kawai/osask/developers.html にあります。

; ディスクイメージを作るにはこうします。
;	prompt>copy /B ipl.bin+os.com fdimage.bin

; これをディスクに書き込むにはこうします。
; まずフォーマット済みのディスクをA:に入れる。
;	prompt>imgtol w a: fdimage.bin
; imgtolもtolset05以降に含まれています。


[FORMAT "BIN"]
[INSTRSET "i386"]
[OPTIMIZE 1]
[OPTION 1]
[BITS 16]
			ORG		0x7c00

			JMP		START
			NOP
			DB		'hogehoge'

; FATなんか用意してもいないくせに、BPBを作ってFAT12だということにしておく
; これをなくすと、ディスクをフォーマットしないとimgtolで読み書きできなくなるので
; しょうがないので入れておく

			DW		512 ; セクタ長(バイト単位)
			DB		1	; クラスタ長(セクタ単位)
			DW		1	; ブートセクタ長(セクタ単位)
			DB		2	; FATの数
			DW		0x00e0	; root directory entries.
			DW		2880	; 総セクタ数
			DB		0xf0	; media descriptor byte.
			DW		9		; 1つのFATの長さ(セクタ単位)
			DW		18		; 1トラックに収容されているセクタ数
			DW		2		; ヘッド数
			DD		0		; 不可視セクタ数
			DD		2880	; 総セクタ数
			DB		0, 0	; /* unknown */
			DB		0x29
			DD		0xffffffff
			DB		"hogehoge   "
			DB		"FAT12   "

; このディスクはDOSやWinでは読み書きできませんので、よろしく

START:
			MOV		AX,0x0201
			MOV		CX,0x0002
			XOR		DX,DX
			MOV		BX,0x0800
			MOV		ES,BX
			MOV		BX,0x0100
			INT		0x13
			JC		ERR

; .COMファイルのなので、DOS互換のレジスタ状態にしてやる

			MOV		AX,0x0800
			MOV		SS,AX
			MOV		SP,0xfffe
			MOV		DS,AX
			MOV		ES,AX
			JMP		0x0800:0x0100
ERR:
			INT		0x18	; ROM-BASICへ（笑）

			RESB	0x7dfe-$	; 0x7dfeまで0x00で埋める

			DB		0x55,0xaa
			