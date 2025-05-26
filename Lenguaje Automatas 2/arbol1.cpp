#include <stdio.h>
#include <stdlib.h>

struct NODO{
	char simbolo;
	NODO *sig;
};
struct NODO *inicio,*p,*ultimo;
void inicializar(void){
	inicio=NULL;
}
void insertar(void){
	//inicio
     int num=0;
	 
	 printf("\nEscribe nmero <-1 terminar>");
	 scanf("%i",&num);
	 while(num!=-1){
        if(inicio == NULL){
			inicio=new  (struct NODO); //asigna inicio al monton
			inicio->simbolo=num;
			inicio->sig=NULL;
			ultimo=inicio;
	 	}else{
			p=new(struct NODO);
			p->simbolo=num;
			p->sig=NULL;
			ultimo->sig=p; //ligando los nodos
			ultimo=p; //ultimo es igual al ultimo simbolo metido
	 	}
		printf("\nEscribe nmero <-1 terminar>");
		scanf("%i",&num);
	 }//while
}
void impresion(void){
	p=inicio;
	 while (p != NULL)
	 {
		printf("\t %i", p->simbolo);
		p=p->sig;

	 }
}
//int main()
{
     inicializar();
     insertar();
     impresion();
	 
	 
	 
     }
