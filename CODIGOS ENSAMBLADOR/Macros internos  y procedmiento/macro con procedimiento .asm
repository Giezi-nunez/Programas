include 'emu8086.inc'
org 100h

mov si, 0

printn "La Suma es:"
sumar proc
    mov al, [matriz + si]
    mov bl, [matriz2 + si]
    add al, bl
    printn ""
    call print_num
    printn ""
    inc si
    cmp si, 9
    jne sumar
    jmp fin
    ret
sumar endp

fin:
    jmp opcion

opcion proc
    printn "Opción elegida"
    ret
opcion endp

define_clear_screen
define_pthis
define_scan_num
define_print_num
define_print_num_uns

matriz db 9, 8, 7, 6, 5, 4, 3, 2, 1
matriz2 db 1, 2, 3, 4, 5, 6, 7, 8, 9

