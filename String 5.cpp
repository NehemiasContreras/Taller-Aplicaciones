#include <iostream>
#include <string>
using namespace std;
int main() {
    string cadena;
    cout<<"Introduce una cadena: ";
    getline(cin, cadena);
    int contador = 0;
    for (int i = 0; i < cadena.length(); ++i) {
        if ((cadena[i] >= 'A' && cadena[i] <= 'Z') , (cadena[i] >= 'a' && cadena[i] <= 'z')) {
            contador++;
        }
    }
    
    cout<<"La cadena contiene "<<contador<<" letras."<<endl;
    return 0;
}

