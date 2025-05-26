/*JAIMES PEGUEROS ERICK
PUNTEROS-10-11-22*/

#include<iostream>
#include<locale.h>

using namespace std; 

int main (){
	setlocale(LC_ALL,"Spanish"); 
	int n;
	int *dir_n;
	n=20;
	dir_n = &n;
	
	cout<<"Numero: "<<n<<endl;
	cout<<"Dirección de mem de n: "<<&n<<endl;
	cout<<"********************************"<<endl;
	cout<<"Numero: "<<*dir_n<<endl;
	cout<<"Dirección de mem de n: "<<dir_n<<endl;
	cout<<"Dirección de mem de dir_n: "<<&dir_n<<endl;
	

}
