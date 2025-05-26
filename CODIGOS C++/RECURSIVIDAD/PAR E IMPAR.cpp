#include <stdio.h>
#include <iostream>

using namespace std;

int numpar (int);
int numimpar(int);
int cont (int, int);
int rpar;
int rimpar;

int numpar(int n){
	if (n==0){
		
		return 1;
	}
	else{
	return numimpar(n-1);
		
	}
}

int numimpar (int n){
	if (n==1){
		return 0;
	}
	else{
	return numpar(n-1);
		
	}
}

int main (){
	int n;
	cout<<"Dame un numero: \n";
	cin>>n;
	if (numpar (n)==0){
		cout<<"El numero es Par \n";
	}
	else{
		cout<<"El numero es impar \n";
	}
	return 0;
}
