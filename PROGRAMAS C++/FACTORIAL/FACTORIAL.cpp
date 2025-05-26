#include <stdio.h>
#include <conio.h>

int n,j,k,i,acum=1,num,fac,m;

main()
{
	printf("\n introduce cantidad de numeros ");
	scanf("%d",&m);
	for(k=1;k<=m;k++)
	{
	
	printf("\n Introduce el numero ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
//	fac=i;
//	for(j=fac;j<=fac;j++)
//	{	
	acum=acum*i;
//	}

	}
	
 
		printf("\n el factorial es = %d \n ",acum);
	acum=1;
    getch();
}
	return 0;
}
