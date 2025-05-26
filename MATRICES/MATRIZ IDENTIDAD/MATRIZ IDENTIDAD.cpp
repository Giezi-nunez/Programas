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
          if(i==j)
          {
          	a[i][j]=1;
          }
          
          else
          {
          	a[i][j]=0;
          }
		}
	}
	//impresion de la matriz
	printf("\n");
		printf(" MATRIZ A ");
		//IMPRESION POR RENGLON
		for(i=1;i<=dim;i++)                          
	{
		printf("\n");
		//IMPRESION POR COLUMNA
		for(j=1;j<=dim;j++)
		{
			printf(" %d ",a[i][j]);	
		}
		
	}
	
	
	getch;
	return 0;
	
	
}
