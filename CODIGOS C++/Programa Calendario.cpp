#include <iostream>
#include <locale.h>

using namespace std;

int CalcularDias(int mes, int a);
bool Bisiesto(int a);
int zeller (int anio, int mes, int dia);

int main (){
	
	setlocale(LC_ALL,"Spanish");
	cout<<"Año: ";
	int a;
	cin>>a;
	cout<<"Mes: ";
	int me;
	cin>>me;
	cout<<"Dia: ";
	int q;
	cin>>q;
	string day[]={"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
	string m[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio",
	"Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};//Arreglo tipo String 
	
	for (int mes=1;mes<=12;mes++){
		if (mes==me){
		cout<<endl;
		int x = zeller (a,mes,1);
		cout<<"Es: "<<day[(q%7)+(x-1)]<<endl;
		/*cout<<"\t"<<m[mes-1]<<endl;
		cout<<"Dom Lun Mar Mie Jue Vie Sab"<<endl;
		
		for (int i=0;i<x;i++){
			cout<<"    ";
			
		}*/
		/*int dias_m=CalcularDias(mes,a);
		for (int dia=1; dia<=dias_m; dia++){
			if (dia<10)cout<<dia<<"   ";
			else cout<<dia<<"  ";
			x++; //cuando x valga 7 dara el salto de linea
			if(x%7==0)cout<<endl;//condicional 
		}*/
		cout<<endl;}
	}
	return 0;
}

int CalcularDias(int mes, int a){
	if(mes==1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)
	return 31;
	if(mes == 2){
		if(Bisiesto(a) == true) return 29;
		else return 28;
	}
	return 30;
}/*//== condicion logica porque se esta igualando
condicion logica o ||*/

bool Bisiesto (int a){ //Controlar cuando el año es bisiesto 
	if(a%4 != 0) return false;
	else if (a%100 != 0)return true;
	else if (a%400 != 0)return false; 
	return true; 
}

int zeller (int anio, int mes, int dia){
	//Dom 0, Lun 1, Mar 2, Mie 3, Jue 4, Vie 5, Sab 6
	int a = (14-mes)/12;
	int y = anio - a;
	int m = mes + 12*a - 2;
	
	int d = (dia+y+y/4-y/100+y/400+(31*m)/12)%7;
	return d;

}
