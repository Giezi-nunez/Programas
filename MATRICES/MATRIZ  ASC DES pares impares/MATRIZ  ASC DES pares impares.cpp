#include<stdio.h>
#include<conio.h>

int i,j,dim,r,asc=1,des,pares=0,q,p,impares=0,a[11][11],b[11][11],c[11][11];

//procedimieno para llenar uyna matriz


main()
{
	
	printf("\n INSERTA LA DIMENCION DE LA MATRIZ CUADRADA: ");
	scanf("%d",&dim);
	

	des=dim*dim;
	for(i=1;i<=dim;i++)
	{
		for(j=1;j<=dim;j++)
		{
			r=i%2;
          if(r==1)
          {
          	a[i][j]=asc;
          	q=asc%2;
          	if(q==1)
			{
				impares++;
          	}
          	if(q==0)
          	{
          		pares++;
          	}
          	asc++;
          }
          
         if(r==0)
          { 
          	a[i][j]=des;
          	p=des%2;
          	if(p==1)
          	{
          		impares++;
          	}
          	if(p==0)
          	{
          			pares++;
          	}
          	des--;
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
	
		printf("\n\n CUANTOS PARES : %d ",pares);
		printf("\n\n CUANTOS IMPARES : %d ",impares);
	getch;
	return 0;
	
	
}
