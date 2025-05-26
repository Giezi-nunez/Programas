//Erick Jaimes Pegueros 
//Tablas de multiplicar  
//8 para calificar mañana 

/* Toda formula recursiva se inicializa de forma inversa por lo cual
para hacer esta  tabla de multiplicar debe sumarse el resultado de cada multiplicación*/

#include <iostream>

using namespace std;

//Variables 
int num;
int m;
int r;
int mul;
int tabla(int num, int m, int r);

int main (){
	cout<<"¿Que tabla deseas conocer? \n";
	cin>>num;

	tabla(num, 10 ,r); //le damos una inicializacion al numero por el cual se multiplicara 	

}

int tabla (int num,int m, int r){
	if (m==0){  //Caso Base
		(m=10); /*Si no cumple con el igual o siendo cero pasa a else 
		y se realiza recursividad*/

	}
		else { //Caso general 
		// f(x)=num+x-1
	/*5x10=50
	5x9=45
	5x8=40
	5x7=35
	....
	Cada resultado es sumado con la funcion recursiva y al volver a inicalizar una vuelta 
	recursiva cambia de valor el numero por el cual se esta multiplicando*/
		r=num+tabla (num, m-1, r ); 
		
		cout<<num<<"x"<<m<<"="<<r<<endl;
		
		return r; //retorna a la formula recursiva dando asi la suma de los resultados. 
}
}
