#include <iostream>
using namespace std;
int main (){
string exp;
	int cont, cont2;
	do{
	cout<<"Ingresa una expresion"<<endl;
	cin>>exp;
	cont= exp.size();
	cout<<"El tmañano de la expresion es de: "<<cont<<endl;
	}
while(cont>=51);
	for(int i=0; i<cont; i++){
	if(exp[i]=='+'){
		cout<<"Es suma"<<endl;
	}
	else if(exp[i]=='*'){
		cout<<"Es multiplicacion"<<endl;
	}
	else{
		cont2++;
	}
	}
	int var[cont2];
	for(int i=0; i<cont2; i++)
	{
		cout<<"Ingresa un valor la variable: "<<i+1<<var[i];
	}
	return 0;
}
