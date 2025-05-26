#include<stdio.h>
#include<conio.h>

int i,j,n=10;

main()

{
	
	for(i=1;i<=10;i++)
	{
		printf("\n",i);
		for(j=1;j<=n;j++)
		{
			printf("  %d  ",j);
		
		}
		n--;
	
	}
		getch();
	return 0;
}
