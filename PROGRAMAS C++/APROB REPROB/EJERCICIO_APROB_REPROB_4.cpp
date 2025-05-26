#include<stdio.h>
#include<conio.h>

int Alumnos,i,aprobaron,reprobaron;
float calificacion1,calificacion2,calificacion,promediopsnl,promgnrl,promgrupal;

main()
{
	aprobaron=0;
	reprobaron=0;
	promgnrl=0;
	
	printf("\n El numero de alumnos es = ");
	scanf("%d",&Alumnos);
	
	for(i=1;i<=Alumnos;i++)
	{
		printf("\n La primera calificacion del alumno es =  ");
		scanf("%f",&calificacion1);
		
		printf("\n La segunda calificacion del alumno es =  ");
		scanf("%f",&calificacion2);
		
	calificacion=calificacion1+calificacion2;
	promediopsnl=calificacion/2;
	printf("\n El Promedio del alumno es = %.2f \n ",promediopsnl);
	promgnrl=promgnrl+promediopsnl;

    if(promediopsnl>=7)
	{
		printf("\n Aprobo \n ");
		aprobaron=aprobaron+1;
	}
	else
	{
		printf("\n Reprobo \n ");
		reprobaron=reprobaron+1;
	}

	getch();	 
	}
	promgrupal=promgnrl/Alumnos;
	printf("\n Aprobaron %d \n",aprobaron);
	printf("\n Reprobaron %d \n",reprobaron);
	printf("\n El promedio grupal fue %f",promgrupal);
	return 0;
} 

