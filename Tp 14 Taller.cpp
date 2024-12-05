#include <iostream>
using namespace std;
int main() {
    int cantidadnumeros;
    int numero;
    int pares =0;
    int impares =0;

    cout<<"Ingrese la cantidad de numeros que desea ingresar: ";
    cin>>cantidadnumeros;

    for (int i = 0; i < cantidadnumeros; i++) {
        cout<<"Ingrese el numero:"<<endl;
        cin>>numero;

        if (numero %2==0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout<<"Cantidad de numeros pares:"<<pares<<endl;
    cout<<"Cantidad de numeros impares:"<<impares<<endl;

    return 0;
}

