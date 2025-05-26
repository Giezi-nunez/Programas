include 'emu8086.inc' 
include macros.asm

.data
mensaje db "Programa de macro que imprime del 9 al 0", 13, 10, "$"
mensaje2 db 13, 10, "Loop que imprime del 0 al 9", 13, 10, "$"
num db 0

.code
mov cx, 10
lea dx, mensaje
mov ah, 09h
int 21h

mov cl, 9

imprimir_numeros:
mov dl, cl
add dl, '0'
mov ah, 02h
int 21h

loop imprimir_numeros

lea dx, mensaje2
mov ah, 09h
int 21h

mov cl, 0

imprimir_numeros2:
mov dl, cl
add dl, '0'
mov ah, 02h
int 21h

inc cl
cmp cl, 10
jl imprimir_numeros2

mov ah, 4Ch
int 21h

ret
