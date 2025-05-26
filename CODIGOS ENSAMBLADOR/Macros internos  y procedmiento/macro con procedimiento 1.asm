; multi-segment executable file template.

data segment
    ; add your data here!
    pkey db "ejercicio de macro con procedimiento...$" 
    texto db "Este es otro$"
ends

stack segment
    dw   128  dup(0)
ends 

print macro ren,col,cad
 mov ch, ren
 mov cl,col
 push cx
 lea dx,cad
 
 push dx
 call imprime
 pop dx
 pop ax
 endm

code segment 
    ;
 mover proc
    pusha
    mov bp,sp 
    ;
    mov dx,[bp+18]
    mov ah,2
    mov bx,0
    int 10h
    popa
   ret
   endp
 
 ;
 imprime proc
    pusha
    mov bp,sp
    
    mov ax,[bp+20]
    push ax
    call mover
    pop ax
      
    mov dx,[bp+18]
    ;
    mov ah, 9
    int 21h
    popa
ret
 endp
 start:
 ;
 mov ax, data
 mov ds, ax
 mov es, ax
 
 print 3,20,pkey
 
 print 10,10,texto
            
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends    

end start ; set entry point and stop the assembler.
