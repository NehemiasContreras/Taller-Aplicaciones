#include <iostream>
using namespace std;
int main() {
    int sumatoria = 0;
    int numero;

    cout<<"Ponga un numero del 1 al 100 y sumaremos los que sean pares:"<<endl;
    cin>>numero;
    
    for (int i = 2; i <= numero; i += 2) {
        cout << i << "-";
        sumatoria += i;
    }

    cout<<"La sumatoria de los numeros pares es:"<<sumatoria<<endl;

    return 0;
}

