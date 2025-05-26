#include<stdio.h>
#include<conio.h>

int n,i,cont_pos=0;

main()
{
	
	for(i=1;i<=10;i++)
	{
		printf("\n Introduce numero %d = ",i);
     	scanf("%d",&n);
		if(n>0)
		{
			cont_pos=cont_pos+1;
		}
	}
	printf("\n Son = %d  numeros positivos",cont_pos);
	return 0;
}
