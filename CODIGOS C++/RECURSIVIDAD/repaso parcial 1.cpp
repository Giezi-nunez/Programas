//ERICK JAIMES PEGUEROS 
//P5-21-09-22 REPASO PARCIAL 1 

//0, 1, 1, 2, 3, 5, 8
//0+1=1+1=2+1=3+2=5+3=8+5=13+8=21 

//0, 1, 1, 2, 3, 5
//0+1=1+1=2+1=3+2=5+3=8
 //entonces x= num-1 + num-2
 //supongamos 5-1=4 + 5-2=3 se logra su antecesor y formula recursiva.
 			//DEBE DE MOSTRAR RESULTADOS DE CADA OPERACION  

#include <iostream>
#include <stdio.h>
#include <conio.h>

int fib(int num){			
	if(num<=1){//Debe ser inicializada en 1 ya que se inicializa en 0 los resultados seran negativos.
		return num;
	}
	else {
		return (fib (num-1) + fib (num-2));
	}
	return 0;
}

/*
ultimo=1
penultimo=0
entonces penultimo + ultimo (0+1)
pero despues ultimo es penultimo, pero tambien es el resultado 
por lo tanto se incrementa el ultimo (1+2)
*/

//se tiene que generar doble formula recursiva para poder mostrar la serie.
int res (int n){
	int r;
	if (n != -1) { /*De esta manera CON -1 LOGRAMOS que INICIALICE en 0*/ 
		r=(n-res(n-1));
		/*num es restado por su antecesor logrando 
		generar el primer valor 8-7 =1
		el antecesor del ultimo numero por el que se 
		resto 7-6 = 1*/
		printf ("%i, ", fib(n));
		//nos apoya mostrando los resultados de cada vuelta recursiva. 
		
		return r;
	}
	return 0;
}

int main () {
	int n; 
	printf("Dame a que numero deseas la serie de Fibonacci: \n"); 
	scanf("%i", &n);
	res (n); //Llamamos a la funcion rest.
	return 0;
}




//para la piramide puedes usar otro cout para que salga invertido.

	/*if (num==1){
		
		
		return 1;	
	}
	else if (num==2){
		
		return 2;
	}*/
