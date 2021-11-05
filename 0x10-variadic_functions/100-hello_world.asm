; File: 100-hello_world.asm
; Desc: 64-bit assembly program that prints
;Hello, World followed by a new line.
	extern	write		; the C function, to be called

	 section .data		; Data section, initialized variables
msg:	db "Hello, World", 0	; C string needs 0
fmt:    db "%s", 10, \n	   ; The write format, "\n",'0'

	 section .text	    ; Code section.

	 global main		; the standard gcc entry point
main:				; the program label for the entry point
	 push    rbp		; set up stack frame, must be alligned

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0		; or can be  xor  rax,rax
	 call    write		; Call C function

	pop	rbp		; restore stack

	mov	rax,0		; normal, no error, return value
	ret