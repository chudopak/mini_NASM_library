segment .text
extern ___error
SYS_WRITE equ 0x2000004
global _ft_write

_ft_write:
	mov rax, SYS_WRITE
	syscall
	jc error
	jmp exit

error:
	mov r8, rax
	push -1				;initialise stack
	call ___error		;write to "rax" adress of global variable errno
	mov [rax], r8		;write error code to "rax"
	mov rax, -1
	pop r8				;close stack
	ret

exit:
	ret