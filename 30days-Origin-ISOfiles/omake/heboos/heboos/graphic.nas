; へぼOS用アプリ "GRAPHIC.NAS"
; TAB = 4
; copyright(C) 2003 川合秀実, KL-01

;	prompt>nask graphic.nas graphic.hoa graphic.lst
; でアセンブルできます。naskはtolset05以降に含まれています。
; tolset05は http://www.imasy.orr/~kawai/osask/developers.html にあります。

[FORMAT "BIN"]
[INSTRSET "i386"]
[OPTIMIZE 1]
[OPTION 1]
[BITS 16]
			ORG		0x0100

;	パレットの設定
;	0-15はシステムパレットで、16以降は自由に使える、ってことにした(笑)

			MOV		BX,64
PALLOP:
			MOV		AX,0x1010
			MOV		DH,BL
			AND		DH,0x3f
			MOV		CH,DH
			MOV		CL,0
			PUSH	BX
			INT		0x10
			POP		BX
			INC		BX
			CMP		BX,0x7f
			JBE		PALLOP

;	VRAMへの書き込み

			PUSH	DS
			MOV		AX,0xa000
			MOV		DS,AX
			XOR		BX,BX

;	まず8ラインをクリア

			MOV		AX,0x4040
CLR8LOP:
			MOV		[BX],AX
			ADD		BX,2
			CMP		BX,320*8
			JB		CLR8LOP

;	グラデーション生成

GRALOP0:
			MOV		CX,320*3/2
GRALOP1:
			MOV		[BX],AX
			ADD		BX,2
			DEC		CX
			JNZ		GRALOP1
			ADD		AX,0x0101
			CMP		AL,0x7f
			JBE		GRALOP0

			POP		DS

;	何かキーを押してもらう

			MOV		AH,0x00
			INT		0x16

;	画面をクリアしてOSに戻る

			MOV		AX,2
			INT		0x80
			XOR		AX,AX
			XOR		CX,CX
			INT		0x80
