#include <iostream>
using namespace std;

int main() {
    int Numero;

    cout << "Ingrese un numero: ";
    cin >> Numero;

    if (Numero % 2 == 0) {
        cout << "El numero ingresado es par." << endl;
    } else {
        cout << "El numero ingresado es impar." << endl;
    }

    return 0;
}

