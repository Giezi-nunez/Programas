#include<stdio.h>
#include<conio.h>
int  A [6],B[6],C[6],i,aux=5;
main ()


{
  for(i=1;i<=5;i++)
   {
   	printf("dame el elemento %d del vector A:",i);
   	scanf("%d",&A[i]);
    
   	}

   		printf("\n");
   		for(i=1;i<=5;i++)
   		{
   			printf("dame el elemento %d del vector B:",i);
   	    scanf("%d",&B[i]);
  
      
   	  }
   	    
     for(i=1;i<=5;i++)
   {
   	 C[i]=A[i]+B[aux];//al ponerle el auxiliar de aux=5 te sumara el valor de la posicion 5 con el del 1
   	aux--;
   	printf("\n %d + %d = %d ",A[i],B[i],C[i]);
   }
   getch ();
   return 0;

}

   	 

