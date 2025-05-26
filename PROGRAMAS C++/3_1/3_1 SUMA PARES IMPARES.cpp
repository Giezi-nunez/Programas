#include<stdio.h>
#include<conio.h>

int numero,i,Pares,Impares,Acum_pares=0,Acum_impares=0;

main()
{
	printf("\n Comienza La cuenta \n");
	for(i=1;i<=200;i++)
	{
		numero=i%2;
		if(numero==0)
		{
			printf("\n Es par %d \n",i);
			Acum_pares=Acum_pares+i;
		}
		if(numero==1)
		{
			printf("\n Es impar %d \n",i);
			Acum_impares=Acum_impares+i;
		}
    //getch();  SIRVE PARA QUE HASTA QUE SE LE DE ENTER CONTINUE EL PROSCESO
	}
	printf("\n La Suma de los pares es = %d \n",Acum_pares);
	printf("\n La Suma de los impares es = %d \n",Acum_impares);
	return 0;
}
