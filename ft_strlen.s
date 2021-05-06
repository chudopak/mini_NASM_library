segment .text

global _ft_strlen

_ft_strlen:
	mov rax, 0
	.loop:
		cmp [rdi + rax], byte 0
		je exit
		inc rax
		jmp .loop
exit:
	ret