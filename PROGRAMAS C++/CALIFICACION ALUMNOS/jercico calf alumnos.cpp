#include<stdio.h>
#include<conio.h>
int Alumnos,i;
float Calificacion,acum=0,prom;

main(){
	printf("\n El total de alumnos es = "  );
	scanf("%d",&Alumnos);
	for(i=1;i<=Alumnos;i++){
		printf("\n La calificacion alumno %d  = ",i);
		scanf("\n%f",&Calificacion);
acum=acum+Calificacion;	
getch();
}
prom=acum/Alumnos;
printf("\n El promedio es = %.2f \n",prom);
return 0;	
}
