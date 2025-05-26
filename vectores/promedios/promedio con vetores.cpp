#include<stdio.h>
#include<conio.h>
int alum,i,mate[31],progra[31],mecanica[31],promedio[31];
main ()
{
	printf("INSERTA EL NUMERO DE ALUMNOS: ");
	scanf("%d",&alum);
	printf("\n\n");
	for(i=1;i<=alum;i++)
	{
		
		printf("CALIFICACION DE MATEMATICAS: ",i);
		scanf("%d",&mate[i]);
		printf("CALIFICACION DE PROGRAMACION: ",i);
		scanf("%d",&progra[i]);
		printf("CALIFICACION DE FISICA: ",i);
		scanf("%d",&mecanica[i]);
	  promedio[i]=(mate[i]+progra[i]+mecanica[i])/3;
	  printf("\n\n");
	}
	printf(" Alumno  METEMATICAS  PROGRAMACION  FISICA   PROMEDIO ");
    printf("\n");
	   for(i=1;i<=alum;i++)
	     {
	     	
	printf("\n %d         %d           %d         %d        %d",i,mate[i],progra[i],mecanica[i],promedio[i]);
       }
	
}
