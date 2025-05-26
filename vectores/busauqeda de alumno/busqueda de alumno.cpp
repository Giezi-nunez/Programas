#include<stdio.h>
#include<conio.h>
int alum,i,mate[31],progra[31],mecanica[31],promedio[31],N_C[31],bus,j,NC;
main ()
{
	printf("INSERTA EL NUMERO DE ALUMNOS: ");
	scanf("%d",&alum);
	printf("\n\n");
	for(i=1;i<=alum;i++)
	{
	 rpintf("NUMERO DE CONTROL: ",i);
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
	     	
	printf("\n\t%d\t%d\t%d\t%d\t%d",N_C[i],mate[i],progra[i],mecanica[i],promedio[i]);
       }
       
       printf("\n\n CUANTOS ALUMNOS BUSCARAS:    ");
       scanf("%d",&bus);
       
       for(j=1;j<=bus;j++)
        {
       printf("\n QUE NUMERO DE CONTROL BUSCAS:  ");
       	scanf("%d",&NC);
       		for(i=1;i<=alum;i++)
	{
		if(NC==N_C[i])
		{
			printf(" EL PROMEDIO ES %d ",promedio[i]);
		}
       	}
         }
	   
	return 0;
}
