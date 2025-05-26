#include<stdio.h>
#include<conio.h>
int vec [6],i; 
main ()
{
 for(i=1;i<=5;i++)//va por el valor 1 hasta el 5
   {
   	printf("dame el elemento %d:",i);
   	scanf("%d",&vec[i]); //guarda el valor que pediste en elemento en vec [i]
   } 
   for(i=5;i>=1;i--)//te imprime el vector al reves
   { 
    	printf("\n %d",vec[i]);
   }
   getch ();
   return 0;
} 
