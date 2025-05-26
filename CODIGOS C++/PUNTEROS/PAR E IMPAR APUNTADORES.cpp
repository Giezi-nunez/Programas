/*JAIMES PEGUEROS ERICK
*/

#include<iostream>

using namespace std;

int main(){
    int numero, *dir_numero;
    char desea;
    int par=0,impar=0;
    int *puntero_par = &par, *puntero_impar = & impar;
    do{
    cout<<"Digite un numero: "; 
    cin>>numero;
    dir_numero=&numero; //Guardando pos de memoria

    if (*dir_numero%2==0){
        cout<<"El numero "<<*dir_numero<<" es par"<<endl;
        cout<<"Posición: "<<dir_numero<<endl;
        par++;
    }
    else{
        cout<<"El numero "<<*dir_numero<<" es impar"<<endl;
        cout<<"Posición: "<<dir_numero<<endl;
        impar++;
    }

        cout<<"¿Desea continuar? (teclea S para Si)";
        cin>>desea;
        desea=toupper(desea);
 }while((desea!='N'));
    cout<<"numero de pares : "<<*puntero_par<<endl<<"numero de impares: "<<*puntero_impar<<endl;
    system("pause");
    return 0;
}
