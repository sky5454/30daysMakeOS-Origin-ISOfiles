; NASKで作った.COMファイル型へぼOS (AT互換機専用)
;		mini-FirstStepOS
;
; TAB = 4
; copyright(C) 2003 川合秀実, KL-01
;
; .COMファイルはプログラムが64KBを越えない限りにおいてはもっとも簡単
; たいていの人は最終的にOSが64KBを越えるからという理由で.COMを
; 選択したくないと思うだろう。しかし最初から.EXEの苦労を味わう必要はない。
; 64KBを越えたらその時に.EXE化すればいいではないか。
; .COMならセグメントも気にしなくていいので気楽なものだ。

;	prompt>nask os.nas os.com os.lst
; でアセンブルできます。naskはtolset05以降に含まれています。
; tolset05は http://www.imasy.orr/~kawai/osask/developers.html にあります。

[FORMAT "BIN"]
[INSTRSET "i386"]
[OPTIMIZE 1]
[OPTION 1]
[BITS 16]
			ORG		0x0100 ; .COMは必ずORG 0x0100で始まる

; さて何をしようか。とりあえず320x200x256色でもやってグラデーションを
; 出して遊ぶかな？（"hello"とかは平凡すぎるだろうから）

;	画面モードとパレット設定

			MOV 	AX,0x0013
			INT		0x10
			XOR		BX,BX
PALLOP:
			MOV		AX,0x1010
			MOV		DH,BL
			MOV		CH,BL
			MOV		CL,0
			PUSH	BX
			INT		0x10
			POP		BX
			INC		BX
			CMP		BX,0x3f
			JBE		PALLOP

			MOV		AX,0x1010
			MOV		BL,255
			MOV		DH,0x3f
			MOV		CX,0x3f3f
			INT		0x10

;	VRAMへの書き込み

			PUSH	DS
			MOV		AX,0xa000
			MOV		DS,AX
			XOR		BX,BX

;	まず8ラインをクリア

			XOR		AX,AX
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
			CMP		AL,0x3f
			JBE		GRALOP0

			POP		DS

			JMP		$	; おしまい（リセットボタンを押してね）
