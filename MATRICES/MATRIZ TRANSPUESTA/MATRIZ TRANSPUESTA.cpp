#include<stdio.h>
#include<conio.h>

int i,j,reng,colm,a[11][11],b[11][11],c[11][11];

//procedimieno para llenar uyna matriz


main()
{
	printf("\n INSERTA LA CANTIDAD DE RENGLONES: ");
	scanf("%d",&reng);
	printf("\n INSERTA LA CANTIDAD DE COLUMNAS: ");
	scanf("%d",&colm);
	
		for(i=1;i<=reng;i++)
	{
		for(j=1;j<=colm;j++)
		{
		
			printf("\n INSERTA EL ELEMENTO RENGLON %d  COLUMNA %d :  DEL VECTOR A = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//impresion de la matriz
	printf("\n");
		printf(" MATRIZ A ");
		for(i=1;i<=reng;i++)
	{
		printf("\n");
		for(j=1;j<=colm;j++)
		{
			printf(" %d ",a[i][j]);	
		}
	}
		printf("\n");
	printf(" MATRIZ B ");
		for(i=1;i<=colm;i++)
	{
		printf("\n");
		for(j=1;j<=reng;j++)
		{
			printf(" %d ",a[j][i]);	
		}
	}
	
	
	
	getch;
	return 0;
	
	
}
