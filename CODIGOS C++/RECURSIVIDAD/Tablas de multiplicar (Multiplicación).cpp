//Erick Jaimes Pegueros 
//Tablas de multiplicar con formula de multiplicacion.

#include <iostream>
#include <conio.h>

using namespace std;

//Variables 
int num;
int m;
int tabla(int num, int m);

int main (){
	cout<<"¿Que tabla deseas conocer? \n";
	cin>>num;

	
	tabla(num, m);

} 

int tabla (int num,int m){
	if (m<=11){  //Caso Base 
		
		return m;
			
	}
	else {    //Caso General
		m=num*tabla (m+1, m);	//Operacion de Multiplicación
		cout<<num<<"x"<<m<<"="<<tabla<<endl;
		
		return m;
	}
}
