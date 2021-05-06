segment .text
extern ___error
SYS_READ equ 0x2000003
global _ft_read

_ft_read:
	mov rax, SYS_READ
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