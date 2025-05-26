#include<stdio.h>
#include<conio.h>
int Alumnos,i,aprobaron=0,reprobaron=0;
float Calificacion,acumpp=0,acumgr=0,prompp,promgr;

main(){
	printf("\n El total de alumnos es = "  );
	scanf("%d",&Alumnos);
	for(i=1;i<=Alumnos;i++){
		printf("\n La calificacion 1 del alumno %d  = ",i);
		scanf("\n%f",&Calificacion);
		printf("\n la calificacion 2 del alumno %d  = ",i);
		scanf("\n%f",&Calificacion);
acumpp=acumpp+Calificacion;
prompp=acumpp/2;
printf(" El promedio de la persona es = %.2f ",prompp);	
acumgr=acumgr+prompp;
if(prompp>=7){
	aprobaron=aprobaron+1;
	}
	else{
		reprobaron=reprobaron+1;
	}
}
getch();
promgr=acumgr/Alumnos;
printf("\n El promedio grupal es = %.2f \n",promgr);
return 0;	
}
