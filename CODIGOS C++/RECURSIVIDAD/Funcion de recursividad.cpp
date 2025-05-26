//JAIMES PEGUEROS ERICK
//Funcion de Recursividad 

#include <iostream>
#include <conio.h>

using namespace std;

int factorial (int);
int num;

int main (){
	cout<< "Escribe un numero \n";	
	cin>>num;
	cout<< "Su factorial es:  " <<factorial(num);

	getch ();
	return 0;
}

int factorial (int n){
	if (n==0){
		n = 1;
	}
	else {
		n = n * factorial(n-1);
	}
	return n;
}
