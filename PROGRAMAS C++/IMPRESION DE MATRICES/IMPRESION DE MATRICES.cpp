#include<stdio.h>
#include<conio.h>

int i,j,n,m;

main()

{
	printf(" INSERTA EL NUMERO DE RENGLONES ");
	scanf("%d",&n);
	printf(" INSERTA EL NUMERO DE COLUMNAS ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)   //numero de renglones
	{
		printf("\n",i);
		for(j=1;j<=m;j++) //numero de columnas
		{
			printf("  %d  ",j);
		
		}
	
	
	}
		getch();
	return 0;
}
