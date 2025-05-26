#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n;
main()
{
	system("Color 2F");
	printf("\n TOTAL DE ALUMNOS: ");
	scanf("%d",&n);
	int SEX[n+1][3],i,j,nc,s;
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=2;j++)
		{
			if(j==1)
			{
				printf("\n NUMERO DE CONTROL: ");
				scanf("%d",&nc);
				SEX[i][j]=nc;
			}
			else
			{
				printf("\n INTRODUCE EL SEXO: ");
				printf("\n MUJERES - 1 // HOMBRES - 2:  ");
				scanf("%d",&s);
				SEX[i][j]=s;
			}
		}
	}
	int IN[n+1][3],in;
	printf("\n Indice ");
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=2;j++)
		{
		    if(j==1)
			{
				IN[i][j]=SEX[i][j];
			}
			else
			{
				printf("\n Introduce el Indice - ");
				scanf("%d",&in);
				IN[i][j]=in;
			}
	    }
    }
    int PROM[n+1],prom;
    printf("\n Promedio ");
	for(i=1;i<=n;i++)
    {
    	printf("\n INTRODUCE EL PROMEDIO - ");
		scanf("%d",&prom);
		PROM[i]=prom;
	}
	printf("\n\n \tA \t\tB \t\tC");
	printf("\n \tN.C\tSEXO\tN.C\tINDICE\tPROMEDIO");
	for(i=1;i<=n;i++)
	{
		printf("\n\t%d\t%d\t%d\t%d\t%d",SEX[i][1],SEX[i][2],IN[i][1],IN[i][2],PROM[i]);
		
    }
    int cont=1,cont2=1,M[100][3],H[100][3],renglon;
    for(i=1;i<=n;i++)
    {
    	if(SEX[i][2]==1)
    	{
    		M[cont][1]=SEX[i][1];
    		renglon=IN[i][2];
    		M[cont][2]=PROM[renglon];
    		cont++;
		}
		else
		{
			H[cont2][1]=SEX[i][1];
			renglon=IN[i][2];
    		H[cont2][2]=PROM[renglon];
    		cont2++;
		}
	}
	printf("\n\n MUJERES");
	printf("\n N.C PROMEDIO");
	for(i=1;i<=cont-1;i++)
	{
		printf("\n");
		for(j=1;j<=2;j++)
		{
			printf("  %d ",M[i][j]);
		}
	}
	printf("\n\n HOMBRES");
	printf("\n N.C PROMEDIO");
	for(i=1;i<=cont2-1;i++)
	{
		printf("\n");
		for(j=1;j<=2;j++)
		{
			printf("  %d ",H[i][j]);
		}
	}
	getch ();
	return 0;
}
