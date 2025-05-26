/*ERICK JAIMES PEGUEROS
P6-25-10-22 STRUCT Y VECTORES */

//Pide vectores de 3 jugadores con pide datos e imprimir

#include<iostream>
#include<locale.h>

using namespace std;

struct Domicilio {
	string calle;
	int numero;
}domicilio;

struct Generales{
	char nombre[20];
	int edad;
	float estatura;
	float telefono;

	Domicilio domicilio;
}generales;

struct Trabajo{
	char TipodeContrato, rango;
	int sueldo;
}trabajo;

struct Jugador{
	Generales generales;
	Trabajo trabajo;
};

//PROTOTIPOS
void leer(struct Jugador j[2]);
void imprimir(struct Jugador j[2]);

int main (){
	setlocale(LC_ALL,"Spanish");
	struct Jugador j[2];
	leer(j);
	imprimir(j);
}

void leer (struct Jugador j[]){
	for (int i=0; i<2; i++){
		int aux1=1;
		cout<<"\t-----DAME LOS DATOS DEL JUGADOR-----"<<endl;
		cout<<"Calle del Jugador: "<<endl;
		cin>>j[i].generales.domicilio.calle;
		cout<<"Numero de casa del Jugador: "<<endl;
		cin>>j[i].generales.domicilio.numero;
		cout<<"Nombre del Jugador: "<<endl;
		cin>>j[i].generales.nombre;
		cout<<"Edad del Jugador: "<<endl;
		cin>>j[i].generales.edad;
		cout<<"Estatura del Jugador: "<<endl;
		cin>>j[i].generales.estatura;
		cout<<"Telefono del Jugador: "<<endl;
		cin>>j[i].generales.telefono;
		cout<<"Tipo de Contrato del Jugador: "<<endl;
		cin>>j[i].trabajo.TipodeContrato;
		cout<<"Rango del Jugador: "<<endl;
		cin>>j[i].trabajo.rango;
		cout<<"Sueldo del Jugador: "<<endl;
		cin>>j[i].trabajo.sueldo;
	}
} 

void imprimir (struct Jugador j[]){
	for(int i=0; i<2; i++){
		cout<<"\t\n-----DATOS DEL JUGADOR-----"<<endl;
		cout<<"\t\nDOMICILIO:"<<endl;
		cout<<"\nCalle: "<<j[i].generales.domicilio.calle;
		cout<<"\nNumero: "<<j[i].generales.domicilio.numero<<endl;
		cout<<"\t\nGENERALES:"<<endl;
		cout<<"\nNombre: "<<j[i].generales.nombre;
		cout<<"\nEdad: "<<j[i].generales.edad;
		cout<<"\nEstatura: "<<j[i].generales.estatura;
		cout<<"\nTelefono: "<<j[i].generales.telefono<<endl;
		cout<<"\t\nTRABAJO:"<<endl;
		cout<<"\nTipo de Contrato: "<<j[i].trabajo.TipodeContrato;
		cout<<"\nRango: "<<j[i].trabajo.rango;
		cout<<"\nSueldo: "<<j[i].trabajo.sueldo<<endl;
	}
}
