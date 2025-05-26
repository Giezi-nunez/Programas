#include<stdio.h>
#include<conio.h>

int i,j,dim,a[11][11],b[11][11],c[11][11];

//procedimieno para llenar uyna matriz


main()
{
	
	printf("\n INSERTA LA DIMENCION DE LA MATRIZ CUADRADA: ");
	scanf("%d",&dim);
	

	
	for(i=1;i<=dim;i++)
	{
		for(j=1;j<=dim;j++)
		{
			printf("\n INSERTA EL ELEMENTO RENGLON %d  COLUMNA %d :  DEL VECTOR A = ",i,j);
			scanf("%d",&a[i][j]);
			
				printf("\n INSERTA EL ELEMENTO RENGLON %d  COLUMNA %d : DEL VECTOR B = ",i,j);
			scanf("%d",&b[i][j]);
			
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//impresion de la matriz
	printf("\n");
		printf(" MATRIZ A MATRIZ B MATRIZ C  ");
		for(i=1;i<=dim;i++)
	{
		printf("\n");
		for(j=1;j<=dim;j++)
		{
			printf(" %d ",a[i][j]);	
		}
		printf("   ");
		for(j=1;j<=dim;j++)
		{
			printf(" %d ",b[i][j]);
			
		}
		printf("   ");
		
			for(j=1;j<=dim;j++)
		{
			printf(" %d ",c[i][j]);
			
		}
	}
	
	
	getch;
	return 0;
	
	
}
