#include<stdio.h>
#include<conio.h>
int cant,i,digi[30],pos[30],neg[30],a,bus,cuenta,num,k,j;
main ()
{
      //INSERTANDO LA CANTIDAD DE NUMEROS A GUARDAR
	
	printf("\t\tINSERTA LA CANTIDAD DE NUMEROS A INTRODUCIR: ");
	scanf("%d",&cant);
	printf("\n\n");
	
	//INICIANDO VECTORES
		int digi[cant+1],pos[cant+1],neg[cant+1],posi=1,nega=1;
			//limpieza de basura
		for(a=1;a<=cant;a++)
		{
			digi[a]=0;
			pos[a]=0;
			neg[a]=0;
			
		}
		//NUMEROS ALOS CUALES SE LES ASGNARA  
		//AL VECTOR DE ACUERDO A SU POSICIION
		
	for(i=1;i<=cant;i++)
	{
		
	printf("INTRODUCE EL NUMERO ");
	scanf("%d",&digi[i]);
	 if(digi[i]>0)           //DESICION  SI ES POSITIVO
	 { 
		pos[posi]=digi[i];
		posi++;
	 }
	 if(digi[i]<0)           //DESICION  SI ES NEGATIVO
	 {
	    neg[nega]=digi[i];
		nega++;
	 }
	}
	
	//IMPRESION DE LOS VECTORES POSICION NEGATIVOS Y POSITIVOS
		
	printf("\n\tNUMEROS\t\tPOSITIVOS\t\tNEGATIVOS");
    printf("\n");
	   for(i=1;i<=cant;i++)
	    {
       	printf("\n\t\t%d\t\t%d\t\t%d",digi[i],pos[i],neg[i]);
        }
       
       //NUMERO DE BUSQUEDAS SOLICITADAS
       
	    printf("\n\n CUANTOS NUMEROS BUSCAS :    ");
       scanf("%d",&bus);
       
       //VECTORES DE DE CONSULTA E INDICE
	    //LIMPIEZA DE LOS VECTORES
       int consultas[bus+1],indice[bus+1];
       	for(a=1;a<=cant;a++)
		{
			consultas[a]=0;
			indice[a]=0;
		}
		//CONTADOR INDEPENDIENTE
       cuenta=1; 
       
        for(j=1;j<=bus;j++)
        {
         printf("\n QUE NUMERO BUSCAS:  ");
       	 scanf("%d",&num);
       	 
       	 //BARRIDO DE LA BUSQUEDA
       		for(i=1;i<=cant;i++)//
         	{
			 if(num==digi[i])
			 	{
		 		consultas[cuenta]=digi[i];
				 indice[cuenta]=i;
				    cuenta++;
				  
				}                        
       		}
       	}		 	
         //IMPRESION DE VECTORES RESULTANTES
          printf("\n\tCONSULTA\tINDICE");
         for(k=1;k<cuenta;k++)
         {
         	printf("\n\t\t%d\t\t%d",consultas[k],indice[k]);
         }
	   
    
	return 0;
}
