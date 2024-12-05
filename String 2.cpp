#include<iostream>
#include<string>
using namespace std;
string concatenarcadenas(const string cadena1, const string cadena2){
    return cadena1+cadena2;
}
int main() {
    string cadena1,cadena2;
    cout<<"Ingrese la primera cadena: ";
    getline(cin,cadena1);
    
    cout<<"Ingrese la segunda cadena: ";
    getline(cin,cadena2);
    cout<<"La concatenacion de ambas cadenas es: "<<concatenarcadenas(cadena1,cadena2)<<endl;
    return 0;
}

