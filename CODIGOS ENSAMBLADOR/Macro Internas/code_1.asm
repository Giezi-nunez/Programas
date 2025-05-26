restas macro p, s
    mov al, p
    sub al, s
    add al, 30h
    mov resta, al
    mov ah, 09
    lea dx, msj3
    int 21h
    mov ah, 02
    mov dl, resta
    int 21h
    mov ah, 4ch
    int 21h
endm


.model small
.stack 64
.data

    n1 db 0
    n2 db 0
    resta db 0
    msj  db "Dame el primer valor: $"
    msj2 db 10,13, "Dame el segundo valor $"
    msj3 db 10,13, "resta = $"

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

restas n1, n2

ret