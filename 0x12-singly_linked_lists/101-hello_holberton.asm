section .text
global main

main:
mov edi, txt
mov eax, 0
call printf

section .data
txt db 'Hello, Holberton', 10
len equ  $-txt

extern printf
