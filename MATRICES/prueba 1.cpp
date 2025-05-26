#include<stdio.h>
#include<conio.h>

int i,j,reng,colum,a[20][20];

main()
{
	printf("\n inserta las dimenciones de la matriz");
	scanf("%d",&reng);
//	printf("\n inserta las dimenciones de la matriz");
//	scanf("%d",&colum);
   for(i=1;i<=reng;i++)
   {
   	for(j=1;j<=reng;j++)
   	{
   		a[i][j]=i;
   	}
   }
 for(i=1;i<=reng;i++)
   {
   	 	printf(" \n");
   	for(j=1;j<=reng;j++)
   	{
   	printf(" %d ",a[i][j]);
   	}
   }
}
