include 'macros.txt'
data segment
    msg DB "Resultado: $"
    var dw 6
    ends

main proc
mov ax,@data
    mov ds, ax
    mov dx,offset msg
    mov ah,09h
    int 21h 
   

mov bx,1
mov ax,1
m_suma bx

m_final
  
end main

contenido del archivo .txt

m_final macro
mov ah, 4ch
int 21h
endm

m_suma macro var
add ax, bx
mov ah,02
mov dx,ax
add dx,30h
int 21h
endm