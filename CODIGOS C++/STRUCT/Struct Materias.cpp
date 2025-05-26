/*ERICK JAIMES PEGUEROS
P8-27-10-22- Struct Materias*/

#include<iostream>
#include<locale.h>

using namespace std;

struct Direccion {
	string calle;
	int numero;
	string fraccionamiento;
	string cuidad;
}direccion;

struct Materias{
	float m1,m2,m3;
	int promedio;
}materias;

struct Estudiante{
	string nombre;
	int peso, edad;
	Direccion direccion;
	Materias materias;
}e[3];

void leer (struct Estudiante e[3]);
void imprimir (struct Estudiante  e[3]);

int main(){
	setlocale(LC_ALL,"Spanish");
	struct Estudiante e[3];
	leer(e);
	imprimir(e);
}

void leer (struct Estudiante e[3]){
	int aux=1;
	for (int i=0;i<3;i++){
		cout<<"\t-----DAME LOS DATOS DEL JUGADOR "<<aux<<"-----"<<endl;
		aux++;
		cout<<"Dame el nombre: "<<endl;
		cin>>e[i].nombre;
		cout<<"Dame el peso: "<<endl;
		cin>>e[i].peso;
		cout<<"Dame la edad: "<<endl;
		cin>>e[i].edad;
		cout<<"Dame la calle: "<<endl;
		cin>>e[i].direccion.calle;
		cout<<"Dame el numero: "<<endl;
		cin>>e[i].direccion.numero;
		cout<<"Dame el fraccionamiento: "<<endl;
		cin>>e[i].direccion.fraccionamiento;
		cout<<"Dame la ciudad: "<<endl;
		cin>>e[i].direccion.cuidad;
		cout<<"Dame la Materia 1: "<<endl;
		cin>>e[i].materias.m1;
		cout<<"Dame la Materia 2: "<<endl;
		cin>>e[i].materias.m2;
		cout<<"Dame la Materia 3: "<<endl;
		cin>>e[i].materias.m3;
		cout<<"-----------------------------------------------------------------------"<<endl;
		
	}
}

void imprimir (struct Estudiante e[3]){
	int aux=1;
	int promedio_alumno;
	for (int i=0; i<3; i++){
		cout<<"\t-----Estudiante "<<aux<<"-----"<<endl;
		aux++;
		cout<<"Nombre: "<<e[i].nombre<<endl;
		cout<<"Peso: "<<e[i].peso<<endl;
		cout<<"Edad: "<<e[i].edad<<endl;
		cout<<"Calle: "<<e[i].direccion.calle<<endl;
		cout<<"Numero: "<<e[i].direccion.numero<<endl;
		cout<<"Fraccionamiento: "<<e[i].direccion.fraccionamiento<<endl;
		cout<<"Ciudad: "<<e[i].direccion.cuidad<<endl;
		cout<<"Materia 1: "<<e[i].materias.m1<<endl;
		cout<<"Materia 2: "<<e[i].materias.m2<<endl;
		cout<<"Materia 3: "<<e[i].materias.m3<<endl;
		promedio_alumno = (e[i].materias.m1+e[i].materias.m2+e[i].materias.m3)/3; //formula del promedio
		cout<<"Promedio: "<<promedio_alumno<<endl;
		cout<<"-----------------------------------------------------------------------"<<endl;
	}
}


