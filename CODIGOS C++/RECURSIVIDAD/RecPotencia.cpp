#include <iostream>
#include <conio.h>

using namespace std;

int potencia (int num, int e);
int num;
int e;

int main (){
	cout<<"Escribe un numero \n";
	cin>>num;
	cout<<"A que exponente lo deseas \n";
	cin>>e;
	
	cout<<"El resultado: "<<potencia (num, e);
	
	getch ();
	return 0;
}

int  potencia (int num, int e){
	if (e==1){
	
		return num;
	}
	else {
		num=num * potencia (num, e-1);
		
		return num;
	}
}
