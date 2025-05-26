imprime macro numero  ;Nuestra macro se llama imprimir, nuestro par�metro es numero
  mov ah,02h
  mov dl,numero  ;Indica que mueva al registro DL lo que pasamos como par�metro.
  add dl,30h  ;suma 30h para imprimir el n�mero real.
  int 21h
endm

.model small
.stack 64
.data
  num db 0  ;declaramos nuestra variable.
.code
  mov cx,9
inicio:
  mov num,cl
  imprime num ;Llamamos al macro con el valor de nuestra variable.
loop inicio ;repite ciclo

  mov ah,04ch ;Finaliza el programa.
  int 21h
end