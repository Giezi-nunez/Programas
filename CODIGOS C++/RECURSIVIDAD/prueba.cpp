#include <iostream>
#include <conio.h>

using namespace std;

//Variables 
int num;
int r;
int m;
int tabla(int num, int m, int r);

int main (){
	cout<<"¿Que tabla deseas conocer? \n";
	cin>>num;
	
	tabla(num, m, r);	

}

int tabla (int num,int m,int r){
	if (m<=10){  //Caso Base 
	
		r=num*m;	//Operacion de Multiplicación 
		cout<<num<<"x"<<m<<"="<<r<<endl;
		m++;
		
		return tabla (num,m,r);
	}
}
