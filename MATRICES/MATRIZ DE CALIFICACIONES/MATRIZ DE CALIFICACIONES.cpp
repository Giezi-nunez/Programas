#include<stdio.h>
#include<conio.h>

int i,j,alum,acum,a[11][11],b[11][11],c[11][11];

//procedimieno para llenar uyna matriz


main()
{
	
	printf("\n INSERTA EL NUMERO DE ALUMNOS: ");
	scanf("%d",&alum);
	int A[alum+2][6];

	for(i=1;i<=alum;i++)
	{
		 acum=0;
		printf("\n INSERTA EL NUMERO DE CONTROL %d : ",i);
		 scanf("%d",&a[i][1]);
 		for (j=2;j<=4;j++)
 		{
   	      printf("\n CALIFICACION %d EL AMULMNO %d :   ",j,i);
		 scanf("%d",&a[i][j]);
		 acum=acum+a[i][j]; 
		}
		 a[i][5]=acum/3;
	}

	 for(i=2;i<=5;i++)
	{
			acum=0;
			for(j=1;j<=alum;j++)
		{
			acum=acum+a[j][i]; 
		}
		a[alum+1][i]=acum/alum;
	}
	//impresion de la matriz
	printf("\n");
		printf("\nN� CONTROL\tC1\tC2\tC3\tPROMEDIO");

		for(i=1;i<=alum+1;i++)
	{
		printf("\n");
		for(j=1;j<=5;j++)
		{
			if(a[i][j]==0)
			{
				printf("\tPM ");
			}
			else
			{
				printf("\t%d ",a[i][j]);
			}

		}
	}

	getch;
	return 0;
	
	
}
