#include<stdio.h>
#include<conio.h>
int  A [6],B[6],C[6],i; 
main ()
{
 for(i=1;i<=5;i++)
   {
   	printf("INSERTA EL ELEMENTO %d DEL VECTOR A:",i);
   	scanf("%d",&A[i]);
   } 
   for(i=1;i<=5;i++)
   {
   	printf("INSERTA EL ELEMENTO %d DEL VECTOR B: ",i);
   	scanf("%d",&B[i]);
   	
    C[i]=A[i]+B[i];
   }
  printf(" A   B ");
   for(i=1;i<=5;i++)
   printf("\n %d + %d = %d ",A[i],B[i],C[i]);
   getch ();
   return 0;
} 
