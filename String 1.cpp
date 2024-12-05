#include<iostream>
#include<string>
using namespace std;
int largocadena(const string cadena){
    return cadena.length();
}

int main() {
    string cadena;
    cout<<"Ingrese una cadena: ";
    getline(cin,cadena);
    cout<<"La longitud de la cadena es: "<<largocadena(cadena)<<endl;
    return 0;
}

