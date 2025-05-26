#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Vector que almacenará los números ingresados por el usuario
  vector<int> numeros;

  // Variable que almacenará la respuesta del usuario sobre si desea agregar más números
  char continuar = 's';

  // Mientras el usuario desee continuar
  while (continuar == 's') {
    // Variable para almacenar el número ingresado
    int numero;

    // Preguntar al usuario por un número
    cout << "Ingrese un número (entre 1 y 10): ";
    cin >> numero;

    // Validar que el número esté en el rango especificado
    if (numero >= 1 && numero <= 10) {
      // Agregar el número al vector
      numeros.push_back(numero);

      // Preguntar al usuario si desea continuar agregando números
      cout << "¿Desea agregar otro número (s/n)? ";
      cin >> continuar;
    } else {
      // Si el número no está en el rango, mostrar un mensaje de error
      cout << "Error: el número debe estar entre 1 y 10." << endl;
    }
  }

  // Mostrar los números pares e impares del vector
  cout << "Números pares: ";
  for (int i = 0; i < numeros.size(); i++) {
  	cout<<i;
  }
  cout<<"Numero impares: "
  for (int i =0; i< numeros.size()/2-1;i++){
  	cout<<i;
  }
  }
  
