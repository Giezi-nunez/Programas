#include <iostream>

using namespace std;

int exponente(int,int);

int main(){
    int a;
    cout<<"Digite un numero: ";
    cin>>a;
    exponente(a,a);
}
int exponente(int a,int b ) {
if(a==0){
    if((b%2)==0 && a==0){
        cout<<0<<" es par"<<endl;
    }
}
else{
        exponente(a-1,b);
    if((b%2)==1){
         if (((a+1)%2)==0){
            cout<<a<<" es impar"<<endl;
return a;
    }
    }else if(((a+1)%2)!=0){ 
      cout<<a<<" es par"<<endl;
    }
}
}
