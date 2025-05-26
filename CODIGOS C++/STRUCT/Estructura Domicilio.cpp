/*ERICK JAIMES PEGUEROS 
P2-17-10-22-Estructura Domicilio Terminada*/

#include <iostream> 
#include <locale.h> 

using namespace std;


	
int main (){
	
	setlocale(LC_ALL, "Spanish"); //Encargado de agregar acentos y la letra ñ.
	
	struct {
		string calle;
		int numero;
		string ciudad;
	}domicilio [2];
	
	for(int i=0; i<2; i++)
{			
	cout<<"Dame la calle \n";
	cin>>domicilio[i].calle;
	cout<<"Dame el numero \n";
	cin>>domicilio[i].numero;
	cout<<"¿Cual es tu ciudad? \n";
	cin>>domicilio[i].ciudad;
}
	for(int i=0; i<2; i++){
	
	
	cout<<"La calle es: "<<domicilio[i].calle<<endl;
	cout<<"La ciudad es: "<<domicilio[i].ciudad<<endl;
	cout<<"El numero es: "<<domicilio[i].numero<<endl;
}
	
	
	
	return 0;
}
