#include<stdio.h>
#include<conio.h>
int cont=1,i,j,n=5;
main ()
{
	for (i=1;i<=5;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf(" %d ",cont);
			cont=cont+1;


    }
    n--;
    
	


    	if(j<=5)
    	{
    		printf( " 1 ");
			}


 	}
	getch ();
	return 0;

}
