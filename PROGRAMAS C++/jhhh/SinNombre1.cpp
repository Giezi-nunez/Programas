#include<stdio.h>
#include<conio.h>

int Precio;//ecio_bruto,Descuento,Precio_Descuento,IVA;
float Precio_bruto,Descuento,Precio_Descuento,IVA;

main()
{
	printf("\n Introduce el Precio del articulo = $");
	scanf("%d",&Precio);
	IVA=Precio*.15;
	
	Precio_bruto=Precio+IVA;
	
	if (Precio_bruto<=100)
	{
		printf("\n El Precio con IVA es = $%f",Precio_bruto);
	}
	if (Precio_bruto>100)
	{
		printf("\n Aplica descuento \n");
		Descuento=Precio_bruto*.05;
		Precio_Descuento=Precio_bruto-Descuento;
		printf("\n El Precio con Descuento es $%f",Precio_Descuento);
	}
    return 0;
}
