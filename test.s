section .data
    msg db 'I hate foids', 0xa 
    len equ $ - msg

section .text
global _start
_start:
    mov edx, len ; Not working rn I'll fix it when I have time
    mov esi, msg
    mov edi, 1
    mov eax, 1
    syscall

    xor edi, edi
    mov eax, 60
    syscall