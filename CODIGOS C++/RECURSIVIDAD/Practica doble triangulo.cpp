//P1-31/08/22-Practica Doble Triágulo
//Erick Jaimes Pegueros

#include <iostream> 
#include <conio.h>

using namespace std;
//VARIABLES
	int nume,piramide;
	
int x (int num){
	piramide=nume;	
for (int a=1; a<=nume; a++){
	for (int b=1; b<=a; b++){
		cout<<b<<" ";
	}
		for (int c=piramide; c>0; c--){
		cout<<c<<" ";
	}
		
		piramide=piramide-1;
		cout<<endl;
	}}

int main (){
	cout<<"Escribe un numero"<<endl;
	cin>>nume;
	x (nume);
	getch ();
	return 0;	
	}
