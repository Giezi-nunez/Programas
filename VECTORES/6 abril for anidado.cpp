#include<stdio.h>
#include<conio.h>


int n,m,j,i;

main()
{
	scanf("%d",&m);
	printf("El numero seleccionado es = %d  \n",m);

	n=m;
	for(i=1;i<=m;i++)
	{
	
		for(j=1;j<=n;j++)
		{
		printf(" %d  ",j);
		
	
	}
	n=n-1;
	printf("\n",n);
	}
	
return 0;	
}
