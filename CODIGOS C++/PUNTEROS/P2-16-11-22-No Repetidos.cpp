/*JAIMES PEGUEROS ERICK 
P2-16-11-22-No Repetidos*/

#include <iostream>

using namespace std;

int n,*dir_n;
	int cont=0;
	int fin=4;
int main(){
		int arr[4]={1,2,9999};
	cout<<"Dame un numero mayor de 1 o menor de 10\n ";
	for(int i =0;i<fin;){
	int a=0; 
		cin>>n;	
		dir_n=&n; 
		if(*dir_n>10 || *dir_n<1){
		cout<<"N= "<<n<<"  \t\tError, fuera del rango \n";
	}else{
int si =0;
	for(int x =0;x<fin;x++){
		if(*dir_n==arr[x]){
			cout<<"N="<<n<<"  \t\tError, el numero esta repetido \n "<<endl;
			si=1;
			x=fin;
	}						
}	
	if(si==0){
		arr[cont]=*dir_n;
		cout<<"N="<<n<<"  \t\tCorrecto, se guarda el numero \n"<<endl;
		cont++;	
		i++;	
}
	si=0;
	}
}	
	cout<<"******************************************"<<endl;
for(int v=0;v<4;v++){	
	cout<<"Vector: "<<arr[v]<<endl;
		}
}


