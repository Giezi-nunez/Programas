#include <iostream>
using namespace std;

int contador(int);
int potencia(int, int);

int contador(int x){
	
	if(x==0){
		
		
	}
	else{
		cout<<x<<"^"<<x<<"= "<<potencia(x,x)<<endl;
		contador(x-1);
 	
 }
 return 0;
}

int potencia(int x, int y){
	int mul;
	if(y==0){
		return 1;
	}
	else{
		return (x*potencia(x,y-1));
		
	}
}

int main(){

	int x;
	
	cout<<"Digite un numero: ";
	cin>>x;
	int y=x;
	
	contador(x);
}   
