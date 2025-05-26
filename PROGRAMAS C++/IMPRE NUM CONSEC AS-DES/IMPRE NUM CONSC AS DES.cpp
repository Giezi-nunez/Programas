#include<stdio.h>
#include<conio.h>

int i,j,m,n,o,r,a,b=1;

main()
{
	printf("\n INTRODUCE EL NUMERO DE RENGLONES ");
	scanf("%d",&n);
	printf("\n INTRODUCE EL NUMERO DE COLUMNAS ");
	scanf("%d",&m);
    printf("\n INTRODUCE EL NUMERO DEL LIMITE DEL CONTE0 ");
    scanf("%d",&o);
    printf("\n");
    a=n;
	
	for(i=1;i<=n;i++)
	{
	
		for(j=1;j<=m;j++)
		{
			r=i%2;
			if(r==1)       //EL RENGLON ES IMPAR
			{
				if(b<=o)
				{
				printf("  %d  ",b);
			
			    }
				if(b>o)
				{
				printf("  0  "); //COLOCAR CEROS EN LOS ESPACIOS SOBRANTES
				}
			b++;
	      	}
			if(r==0)         //EL RENGLON ES PAR
			{
				if(a>=0)      
				{
				printf("  %d  ",a);
				}
               if(a<0)
               {
               	printf("  0  "); //COLOCAR CEROS EN LOS ESPACIOS SOBRANTES
               }
            a--;
			}
		}
		printf("\n");
    }
    getch();
    return 0;
}
