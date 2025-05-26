/*JAIMES PEGUEROS ERICK
P3-20-10-22 ESTRUCTURA CODIGO PROFESORA*/

#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

struct Persona {
	int tipoEmpleado;
	int edad;
};

//Prototipo
void Imprimir(struct Persona p);

int main (){
	struct Persona p;
	
	p.tipoEmpleado=1;
	p.edad=28;
	Imprimir(p);
	return 0;
}

void Imprimir (struct Persona p){
	cout<<"Tipo de empleado: "<<p.tipoEmpleado<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}
