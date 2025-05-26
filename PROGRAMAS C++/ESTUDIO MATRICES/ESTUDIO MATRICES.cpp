#include<stdio.h>
#include<conio.h>

int i,j,k,m,n,o;

main ()
{
	printf("INSERTA EL NBUUMERO DE RENGLONES ");
	scanf("%d",&n);
	m=n;
	printf("INSERTA NUMERO DE COLUMNAS ");
	scanf("%d",&m);
	for(i=1;i<=n;i++) //indica los renglones
	{
		printf("\n");
		for(j=1;j<=m;j++)
		{
			printf("  %d  ",j);
		
		}
			m--;	///la variable decrementa	
	}
	getch();
	return 0;
}
