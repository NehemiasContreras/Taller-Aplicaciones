#include <iostream>
using namespace std;
int main() {
    int suma= 0;

    cout<<"Esto es:"<<endl;
    
    for (int i = 1; i <= 300; i=i+ 2) {
        cout << i << " - ";
        suma += i;
    }

    cout<<"La suma de los numeros inpares es:"<<suma<<endl;

    return 0;
}
