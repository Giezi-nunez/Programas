include 'emu8086.inc'

include 'macros.inc'

.model small

data segment
    base  dw ?
    exp   dw ? 
    resul dw ? 
ends 

code segment

call basic

basic proc 
    call start 
    call objetive
    call capture
    potencia_num
    call printer
    call salir
    ret
basic endp

start proc
    mov ax, data
    mov ds, ax
    mov es, ax 
    ret
start endp
    mov ax,data
    mov ds,ax
    mov es, ax
    ret
objetive endp

capture proc
    
    printn ' '
    printn ' '
    printn "proporciona un numero =>"
    call scan_num
    mov base,cx
    
    printn ' '
    printn ' '
    printn "Proporciona el exponente" 
    call scan_nummov exp,cx
    ret  
capture endp

printer proc
    
    printn ' '
    printn ' '
    printn "Resultado"
    call print_num 
    ret
printer proc
    
salir proc
    
    printn ' '
    printn ' '
    printn 'precione una tecla para continuar...'
    mov ah, 1
    int 21h
    mov ax, 4c00h
    int 21h
    ret 
salir endp

define_scan_num
define_print_string
define_print_num
define_print_num_uns
define_phis

ends
    
    
    
    
