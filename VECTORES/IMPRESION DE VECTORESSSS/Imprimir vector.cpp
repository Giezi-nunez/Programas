#include<stdio.h>
#include<conio.h>
int vec [6],i; 
main ()
{
 for(i=1;i<=5;i++)
   {
   	printf(" INSERTA EL ELEMENTO %d: ",i);
   	scanf("%d",&vec[i]);
   } 
   for(i=1;i<=5;i++)
   { 
    	printf("\n %d",vec[i]);
   }
   getch ();
   return 0;
} 
