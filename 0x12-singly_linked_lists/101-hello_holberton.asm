global main

extern printf

section .data
    message db 'Hello, Holberton', 0
    format db '%s', 10, 0

section .text
main:
    push message
    push format
    call printf
    add rsp, 16 ; restore stack pointer
    ret
