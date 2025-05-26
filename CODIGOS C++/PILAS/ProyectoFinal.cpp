/*JAIMES PEGUEROS ERICK
PROYECTO FINAL*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<windows.h> //LIBRERIA PARA COLORES 
#include<stdio.h>

using namespace std;

//Declarar variables y estructuras
struct Nodo{
	int dato;
	Nodo*siguiente;
};

int cont;
int conta=0;
void agregarPila(Nodo*&,int );
void imprimirPila(Nodo*&);
void sacarPila(Nodo*&,int &);
void agregarinvisible(Nodo*&,int );

struct Nodorep{
	int dato;
	Nodorep*siguiente;
};
void repPila(Nodorep*&, int );
void imrepPila(Nodorep*&);

struct Nodocopiar{
	int dato;
	Nodocopiar*siguiente;
};
void copiarPila(Nodocopiar*&,int );

struct Nodoremplazo{
	int dato;
	Nodoremplazo*siguiente;
};
void remplazoPila(Nodoremplazo*&, int );
void sacarPilarem(Nodoremplazo*&,int &);

struct Nodopares{
	int dato;
	Nodopares*siguiente;
};
void paresPila(Nodopares*&, int );
void imparesPila(Nodopares *&);

struct Nodoimpar{
	int dato;
	Nodoimpar*siguiente;
};
void imparPila(Nodoimpar*&, int);
void imimparesPila(Nodoimpar *&);

struct Nodopositivo{
	int dato;
	Nodopositivo*siguiente;
};
void positivoPila(Nodopositivo*&pilapositivo,int);
void impositivoPila(Nodopositivo *&);

struct Nodonegativo{
	int dato;
	Nodonegativo*siguiente;
};
void negativoPila(Nodonegativo*&pilanegativo,int);
void imnegativoPila(Nodonegativo *&);

int main(){
	//system("color 80");//Pantalla de color  
	setlocale(LC_ALL,"Spanish"); //PARA ACENTOS Y SIGNOS DE PUNTUACIÃ“N
	int a,b,c,d;
	char z;
	Nodo*pila=NULL;
	Nodocopiar*pilacopiar=NULL;
	Nodorep*pilarep=NULL;
	Nodopares*pilapares=NULL;
	Nodoimpar*pilaimpar=NULL;
	Nodoremplazo*pilaremplazo=NULL;
	Nodopositivo*pilapositivo=NULL;
	Nodonegativo*pilanegativo=NULL;
	do{
		cout<<"\033[1;40;34m"<<"\t\t ¿CUÁL ES LA ACCIÓN A REALIZAR?"<<"\033[0m"<<endl;
		cout<<"1.-Agregar nodo"<<endl;
		cout<<"2.-Eliminar un solo nodo"<<endl;
		cout<<"3.-Ver pilas"<<endl;
		cout<<"4.-Eliminar todas las pilas"<<endl;
		cout<<"5.-Salir"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"Eliga una opción\n"<<"-> ";
		cin>>a;		
switch (a){
	case 1:
		cout<<"\033[1;33m"<<"\t\tAgregar elementos a la pila"<<"\033[0m"<<endl;
		do{
		cout<< "Digite un dato: "<<endl;
		cin>>b;
		agregarPila(pila,b);
		conta++;
		cout<< "\t\t-----¿Deseas agregar otro elemento a pila S o N?----- "<<endl;
		cin>>z;
		} 
		while((z=='s')||(z=='S'));
	break;	
	case 2:
		if(pila==NULL){
			printf("\033[1;31m");
			cout<<"\t\t !ERROOOOOR¡\n"<<"\t  NO EXISTEN NODOS POR LO TANTO \n\t     LA PILA ESTA VACÍA\n\n"<<"\033[0m"<<endl;
		}else{
			sacarPila(pila,b);
			conta--;
			cout<<"\033[1;33m"<<"\t\tLA CIMA SE A ELIMINADO\n"<<"\033[0m"<<endl;
		}
	break;
	case 3:
		if(pila==NULL){
			printf("\033[1;31m");
			cout<<"\t\t !ERROOOOOR¡"<<endl;
			printf("\033[0m");
			cout<<"\t      NO EXISTEN NODOS\n\n";
		}else{
		do{
		cout<<"\033[1;33m"<<"\t\tVER PILAS"<<"\033[0m"<<endl;
		cout<<"1.-Toda la pila ORIGINAL"<<endl;
		cout<<"2.-Pila SIN numeros repetidos"<<endl;
		cout<<"3.-Pila numeros PARES"<<endl;
		cout<<"4.-Pila numeros IMPARES"<<endl;
		cout<<"5.-Pila numeros POSITIVOS"<<endl;
		cout<<"6.-Pila numeros NEGATIVOS"<<endl;
		cout<<"7.-Regresar al MENÚ principal"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"Eliga una opción\n"<<"-> ";
		cin>>d;
	switch (d){
		case 1:
			cout<<"\033[1;33m"<<"\t\tPILA ORIGINAL"<<"\033[0m"<<endl;
			getch();
    		imprimirPila(pila); 
		break;
		case 2:  
			cout<<"\033[1;33m"<<"\tPILA SIN NÚMEROS REPETIDOS\n"<<"\033[0m"<<endl;
			while(pila!=NULL){
				sacarPila(pila,b);
				remplazoPila(pilaremplazo,b);
			}	
			repPila(pilarep,b);
			while(pilaremplazo!=NULL){
				sacarPilarem(pilaremplazo,b);
				agregarinvisible(pila,b);
			}
		break;
		case 3:
			cout<<"\033[1;33m"<<"\t\tPILA NÚMEROS PARES"<<"\033[0m"<<endl;
			while(pila!=NULL){
				sacarPila(pila,b);
				remplazoPila(pilaremplazo,b);
				if(b %2==0){
					paresPila(pilapares,b);
				}	
			}	
			while(pilaremplazo!=NULL){
				sacarPilarem(pilaremplazo,b);
				agregarinvisible(pila,b);
			}
			getch();
			imparesPila(pilapares);
		break;
		case 4: 
			cout<<"\033[1;33m"<<"\t\tPILA NÚMEROS IMPARES"<<"\033[0m"<<endl;
			while(pila!=NULL){
				sacarPila(pila,b);
				remplazoPila(pilaremplazo,b);
				if(b %2==1){
					imparPila(pilaimpar,b);
				}
			}	
			while(pilaremplazo!=NULL){
				sacarPilarem(pilaremplazo,b);
				agregarinvisible(pila,b);
			}
			getch();
			imimparesPila(pilaimpar);
		break;
		case 5: 
			cout<<"\033[1;33m"<<"\t\tPILA NÚMEROS POSITIVOS"<<"\033[0m"<<endl;
			while(pila!=NULL){
				sacarPila(pila,b);
				remplazoPila(pilaremplazo,b);
				if(b>=0){
					positivoPila(pilapositivo,b);
				}
			}	
			while(pilaremplazo!=NULL){
				sacarPilarem(pilaremplazo,b);
				agregarinvisible(pila,b);
			}
			getch();
			impositivoPila(pilapositivo);
		break;
		case 6: 
			cout<<"\033[1;33m"<<"\t\tPILA NÚMEROS NEGATIVOS"<<"\033[0m"<<endl;
			while(pila!=NULL){
				sacarPila(pila,b);
				remplazoPila(pilaremplazo,b);
				if(b<=-1){
					negativoPila(pilanegativo,b);
				}
			}	
			while(pilaremplazo!=NULL){
				sacarPilarem(pilaremplazo,b);
				agregarinvisible(pila,b);
			}
			getch();
			imnegativoPila(pilanegativo);
		break;
		case 7:
			cout<<"\033[1;40;34m"<<"\t\t REGRESANDO A MENÚ PRINCIPAL"<<"\033[0m"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			cout<<"\033[1;40;34m"<<"MENÚ PRINCIPAL"<<"\033[0m"<<endl;
		break;
		default:
		printf("\033[1;31m");
		cout<<"\t\t!EL VALOR INGRESADO NO ESTA EN EL MENÚ¡ \n\n"<<endl;
		printf("\033[0m");		
		break;
	}
	}while(d!= 7 );	
	}	
	break;
	case 4:
		if(pila==NULL){
			printf("\033[1;31m");
			cout<<"\t\t !ERROOOOOR¡"<<endl;
			printf("\033[0m");
			cout<<"\t     NO HAY NADA QUE ELIMINAR\n\n";
			}
			else{
			cout<<"\033[1;33m"<<"\t\tELIMINAR TODA LA PILA"<<"\033[0m"<<endl;
			cout<<"\n Sacando los Elementos de la Pila:  ";	
		while(pila != NULL){
			sacarPila(pila,a);
			if(pila!=NULL){
				cout<<a<<",";
			}
			else{
				cout<<a<<".\n";
			}
		}
			cout<<"\033[1;33m"<<"\t\tLA PILA SE HA ELIMINADO\n\n"<<"\033[0m"<<endl;
		getch();
	}
	break;
	case 5: 
		if(pila==NULL){
		cout<<"\033[1;40;34m"<<"\t\t SALIENDO..."<<"\033[0m"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"\033[1;40;34m"<<"\tGRACIAS POR USAR ESTE PROGRAMA :)"<<"\033[0m"<<endl;
		return 0;
		}
		else{
		printf("\033[1;31m");
		cout<<"\t\tLA PILA ESTA LLENA, ELIMINALA PARA PODER SALIR \n\n"<<endl;
		printf("\033[0m");
		}
	break;
	default:
		printf("\033[1;31m");
		cout<<"\t\t!EL VALOR INGRESADO NO ESTA EN EL MENÚ¡ \n\n"<<endl;
		printf("\033[0m");		
	break;
		}
	}
	while(a!= 6 );
	return 0;
}

//PILA ORIGINAL
void agregarPila(Nodo*&pila,int n){
	Nodo*nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	cout<<"\n El elemento "<<n<<" se agrego EXITOSAMENTE"<<endl;
}

//PILA PARA ALMACENAR ORIGINAL
void agregarinvisible(Nodo*&pila,int n){
	Nodo*nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
}

//PARA IMPRIMIRPILA ORIGINAL
void imprimirPila(Nodo *&pila){
	Nodo *aux =pila;
	while(aux!= NULL){
    cout<< "\n | "<<aux -> dato<<"| "<< endl;
    aux= aux ->siguiente;
    getch();
	}
}

//SACAR PILAS
void sacarPila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

//EL REMPLAZARLAS Y PODER ACOMODARLAS
void remplazoPila(Nodoremplazo*&pilaremplazo, int rem){
	Nodoremplazo*nuevo_nodo1=new Nodoremplazo();
	nuevo_nodo1->dato=rem;
	nuevo_nodo1->siguiente=pilaremplazo;
	pilaremplazo=nuevo_nodo1;
}

//PARA ELIMINAR LA PILA REMPLAZO
void sacarPilarem(Nodoremplazo *&pilaremplazo, int &rem){
	Nodoremplazo *aux9=pilaremplazo;
	rem=aux9->dato;
	pilaremplazo=aux9->siguiente;
	delete aux9;
}

//PARA COPIAR PILA ORIGINAL
void copiarpila(Nodocopiar *&pilacopiar, int cop){
	Nodocopiar *aux3=pilacopiar;
	aux3->dato=cop;
	aux3->siguiente=pilacopiar;
	pilacopiar=aux3;
}

//PILAS PARES
void paresPila(Nodopares*&pilapares, int par){
	Nodopares*nuevo_nodo2=new Nodopares();
	nuevo_nodo2->dato=par;
	nuevo_nodo2->siguiente=pilapares;
	pilapares=nuevo_nodo2;
} 

void imparesPila(Nodopares *&pilapares){
	Nodopares *aux7 =pilapares;
	while(aux7!= NULL){
    cout<< "\n | "<<aux7 -> dato<<"| "<< endl;
    aux7= aux7 ->siguiente;
    getch();
	}
}

//PILAS IMPARES
void imparPila(Nodoimpar*&pilaimpar, int impar){
	Nodoimpar*nuevo_nodo2=new Nodoimpar();
	nuevo_nodo2->dato=impar;
	nuevo_nodo2->siguiente=pilaimpar;
	pilaimpar=nuevo_nodo2;
} 

void imimparesPila(Nodoimpar *&pilaimpar){
	Nodoimpar *aux7 =pilaimpar;
	while(aux7!= NULL){
    cout<< "\n | "<<aux7 -> dato<<"| "<< endl;
    aux7= aux7 ->siguiente;
    getch();
	}
}

//PILA POSITIVO
void positivoPila(Nodopositivo*&pilapositivo, int pos){
	Nodopositivo*nuevo_nodo4=new Nodopositivo();
	nuevo_nodo4->dato=pos;
	nuevo_nodo4->siguiente=pilapositivo;
	pilapositivo=nuevo_nodo4;
} 

void impositivoPila(Nodopositivo*&pilapositivo){
	Nodopositivo *aux7 =pilapositivo;
	while(aux7!= NULL){
    cout<< "\n | "<<aux7 -> dato<<"| "<< endl;
    aux7= aux7 ->siguiente;
    getch();
	}
}

//PILA NEGATIVO
void negativoPila(Nodonegativo*&pilanegativo, int neg){
	Nodonegativo*nuevo_nodo5=new Nodonegativo();
	nuevo_nodo5->dato=neg;
	nuevo_nodo5->siguiente=pilanegativo;
	pilanegativo=nuevo_nodo5;
} 

void imnegativoPila(Nodonegativo*&pilanegativo){
	Nodonegativo *aux7 =pilanegativo;
	while(aux7!= NULL){
    cout<< "\n | "<<aux7 -> dato<<"| "<< endl;
    aux7= aux7 ->siguiente;
    getch();
	}
}

void repPila(Nodorep*&pilarep,int ref){
	Nodorep *aux = pilarep;
	Nodorep *aux2 = pilarep;
	cont=0;
	while(aux!=NULL){
	ref=0;
while(aux!=NULL){
	if((aux->dato)==(aux2->dato)){
		cout<<"xd";//si esta repetido suma 1				
	}								
	aux=aux->siguiente;
	}
	if(aux==0){//si rep es 0 entonces quiere decir que el numero no esta repetido
		//guarda el numero que no esta repetido
	}
	aux=aux->siguiente;	
	while(aux!= NULL){
    cout<< "\n | "<<aux -> dato<<"| "<< endl;
    aux= aux ->siguiente;
    getch();
	}
}
}

/*void imrepPila(Nodorep*&pilarep){
	Nodorep *aux8 =pilarep;
	while(aux8!= NULL){
    cout<< "\n | "<<aux8 -> dato<<"| "<< endl;
    aux8= aux8 ->siguiente;
    getch();
	}
}

//mueve actual
/*void repPila(Nodo *&pila,int ref){
	Nodo *aux2 = pila;
	cont=0;
	while(aux2!= NULL){
	if(aux2 -> dato== ref){
	    getch();	
			}
	aux2= aux2->siguiente;
	}
	for (int i=0;i<ref;i++){
		cout<<ref;
		cout<<endl;
}
	getch();
} //Esto aun no elimina los numeros repetidos, PERO... Muestra que numero esta repetido. 



void copiarPila(Nodo*&pila, int cop){
Nodo*aux3=pila;
cop=aux3->dato;
while (pila != NULL){
sacarPila(pila,cop);
remplazoPila(pila,cop);
if (aux3 %2==0){
	paresPila(pila,cop);
	}
else{
	imparPila(pila,cop);
}	
}
}



void paresPila(Nodo*&pila, int par){
Nodo4*aux5=pila;
n=aux5->dato;
Nodo4*nuevo_nodo2=new Nodo();
nuevo_nodo2->dato=n
nuevo_nodo2->siguiente=pila;
pila=nuevo_nodo2;
}

void imparesPila(Nodo *&pila,int &n){
	Nodo3 *aux7 =pila;
	while(aux7!= NULL){
    cout<< "\n | "<<aux7 -> dato<<"| "<< endl;
    aux7= aux7 ->siguiente;
    getch();
	}
}

void imparPila(Nodo*&pila, int impar){
Nodo2*aux6=pila;
n=aux6->dato;
Nodo2*nuevo_nodo3=new Nodo();
nuevo_nodo3->dato=n
nuevo_nodo3->siguiente=pila;
pila=nuevo_nodo3;
}

void imimparesPila(Nodo *&pila, &n){
	Nodo1 *aux8 =pila;
	while(aux8!= NULL){
    cout<< "\n | "<<aux8 -> dato<<"| "<< endl;
    aux8= aux8 ->siguiente;
    getch();
	}
}*/
