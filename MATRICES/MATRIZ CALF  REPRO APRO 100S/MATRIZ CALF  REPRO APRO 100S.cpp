#include<stdio.h>
#include<conio.h>

int i,j,alum,acum,a[11][11],acumapro=0,acumrepro=0,acum100s=0;

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
   	      printf("\n CALIFICACION %d EL AMULMNO %d :   ",j-1,i);
		 scanf("%d",&a[i][j]);
		 
		 if(a[i][j]==100)
		 {
		 	acum100s=acum100s+1;
		 }
		 acum=acum+a[i][j]; 
		}
		 a[i][5]=acum/3;
		 if(a[i][5]>=70)
		 {
		 	acumapro=acumapro+1;
		 }
		 else
		 {
		 acumrepro=acumrepro+1;
		 }	
		 
		 acum=acum+a[i][j]; 
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
		printf("\nN° CONTROL\tC1\tC2\tC3\tPROMEDIO");

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
	printf("\n\n CUANTOS APROBARON : %d ",acumapro);
	printf("\n\n CUANTOS REPROBARON : %d ",acumrepro);
	printf("\n\n CUANTOS OBTUVIERON 100 : %d ",acum100s);
	

	getch;
	return 0;
	
	
}
