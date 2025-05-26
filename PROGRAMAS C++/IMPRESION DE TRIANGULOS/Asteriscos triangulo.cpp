#include<stdio.h>
#include<conio.h>
int a,i,b,c=1,x=1,v=1;
main()
{
	printf("Introduce un numero ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(b=1;b<=c;b++)
		{
			printf(" * ");
		}
		printf("\n");
		c++;
	}
	
	printf("\n");
	c=1;
	
	for(i=1;i<=a;i++)
	{
		for(b=1;b<=c;b++)
		{
			if(v<=a)
			{
				printf(" %d ",x);
				x++;
				v++;
			}
			
		}
		printf("\n");
		c++;
	}
getch();
return 0;
}
