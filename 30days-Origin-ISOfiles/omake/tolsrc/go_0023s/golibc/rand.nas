; rand -  K&RÇ©ÇÁÇŸÇ⁄î≤êàÇµÇΩÇ‡ÇÃÇíPÇ…ASMâªÇµÇΩ

[FORMAT "WCOFF"]
[INSTRSET "i486p"]
[OPTIMIZE 1]
[OPTION 1]
[BITS 32]
[FILE 'rand.nas']
GLOBAL _rand_seed
GLOBAL _rand

[SECTION .data]

			ALIGNB	4
_rand_seed	dd	1

[SECTION .text]

; int rand(void)

_rand:

	push	edx
	mov	eax,dword ds:[_rand_seed]
	mov	edx,1103515245
	mul	edx
	add	eax,12345
	mov	dword ds:[_rand_seed],eax
	shr	eax,16
	pop	edx
	and	eax,07fffh
	ret
