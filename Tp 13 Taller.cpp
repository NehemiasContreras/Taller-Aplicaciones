#include <iostream>
using namespace std;
int main() {
    int inicio=11;
    int incremento=11;

    cout<<"Los 25 terminos de la serie son:"<<endl;

    for (int i = 0; i < 25; ++i) {
        cout<<inicio<<"-";
        inicio += incremento;
    }


    return 0;
}

