#include<stdio.h>
#include<conio.h>

int a,b,c,i,j,n;

main ()
{
 for(i=1;i<=1;i++) //no pasara la instruccion si no se cumple con este siclo
 {
 	printf("\n Introduce la cantidad de sumas ");
 	scanf("%d",&n);
 	if(n>20)
 	{
 		printf("\n Invalido inserta otra cantidad \n");
 		i--;
 	}	
 }
 for(j=1;j<=n;j++)
 {
 	printf("\n Introduce el valor de a :");
 	scanf("%d",&a);
 	printf("\n Introduce el valor de b :");
    scanf("%d",&b);
    if((a>=1&&a<=100)&&(b>=1&&b<=100))
    {
    	c=a+b;
    	printf("\n el resultado de la suma %d es = %d",j,c);
    }
    else
    {
    	printf("\n Introduce un digito dentro del rango de 1 a 100 \n");
    	j--;
    }
 }
 
 
	return 0;
}
