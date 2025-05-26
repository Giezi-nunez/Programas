#include<stdio.h>
#include<conio.h>

int Cantidad;
float Precio,Precio_bruto,Descuento,Precio_Descuento,IVA,Costo;

main()
{
	printf("\n Introduce el Costo del articulo   = $");
	scanf("%f",&Costo);
	printf("\n Introduce la cantidad de articulos = ");
	scanf("%d",&Cantidad);
	
    Precio=Costo*Cantidad;
	getch();

	IVA=Precio*.15;
	
	Precio_bruto=Precio+IVA;
	
	if (Precio_bruto<=100)
	{
		printf("\n El Precio con IVA es = $%.2f",Precio_bruto);
	}
	if (Precio_bruto>100)
	{
		printf("\n Aplica descuento: Precio + IVA = $%.2f \n",Precio_bruto);
		Descuento=Precio_bruto*.05;
		Precio_Descuento=Precio_bruto-Descuento;
		printf("\n El Precio con Descuento es $%.2f",Precio_Descuento);
	}
    return 0;
}
