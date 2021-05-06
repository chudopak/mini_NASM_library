global _ft_strcpy

segment .text

; rsi - SRC
; rdi - DEST
; rax - VALUE TO RETURN
_ft_strcpy:
	mov rax, 0
	.loop:
		mov cl, byte [rsi + rax]
		mov byte [rdi + rax], cl
		cmp cl, byte 0
		je exit
		add rax, 1
		jmp .loop
exit:
	mov rax, rdi
	ret