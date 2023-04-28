section .data
    hello db "Hello, Holberton", 10, 0 ; hello string with newline and null terminator

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; calling printf with hello string as argument
    mov rdi, hello
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
