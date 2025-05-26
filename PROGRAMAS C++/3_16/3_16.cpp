#include<stdio.h>
#include<conio.h>

int i,num,cont_men15=0,cont_may25_men45=0,cont_may50=0;

main ()
{
	for(i=1;i<=5;i++)
	{
		printf("\n Introduce el numero %d   ",i);
		scanf("%d",&num);
		
		if(num<15)
		{
			cont_men15=cont_men15+1;
		}
		if(num>25&&num<45)
		{
			cont_may25_men45=cont_may25_men45+1;
		}
		if(num>50)
		{
			cont_may50=cont_may50+1;
		}
	}
	printf("\n La cantidad de numeros menores a 15 son   %d ",cont_men15);
	printf("\n La cantidad de numeros entre 25 y 45 son %d ",cont_may25_men45);
	printf("\n La cantidad de numeros mayores a 50 son  %d ",cont_may50);
	return 0;
}
