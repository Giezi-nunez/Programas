#include<stdio.h>
#include<conio.h>
int i,j,n,c,apro,repro;
float nota,suma,prom_al,prom_gr,prom_gnral;
main()
{
	printf("\n La cantidad de alumnos es ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("\n  La calificacion del alumno %d",i);
		printf("\n Numero de notas: ");
		scanf("%d", &c);
	    	for(j=1;j<=c;j++)
	        	{
		        	printf("\n La nota %d  es: ",j);
			        scanf("%f", &nota);
			        
			        if (nota>100)			        
			          suma=suma+nota;
		        	prom_al=suma/c;
		        
		    printf("\n El promedio del alumno es igual a: %.2f ", prom_al);
		     if(prom_al>=70)
                {
			     printf("\n Aprobado el alumno %d \n",i);
			     apro=apro+1;
                }
	         if(prom_al<70)
		        {
			     printf("\n Reprobado el alumno %d ",i);
			     repro=repro+1;
                }
	             prom_gr=prom_gr+prom_al;
	        
               }
	         
		suma=0;
	}
	prom_gnral=prom_gr/n;
	printf("\n \n El promedio general del grupo es de: %.2f \n",prom_gnral);
	printf("\n El numero total de aprobados del grupo fue de: %d \n",apro);
	printf("\n El numero total de reprobados del grupo fue de: %d \n",repro);
getch ();
return 0;
}
