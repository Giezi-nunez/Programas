#include <iostream>
#include <conio.h>
#include <stdlib.h> 
using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;
};

int count;
void agregarPila(Nodo *&pila, int n);
void printPila(Nodo *&pila);
void sacarPila (Nodo *&, int &n);
void printPila(Nodo *&pila);
void getNodo(Nodo *&pila,int ref); 

main(){
	int rpt,dato,referencia;
	char r;
	Nodo *pila=NULL;
 do{
	cout<< "\nCual es la accion a realizar: \n";
	cout<< "\n1.- Agregar elementos a la pila ";
	cout<< "\n2.- Buscar numero";
	cout<< "\n3.- Eliminar pila";
	cout<< "\n4.- salir";
	cout<< "\n ingrese un numero dentro del intervalo: \n";
	cin>> rpt;
	switch(rpt){
	case 1:
		cout<<"Agregrar elementos a la pila: \n";
		do{
		cout<< "\n Digite un dato: ";
		cin>>dato;
		agregarPila(pila,dato);
		cout<< "\n Deseas agregar otro elemento a pila S o N? ";
		cin>>r;
		}
		while((r=='s')||(r=='S'));
		cout<< "la pila ahora es: ";
		getch();
    	printPila(pila);
	break;
	case 2:
		cout<<"Buscar numero: \n";
		cout<<"ingrese el numero a buscar: ";
		cin>> referencia;
		getNodo(pila,referencia);
	break;
	case 3:
	    cout<<"Eliminar pila: \n";
		cout<<"\n Eliminando los Elemento de la Pila: ";
    	getch();
    	while (pila !=NULL){
    	sacarPila(pila,dato);
		if (pila !=NULL){
		cout <<dato<<",";
		getch();
		}
		else{
		cout <<dato<<".";
		getch();
		}
	}
	cout<< "\n la pila ahora es: \n";
	getch();
    printPila(pila);
	break;
	case 4:
		cout<<"\n Salir: \n gracias por usar el programa ";
		return 0;
	break;
	default: cout<<"el valor no esta dentro de las opciones posibles intenta nuevamente.";
	         break;
	}
	
	}
	while(rpt!= 4 );
	return 0;
}


void agregarPila(Nodo *&pila, int n){
Nodo *nuevo_nodo=new Nodo();
nuevo_nodo->dato=n; 
nuevo_nodo->siguiente=pila;
pila=nuevo_nodo;
cout<<"\n Elemento "<<n<<" agregado Exitosamente \n";
}

void printPila(Nodo *&pila){
	Nodo *aux =pila;
	while(aux!= NULL){
    cout<< "\n | "<<aux -> dato<<"| "<< endl;
    aux= aux ->siguiente;
    getch();
	}
}


void getNodo(Nodo *&pila,int ref){
	Nodo *aux2 = pila;
	count=0;
	while(aux2!= NULL){
	if(aux2 -> dato== ref){
		count++;
	    getch();	
	}
	aux2= aux2->siguiente;
	}
	cout<< "\n el dato se repite "<< count<<" veces";

}

void sacarPila(Nodo *&pila, int &n){
Nodo *aux=pila;
n=aux->dato;
pila=aux->siguiente;
delete aux;
} 
