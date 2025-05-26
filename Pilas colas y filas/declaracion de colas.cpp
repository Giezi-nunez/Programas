#include <iostream>
#include <queue>
using namespace std;
int main() {
  // Declarar una cola de enteros
queue<int> miCola;
  // Añadir elementos a la cola
  miCola.push(10);
  miCola.push(20);
  miCola.push(30);
  // Verificar si la cola está vacía
  if (miCola.empty()) {
 cout << "La cola esta vacia." <<endl;
  } else {
cout << "La cola no esta vacia." <<endl;
  }
  // Obtener el elemento en el frente de la cola
cout << "Elemento en el frente de la cola: " << miCola.front() <<endl;
  // Eliminar el elemento del frente de la cola
  miCola.pop();
  // Obtener el nuevo elemento en el frente de la cola
cout << "Elemento en el frente de la cola despues de eliminar uno: " << miCola.front() <<endl;
  // Obtener el tamaño de la cola
cout << "Tamaño de la cola: " << miCola.size() <<endl;
  return 0;
}
