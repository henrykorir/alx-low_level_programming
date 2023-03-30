SECTION .DATA
	hello: db "Hello, Holberton", 10, 0
	fmt: db "%s", 0
SECTION .TEXT
	GLOBAL main
	extern printf
main:
	push rbp
	mov rdi, fmt
	mov rsi, hello
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
