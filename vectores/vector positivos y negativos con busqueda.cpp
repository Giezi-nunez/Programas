#include<stdio.h>
#include<conio.h>
int cant,i,digi[30],pos[30],neg[30],a ;
main ()
{
	//limpieza de basura
	
	

//	for(a=1;a<=posi)
	
	printf("\t\tINSERTA LA CANTIDAD DE NUMEROS A INTRODUCIR: ");
	scanf("%d",&cant);
	printf("\n\n");
		int digi[cant+1],pos[cant+1],neg[cant+1],posi=1,nega=1;
			//limpieza de basura
		for(a=1;a<=cant;a++)
		{
			digi[a]=0;
			pos[a]=0;
			neg[a]=0;
			
		}
		
		
	for(i=1;i<=cant;i++)
	{
		
	printf("INTRODUCE EL NUMERO ");
	scanf("%d",&digi[i]);
	 if(digi[i]>0)
	 { 
		pos[posi]=digi[i];
		posi++;
	 }
	 if(digi[i]<0)
	 {
	    neg[nega]=digi[i];
		nega++;
	 }
	}
	
	
	printf("\n\tNUMEROS\tPOSITIVOS\tNEGATIVOS");
    printf("\n");
	   for(i=1;i<=cant;i++)
	    {
       	printf("\n\t\t%d\t\t%d\t\t%d",digi[i],pos[i],neg[i]);
        }
       
    
	return 0;
}
