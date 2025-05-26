include macros.asm

.model small
.stack 64
.data

n1 db 0
n2 db 0
suma db 0
msj db "Dame el primer valor: $"
msj2 db 10, 13, "Dame el segundo valor $"
msj3 db 10, 13, "suma = $"

.code

mov ax, @data
mov ds, ax
mov ah, 09
lea dx, msj
int 21h

mov ah, 01
int 21h
sub al, 30h
mov n1, al

mov ah, 09
lea dx, msj2
int 21h
mov ah, 01
int 21h
sub al, 30h
mov n2, al


ret