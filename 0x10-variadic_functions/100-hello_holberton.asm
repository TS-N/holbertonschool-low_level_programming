section .text
global main

main:
mov edx, len
mov ecx, txt
mov ebx, 1
mov eax, 4
int 0x80


mov ebx, 0
mov eax, 1
int 0x80

section .data
txt db 'Hello, Holberton', 10
len equ  $-txt
