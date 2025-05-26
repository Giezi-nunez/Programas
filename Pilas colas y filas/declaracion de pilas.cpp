#include <iostream>
#include <stack>
using namespace std;

int main() {
stack<int> pila; // Declaración de una pila de enteros
    
    // Operaciones en la pila
    pila.push(10); // Insertar un elemento en la parte superior de la pila
    pila.push(20);
    pila.push(30);
    cout << "Elemento en la parte superior de la pila: " << pila.top() << std::endl;
    
    pila.pop(); // Eliminar el elemento en la parte superior de la pila
    
cout << "Elemento en la parte superior de la pila despues de pop(): " << pila.top() << std::endl;
cout << "Tamaño de la pila: " << pila.size() << std::endl;
    
    return 0;
}

