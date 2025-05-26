/*JAIMES PEGUEROS ERICK
P5-21-10-22-ESTRUCTURAS ANIDADAS*/

#include<iostream>
#include<locale.h>

using namespace std;

struct Fecha{
	int dia, mes, anio;
};

struct Persona{
	char nombre[20];
	int edad,peso;
	
	Fecha fecha;
}persona = {"Erick",19,82,30,03,2003};

struct Empleado{
	Persona persona;
	int salario;	
}trabajador = {"Erick",19,82,30,03,2003,15000};

int main(){
	setlocale(LC_ALL, "Spanish");
	cout<<"\t-----PERSONA-----"<<endl;
	cout<<"Persona nombre: "<<persona.nombre;
	cout<<"\nEdad: "<<persona.edad;
	cout<<"\nPeso: "<<persona.peso;
	cout<<"\nDia de nacimiento: "<<persona.fecha.dia;
	cout<<"\nMes de nacimiento: "<<persona.fecha.mes;
	cout<<"\nAño de nacimiento: "<<persona.fecha.anio;
	cout<<endl;
	cout<<"\n\t-----TRABAJADOR-----";
	cout<<"\nTrabajador: "<<trabajador.persona.nombre;
	cout<<"\nEdad: "<<trabajador.persona.edad;
	cout<<"\nPeso: "<<trabajador.persona.peso;
	cout<<"\nDia de nacimiento: "<<trabajador.persona.fecha.dia;
	cout<<"\nMes de nacimiento: "<<trabajador.persona.fecha.mes;
	cout<<"\nAño de nacimiento: "<<trabajador.persona.fecha.anio;
	cout<<"\nSalario: "<<trabajador.salario;
	
	return 0;
}
