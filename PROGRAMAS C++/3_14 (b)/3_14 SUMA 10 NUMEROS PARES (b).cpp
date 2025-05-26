#include<stdio.h>
#include<conio.h>

int suma_par=0,n,residuo,cont_pos=0;

main()
{
 do {	
	printf("\n El numero seleccionado es ");
	scanf("%d",&n);
	residuo=n%2;
	   if (residuo==0)
	  {
	
	   printf("\n Si es par el numero, es el numero de los pares ");
	    suma_par=suma_par+n;
	    cont_pos=cont_pos+1;
	   }
       if (residuo==1)
       {
       	printf("\n No es un numero par, introduce otro ");
       }
     }while(cont_pos<=10);
     
	printf("\n La suma de los pares es = %d",suma_par);
    
	return 0;
}

