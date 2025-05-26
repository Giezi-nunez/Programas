

include "emu8086.inc"  

include "Operaciones.txt"

org 100h


matriz db 9 dup (0)
matriz2 db 9 dup (0)

mov si,0  


printn 'ingrese los primero numeros de tu primera matriz'

call principal

principal proc    
    call Mtz1   
    call Mtz2
    call opcion 
    call macro_suma  
    call macro_resta 
    call macro_multi
     call macro_divi 
    ret
principal endp 


Mtz1 proc
   
   call scan_num
   printn ''
   mov matriz[si],cl
   inc si 
   cmp si,9
   jne Mtz1
   mov si,1
   mov bx,0
   
Mtz1 endp

mov si,0

print "ingresa los numeros de la segunda matriz:"

Mtz2 proc 
    
   call scan_num
   printn ''
   mov matriz2[si],cl
   inc si 
   cmp si,9
   jne Mtz2
   mov si,1
   mov bx,0 
   

Mtz2 endp 

opcion proc

proc "====menu==="
printn ""
printn "seleccion opcion"
printn "1 suma"
printn "2 resta"
printn "3 multiplicar"
printn "4 dividir" 
printn "5 salir" 
printn  "=========="

call scan_num
printn ''
mov bx,cx

cmp bx,1
je macro_suma
cmp bx,2
je macro_resta
cmp bx,3
je macro_multi
cmp bx,4
je macro_divi
cmp bx,5
printn "saliendo"
je call salir 
jmp opcion   


opcion endp

macro_suma proc
suma 

macro_resta proc
resta 

macro_multi proc
multiplicacion 

macro_divi proc
dividision 

salir proc
    
print 'precione una tecla para salir'
mov ah,0h
int 16h

salir endp 

define_clear_screen
define_pthis
define_scan_num
define_print_num
define_print_num_uns

end



               