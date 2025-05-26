#include<stdio.h>
#include<conio.h>
int i,j,cont=1,residuo,k,num,cont2=1;
main ()
{

  printf("dame el numero:");
	scanf("%d",&num);
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=1;j<=5;j++)
		{
			residuo=i%2;
			if(residuo==0)
			{
				printf(" %d ",num);
				num--;

			}
			else
			{

				printf(" %d ",cont);
				
				cont=cont+1;


			}


		}
	}





	getch ();
	return 0;
}
