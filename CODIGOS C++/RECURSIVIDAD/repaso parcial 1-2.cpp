#include <stdio.h>                                  
int fibo(int N){
    if (N <= 1){ //se detiene si la primera iteracion es 1
        return N;
    }
    else{
            // f(x)=(x-1)+(x-2) x=1
            //
            // (1-1) + (1-0) == 1  por caso base; x = 2
            // (2-1) + (2-2) == 1+0 = 2
            // (3-1) + (3-2) == 2+1 = 3
            // (4-1) + (4-2) == 3+2 = 5
            // (5-1) + (5-2) == 4+3 = 7
        return (fibo(N-1) + fibo(N-2));
    }
}

int print(int n){ //genera los numero del 1 a n donde n lo pide en main
    int x;
    if (n != 0){ //mientras n sea diferente a 0 ejecuta
        x = (n - print(n-1));
        // n = 5
        // 5 - (5-1) = 5-4 = 1
        // 4 - (4-1) = 4-3 = 1
        // ...
        printf("%i ", fibo(n));
        // tomamos n que se va decrementando para que entrege la serie de 1 a n
        return x;
    }
        return 0;
}
int main(){
    int n;
    printf("Numero: "); scanf("%i", &n);
    print(n);
    return 0;
}  

