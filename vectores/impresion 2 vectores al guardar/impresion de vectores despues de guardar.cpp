#include<stdio.h>
#include<conio.h>
int alum,i,mate[31],progra[31],mecanica[31],promedio[31],N_C[31],bus,j,NC,m,k,cuenta;
main ()
{
	printf("INSERTA EL NUMERO DE ALUMNOS: ");
	scanf("%d",&alum);
	printf("\n\n");
	for(i=1;i<=alum;i++)
	{
	 printf("NUMERO DE CONTROL: ",i);
		scanf("%d",&N_C[i]);
		printf("CALIFICACION DE MATEMATICAS: ",i);
		scanf("%d",&mate[i]);
		printf("CALIFICACION DE PROGRAMACION: ",i);
		scanf("%d",&progra[i]);
		printf("CALIFICACION DE FISICA: ",i);
		scanf("%d",&mecanica[i]);
	  promedio[i]=(mate[i]+progra[i]+mecanica[i])/3;
	  printf("\n\n");
	}
	
	
	printf("\tAlumno\tMATEMATICAS\tPROGRAMACION\tFISICA\tPROMEDIO");
    printf("\n");
	   for(i=1;i<=alum;i++)
	     {
	     	
	printf("\n\t  %d\t%d\t%d\t%d\t%d",N_C[i],mate[i],progra[i],mecanica[i],promedio[i]);
       }
       
       printf("\n\n CUANTOS ALUMNOS BUSCARAS:    ");
       scanf("%d",&bus);
       int bus_nc[bus+1],bus_prom[bus+1];
       cuenta=1;
       for(j=1;j<=bus;j++)
        {
         printf("\n QUE NUMERO DE CONTROL BUSCAS:  ");
       	 scanf("%d",&NC);
       		for(i=1;i<=alum;i++)
         	{
			 if(NC==N_C[i])
			 	{
		 		bus_nc[cuenta]=N_C[i];
				  bus_prom[cuenta]=promedio[i];
				    cuenta++;
				}
       		}
         }
         
         printf("\n\tNº CONTROL\tPROMEDIO");
         for(k=1;k<cuenta;k++)
         {
         	printf("\n\t\t%d\t\t%d",bus_nc[k],bus_prom[k]);
         }
	   
	return 0;
}
