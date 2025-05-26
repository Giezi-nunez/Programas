#include <iostream>
#include <stdio.h>

using namespace std;

int fibo (int f){
	if (f<=1){
		
		return f;
	}
	else{
		
		return (fibo (f-1) + fibo (f-2));
	}
	return 0;
}

int cont (int c){
	int r;
	if (c=!-1){
	r=(c-cont(c-1));
	printf ("%i, ", fibo (c));
	return r;
	}
	return 0;
}

int main (){
	int c;
	printf ("Dame un numero: \n");
	scanf ("%i, ", &c);
	cont(c);
	return 0;
}
