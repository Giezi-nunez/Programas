#include<stdio.h>
#include<conio.h>

int i,j,dim,a[11][11];

//procedimieno para llenar uyna matriz


main()
{
	
	printf("\n INSERTA LA DIMENCION DE LA MATRIZ CUADRADA: ");
	scanf("%d",&dim);
	

	
	for(i=1;i<=dim;i++)
	{
		for(j=1;j<=dim;j++)
		{
			printf("\n INSERTA EL ELEMENTO RENGLON %d  COLUMNA %d : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//impresion de la matriz
	printf("\n");
		printf(" MATRIZ A");
		for(i=1;i<=dim;i++)
	{
		printf("\n");
		for(j=1;j<=dim;j++)
		{
			printf(" %d ",a[i][j]);
			
		}
	}
	
	printf("\n\n\n");
	printf(" MATRIZ A");
	getch;
	return 0;
	
	
}
