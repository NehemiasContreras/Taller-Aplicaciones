#include <iostream>
#include <string>
using namespace std;
int main() {
    string palabra;
    cout<<"Introduce una palabra: ";
    cin>>palabra;    
    string reverso;
    for (int i = palabra.length() - 1; i >= 0; --i) {
        reverso += palabra[i];
    }
    cout<<"Palabra invertida: "<<reverso<<endl;
    return 0;
}

