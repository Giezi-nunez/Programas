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
			
			//guardar los numeros con diferentes indices
			b[j][i]=a[i][j]; 
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
		printf("\n\n");
	printf(" MATRIZ B ");
		for(i=1;i<=colm;i++)   //el renglon cambia
	{
		printf("\n");
		for(j=1;j<=reng;j++)   //las columnas cambian
		{
			printf(" %d ",b[i][j]);	 //como los indices cambiaron se coloca de la misma manera
		}
	}
	
	
	
	
	
	getch;
	return 0;
	
	
}
