/*JAIMES PEGUEROS ERICK
P4-20-10-22-Estructura Jugador */

#include <iostream>
#include <locale.h>

using namespace std;

struct Jugador {
	string nombre;
	int edad;
	float estatura;
	int telefono;
	string calle;
	int numero;
	string tipoContrato;
	string rango;
	float sueldo;
};
//Prototipo
void leer(struct Jugador j[3]);
void imprimir(struct Jugador j[3]);

int main (){
	setlocale(LC_ALL, "Spanish");
	struct Jugador j[3];
	leer(j);
	imprimir(j);
}

void leer (struct Jugador j[]){
	for(int i=0;i<=2;i++){
	/*int aux=1;
	cout<<"--------------Introduce lo del jugador: "<<aux<<"--------------"<<endl;
	aux++; acabarlo mas tarde */
//	fflush(stdin); //Vaciar el buffer y permitir digitar los valores
	cout<<"¿Cuál es su nombre? "<<endl;
	cin>>j[i].nombre;
	cout<<"¿Cuál es la edad? "<<endl;
	cin>>j[i].edad;
	cout<<"¿Cuál es su estatura? "<<endl;
	cin>>j[i].estatura;
	cout<<"¿Cuál es su telefono? "<<endl;
	cin>>j[i].telefono;
	cout<<"¿Cuál es su calle? "<<endl;
	cin>>j[i].calle;
	cout<<"¿Cuál es el numero? "<<endl;
	cin>>j[i].numero;
	cout<<"¿Cuál es su tipo de contrato? "<<endl;
	cin>>j[i].tipoContrato;
	cout<<"¿Cuál es el rango? "<<endl;
	cin>>j[i].rango;
	cout<<"¿Cuál es su sueldo?"<<endl;
	cin>>j[i].sueldo;
	cout<<"---------------------------------------"<<endl;
	}	
}

void imprimir (struct Jugador j[]){
	for (int i=0;i<=2;i++){
	cout<<"Nombre: "<<j[i].nombre<<endl;
	cout<<"Edad: "<<j[i].edad<<endl;
	cout<<"Estatura: "<<j[i].estatura<<endl;
	cout<<"Telefono: "<<j[i].telefono<<endl;
	cout<<"Calle: "<<j[i].calle<<endl;
	cout<<"Numero: "<<j[i].numero<<endl;
	cout<<"Tipo de Contrato: "<<j[i].tipoContrato<<endl;
	cout<<"Rango: "<<j[i].rango<<endl;
	cout<<"Sueldo: "<<j[i].sueldo<<endl;
	cout<<"---------------------------------------"<<endl;
	}
}

