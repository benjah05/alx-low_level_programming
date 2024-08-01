section .data
	greetings: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
section .text
	global main
	extern printf  ;define printf
main:
	mov rdi, fmt
	mov rsi, greetings
	xor rax, rax
	call printf
	xor rax, rax
	ret
