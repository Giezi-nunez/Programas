#include<stdio.h>
#include<conio.h>

int i,j,alum,acum,a[11][11],acumapro=0,acumrepro=0,acum100s=0,cons,no[10],c[11][11],k,cuenta,nctrl,l,m,flag=0;;

//procedimieno para llenar uyna matriz


main()
{
	
	printf("\n INSERTA EL NUMERO DE ALUMNOS: ");
	scanf("%d",&alum);
	int a[alum+2][6];

	for(i=1;i<=alum;i++)
	{
		 acum=0;
		printf("\n INSERTA EL NUMERO DE CONTROL %d : ",i);
		 scanf("%d",&a[i][1]);
 		for (j=2;j<=4;j++)
 		{
   	      printf("\n CALIFICACION %d EL ALUMNO %d :   ",j-1,i);
		 scanf("%d",&a[i][j]);
		 
		 	if(a[i][j]==100)
		    {
		 	acum100s=acum100s+1;
            }
          acum=acum+a[i][j];
          }
		  a[i][5]=acum/3;  //promedio
		 if(a[i][5]>=70)
		 {
		  acumapro=acumapro+1;
		 }
		 if(a[i][5]<70)
		 {
		 acumrepro=acumrepro+1;
		 }	
	 
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
	printf("\n\n CUANTOS 100 SE OBTUVIERON : %d ",acum100s);
	//consu8ltas

	
	printf("\n CUANTAS CONSULTAS : ");
	scanf("%d",&cons);
	int n[cons+1],c[cons+1][2];
	
	cuenta=1;
	
	for(k=1;k<=cons;k++)
	{
		printf("\n QUE NUMERO DE CONTROL  BUSCAS");
		scanf("%d",&nctrl);
		
		//barrido de busqueda
		for(i=1;i<=alum;i++)
		{
			if(nctrl==a[i][1])
			{
				c[cuenta][1]=a[i][1];
				c[cuenta][2]=a[i][5];
				cuenta++;
				flag=1;   // si se encontro
			}
		}
		if (flag==0)
		{
			printf("\n EL NUMERO DE CONTROL %d NO SE ENCONTRO",nctrl);
		k--;
		}
		flag=0;
	}
	
	printf("\n\tMATRIZ CONSULTA");
    	for(l=1;l<=cons;l++)
	{
		printf("\n");
		for(m=1;m<=2;m++)
		{
     	printf("\t%d ",c[l][m]);
		}
	}
	getch;
	return 0;
	
	
}
