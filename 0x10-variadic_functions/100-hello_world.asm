; File: 100-hello_world.asm
; Desc: 64-bit assembly program that prints
;       Hello, World followed by a new line.
	global    main

	section   .text
main:   mov       rax, 1
	mov       rdi, 1
	mov       rsi, message
	mov       rdx, 13
	syscall
	mov       rax, 60
	xor       rdi, rdi
	syscall

	section   .data
message:  db        "Hello, World", 10
