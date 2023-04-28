section .data
    msg db "Hello, Holberton", 0
    fmt db "%s\n", 0

section .text
    global main

    extern printf

main:
    mov esi, msg
    mov edi, fmt
    xor eax, eax
    call printf
    xor eax, eax
    ret

