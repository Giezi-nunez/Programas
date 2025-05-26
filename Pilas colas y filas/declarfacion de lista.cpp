#include <iostream>
#include <list>

int main() {
    // Declarar una lista vacía de enteros
    std::list<int> miLista;

    // Agregar elementos a la lista
    miLista.push_back(10);
    miLista.push_back(20);
    miLista.push_back(30);

    // Mostrar los elementos de la lista utilizando un bucle for-each
    std::cout << "Elementos de la lista: ";
    for (const auto& elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Acceder al primer y último elemento
    std::cout << "Primer elemento: " << miLista.front() << std::endl;
    std::cout << "Último elemento: " << miLista.back() << std::endl;

    // Eliminar un elemento de la lista
    miLista.pop_front();

    // Mostrar los elementos de la lista nuevamente
    std::cout << "Elementos de la lista después de eliminar el primer elemento: ";
    for (const auto& elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
