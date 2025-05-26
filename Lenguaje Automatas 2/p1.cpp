#include <iostream>
using namespace std;

struct Domicilio {
    string calle;
    int numero;
    string localidad; 
};


void imprimirDomicilio(const Domicilio &domicilio) {
    cout << "Domicilio:" << endl;
    cout << "Calle: " << domicilio.calle << endl;
    cout << "Número: " << domicilio.numero << endl;
    cout << "Localidad: " << domicilio.localidad << endl; 
}

int main() {
    
    Domicilio domicilios[2];

    
    for (int i = 0; i < 2; i++) {
        cout << "Ingrese los datos del domicilio " << i + 1 << ":" << endl;
        cout << "Calle: ";
        cin.ignore(); 
        getline(cin, domicilios[i].calle);
        cout << "Número: ";
        cin >> domicilios[i].numero;
        cin.ignore(); 
        cout << "Localidad: "; 
        getline(cin, domicilios[i].localidad);
    }

    for (int i = 0; i < 2; i++) {
        cout << "\nImprimiendo datos del domicilio " << i + 1 << ":" << endl;
        imprimirDomicilio(domicilios[i]);
    }

    return 0;
}
