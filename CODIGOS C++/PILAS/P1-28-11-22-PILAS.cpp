/*JAIMES PEGUEROS ERICK
P1-28-11-22-PILAS*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo*&, int);

int main (){
	Nodo*pila = NULL;
	int n1,n2;
	cout<<"\n Digite un numero \n";
	cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"\n Digite un numero \n ";
	cin>>n2;
	agregarPila(pila,n2);
	
	cout<<"\n Sacando los Elementos de la Pila:  ";
	
	while(pila != NULL){
		sacarPila(pila,n1);
		if(pila!=NULL){
			cout<<n1<<",";
		}
		else{
			cout<<n1<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo*&pila,int n){
	Nodo*nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	cout<<"\n Elemento  "<<n<<"  agregado Exitosamente"<<endl; 
}

void sacarPila(Nodo *&pila,int &n){
	Nodo*aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
	
