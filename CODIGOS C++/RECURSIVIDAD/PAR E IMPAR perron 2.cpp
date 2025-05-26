#include <iostream>

using namespace std;

int p(int,int);
int a;
    int *dir_a;
    int *cont_t;

int main(){
    cout<<"Digite un numero: ";
    cin>>a;
    p(a,a);
}

int p(int a,int b) {

if(a==0){
    if((b%2)==0){
       
    }
}
else{
        p(a-1,b);
    if((b%2)==1){
         if ((a+1)==0){
            cout<<a<<" es impar"<<endl;
return a;
    }
    }else if(((a+1)%2)!=0){ 
       cout<<"El numero: "<<0<<"se encuentra guardado en la posición"<<*dir_a<<" es par"<<endl;
    }
}
}
