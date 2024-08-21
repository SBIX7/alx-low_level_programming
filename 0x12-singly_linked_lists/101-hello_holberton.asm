section .data
	hello_holberton db "Hello, Holberton", 10, 0
section .text
extern printf
global _start
_start:
	mov rdi, hello_holberton
	xor rax, rax
	call printf
	mov rax, 60
	xor rdi, rdi
	syscall
