#include<iostream>
#include<string>
using namespace std;
int main() {
    string cadena;
    char caracter;
    cout<<"Introduce una cadena: ";
    getline(cin, cadena);
    cout<<"Introduce la letra que busca: ";
    cin>>caracter;
    
    int contador = 0;
    
    for (int i = 0; i < cadena.length(); ++i) {
        if (cadena[i] == caracter) {
            contador++;
        }
    }
    
    cout<<"La letra '" <<caracter<<"' aparece "<<contador<<" veces en la cadena."<<endl;
    return 0;
}

