#include <iostream>
using namespace std;

int n,*dir_n;

int main(){
	cout<<"ingrese un numero"<<endl;
	cin>>n;
	dir_n=&n; 
	if((*dir_n%2)==0){
				cout<<"el numero es "<<*dir_n<<" se encuentra guardado en la posision "<<dir_n<<"y es par"<<endl;

	}else{
						cout<<"el numero es "<<*dir_n<<" se encuentra guardado en la posision "<<dir_n<<"y es impar"<<endl;
					

	}
}

