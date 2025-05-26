include 'emu8086.inc'
org 100h

jmp inicio

M1 dw 2 dup (?, ?)
M2 dw 2 dup (?, ?)
M3 dw 2 dup (?, ?)

numx dw ?
numy dw ?

; Define macros
macro CapturaValor registro
    push ax
    printn ' '
    printn ' '
    print ' ', registro, '[ '
    mov ax, numx
    call print_num
    print ' , '
    mov ax, numy
    call print_num
    print ' ] ----> '
    call scan_num
    mov registro, cx
    pop ax
endm 

macro ImprimeResultado
    printn ' '
    printn ' Imprimir el resultado de la resta '
    printn ' '
endm

macro ImprimeValor registro
    push ax
    printn ' '
    printn ' '
    print ' ', registro, '[ '
    mov ax, numx
    call print_num
    print ' , '
    mov ax, numy
    call print_num
    print ' ] ----> '
    mov ax, registro
    call print_num
    pop ax
endm

; Define procedimientos
proc CapturaCeldas
    push si
    push ax
    mov si, 0
    mov numy, 0

    Captura_celdas_loop:
        CapturaValor M1[si]
        CapturaValor M2[si]

        xor ax, ax
        xor bx, bx
        mov ax, M1[si]
        mov bx, M2[si]
        sub ax, bx
        mov M3[si], ax

        inc numy
        add si, 2

        mov ax, numy
        cmp ax, 2
        jb Captura_celdas_loop

    pop ax
    pop si
endp

proc ImprimirCeldas
    push si
    push ax
    mov si, 0
    mov numy, 0

    Imprimir_celdas_loop:
        ImprimeValor M3[si]

        inc numy
        add si, 2

        mov ax, numy
        cmp ax, 2
        jb Imprimir_celdas_loop

    pop ax
    pop si
endp

inicio:
mov cx, 2
mov si, 0
mov numx, 0
mov numy, 0

Captura_filas:
    push cx
    mov numy, 0

    Captura_celdas:
        CapturaValor M1[si]
        CapturaValor M2[si]

        call CapturaCeldas

        inc numx
        pop cx
        loop Captura_filas

mov cx, 2
mov si, 0
mov numx, 0
mov numy, 0

ImprimeResultado:

Imprimir_resultado:
    push cx
    mov numy, 0

    Imprimir_celdas:

        call ImprimirCeldas

        inc numx
        pop cx
        loop Imprimir_resultado

ret

define_clear_screen
define_pthis
define_scan_num
define_print_num
define_print_num_uns

end
