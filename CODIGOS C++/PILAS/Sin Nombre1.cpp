#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Vector que almacenar� los n�meros ingresados por el usuario
  vector<int> numeros;

  // Variable que almacenar� la respuesta del usuario sobre si desea agregar m�s n�meros
  char continuar = 's';

  // Mientras el usuario desee continuar
  while (continuar == 's') {
    // Variable para almacenar el n�mero ingresado
    int numero;

    // Preguntar al usuario por un n�mero
    cout << "Ingrese un n�mero (entre 1 y 10): ";
    cin >> numero;

    // Validar que el n�mero est� en el rango especificado
    if (numero >= 1 && numero <= 10) {
      // Agregar el n�mero al vector
      numeros.push_back(numero);

      // Preguntar al usuario si desea continuar agregando n�meros
      cout << "�Desea agregar otro n�mero (s/n)? ";
      cin >> continuar;
    } else {
      // Si el n�mero no est� en el rango, mostrar un mensaje de error
      cout << "Error: el n�mero debe estar entre 1 y 10." << endl;
    }
  }

  // Mostrar los n�meros pares e impares del vector
  cout << "N�meros pares: ";
  for (int i = 0; i < numeros.size(); i++) {
  	cout<<i;
  }
  cout<<"Numero impares: "
  for (int i =0; i< numeros.size()/2-1;i++){
  	cout<<i;
  }
  }
  
