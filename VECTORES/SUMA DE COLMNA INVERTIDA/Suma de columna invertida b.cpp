#include<stdio.h>
#include<conio.h>
int  A [6],B[6],C[6],i,aux=5; 
main ()
{
 for(i=1;i<=5;i++)
   {
   	printf("dame el elemento %d del vector A: ",i);
   	scanf("%d",&A[i]);
    printf("dame el elemento %d del vector B: ",i);
   	scanf("%d",&B[i]);
   	}
   	
   		printf("\n");
   		for(i=1;i<=5;i++)
   		{
   		
   		C[i]=A[i]+B[aux];
       aux--;
   	    }
   	     
   
  
   for(i=1;i<=5;i++)
   {
   	printf("\n %d + %d = %d ",A[i],B[i],C[i]);
   }
   getch ();
   return 0;
   
}

