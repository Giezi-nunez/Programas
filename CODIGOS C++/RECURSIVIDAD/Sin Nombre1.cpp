#include <iostream>
#include<conio.h>

using namespace std;
	int main (){
	int x (int nume)
	

	do{
		int j,k;
		cout<< "1-Hacer una piramide\n";
		cout<< "2-Deseas salir\n"; 	
		cin>> j;
		
		switch (j)
		{
		case 1:
			cout<< "Hacermos una piramide\n";
				int nume,piramide;{
				int a,b,c,piramide,num, nume,x;
				piramide=nume;	
			for (int a=1; a<=nume; a++){
				for (int b=1; b<=a; b++){
					cout<<b<<"  ";
				}
				for (int c=piramide; c>0; c--){
					cout<<c<<"  ";
				}
		
					piramide=piramide-1;
					cout<<endl;
					cout<<"Escribe un numero"<<endl;
					cin>>nume;

	}}
}

	
	
		case 2:
			cout<<"Seguro que quieres salir?------SI o NO \N";
			cout<<"\n 1-Si";
			cout<<"\n 2-No";
			cin>> k;
			if (k=1){
				return 0;
			}
			else {
				return main ();
			}
			break;
}}}
while (a !=2);
system ("pause");
return main ();
}
}

