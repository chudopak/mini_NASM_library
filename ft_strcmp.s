global _ft_strcmp

segment .text

; rsi - SRC
; rdi - Dst
; rax - return register
_ft_strcmp:
	mov rax, 0
	.loop:
		mov cl, byte [rdi + rax]
		mov dl, byte [rsi + rax]
		inc rax
		cmp cl, 0
		je lower
		cmp dl, 0
		je bigger
		cmp cl, dl
		je .loop
		jl  lower						;jump if lower
		jg bigger						;jump if bigger

lower:
	cmp dl, 0
	je equal
	mov rax, -1
	ret

bigger:
	mov rax, 1
	ret

equal:
	mov rax, 0
	ret