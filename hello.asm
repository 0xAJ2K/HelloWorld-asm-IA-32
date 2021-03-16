; Hello World

global _start

section .text

_start:
	jmp short call_shellcode

shellcode:
	pop ecx

	xor eax, eax
	push 0x4
	pop ax

	xor ebx, ebx
	push 0x1
	pop bx

	xor edx, edx
	mov dl, msglen

	int 0x80

	xor eax, eax
	mov al, 0x1

	xor ebx, 0x1
	int 0x80

call_shellcode:
    	call shellcode
	message db 'Hello world!',13,10 ;
	msglen equ $-message ;