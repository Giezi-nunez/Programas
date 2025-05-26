#include<stdio.h>
#include<conio.h>

int suma_par=0,i,n,residuo;

main()
{
	for(i=1;i<=10;i++)
	{
		printf("\n Introduce numero ");
		scanf("%d",&n);
		residuo=n%2;
		if(residuo==0)
		{
			printf("\n El numero si es par = %d \n",n);
		    suma_par=suma_par+n;
		}
		if(residuo==1)
		{
			printf("\n No es par, introduce otro numero \n ");
		}
		//getch();
	}
	printf("\n La suma de los pares es = %d",suma_par);
	return 0;
}

