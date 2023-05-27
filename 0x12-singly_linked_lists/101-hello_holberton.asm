section .rodata
    msg db 'Hello, Holberton', 10
    msglen equ $ - msg

section .text
    global main

main:
    mov rax, 1              ; system call for write
    mov rdi, 1              ; file descriptor 1 (stdout)
    mov rsi, msg            ; pointer to message to write
    mov rdx, msglen         ; length of message
    syscall                 ; make the system call

    mov rax, 60             ; system call for exit
    xor rdi, rdi            ; exit status 0
    syscall                 ; make the system call
