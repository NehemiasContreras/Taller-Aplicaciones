#include <iostream>
#include<conio.h>
using namespace std;
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();

int main() {
    int opcion;

    do {
        cout << "Menu de ejercicios:" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Ejercicio 4" << endl;
        cout << "5. Ejercicio 5" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese el numero de ejercicio que quiera ver: ";
        cin >> opcion;


        switch (opcion) {
            case 1:
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                ejercicio5();
                break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no valida."<< endl;
        }

        cout <<""<<endl;

    } while (opcion != 6);

    return 0;
}

void ejercicio1() {
    cout << "Ejecutando Ejercicio 1..." << endl;
	int numeros;
	cout <<"Ingrese un numero,desde -9 hasta 9:";
	cin >> numeros;
	if(numeros >0){
		cout<<"Numero Positivo"<<endl;
	} else if (numeros ==0){
		cout<<"Numero Nulo"<<endl;
	} else if (numeros <0){
		cout<<"Numero Negativo"<<endl;
	}
}

void ejercicio2() {
    cout << "Ejecutando Ejercicio 2..." << endl;
    	int A,B;
	int resultado1,resultado2,resultado3,resultado4;
	cout <<"Ingrese el primer numero:"<<endl;
	cin >> A;
	cout <<"Ingrese el segundo numero:"<<endl;
	cin >> B;
	
	if(A>B){
		resultado1 = A+B;
		resultado2 = A-B;
	}
	else if(A<B){
		resultado3 = B*A;
		resultado4 = B/A;
	}
	
	cout <<"La suma es:"<<resultado1<<endl;
	cout <<"La diferencia es de:"<<resultado2<<endl;
	cout <<"La multiplicacion es:"<<resultado3<<endl;
	cout <<"La division es:"<<resultado4<<endl;
}

void ejercicio3() {
    cout << "Ejecutando Ejercicio 3..." << endl;
 int C,D,E;

    cout<<"Ingrese el primer numero: ";
    cin>>C;
    cout<<"Ingrese el segundo numero: ";
    cin>>D;
    cout<<"Ingrese el tercer numero: ";
    cin>>E;

    if (C==D,C==E,D==E) {
        cout<<"Error, los numeros deben ser diferentes."<<endl;
    }

    int mayor,menor;
    mayor=menor=C;

    if (D>mayor) mayor=D;
    if (E>mayor) mayor=E;

    if (D<menor) menor=D;
    if (E<menor) menor=E;

    cout<<"El numero mayor es:"<<mayor<<endl;
    cout<<"El numero menor es:"<<menor<<endl;
}

void ejercicio4() {
    cout << "Ejecutando Ejercicio 4..." << endl;
     float nota1, nota2, nota3;
    float promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7) {
        cout << "El alumno tiene TEA" << endl;
    } 
	else if (promedio >= 4) {
		cout << "El alumno tiene TEP" << endl;
	}
    else if(promedio <= 3) {
	cout << "El alumno tiene TED" << endl;
	}
}

void ejercicio5() {
    cout << "Ejecutando Ejercicio 5..." << endl;
      int Numero;

    cout << "Ingrese un numero: ";
    cin >> Numero;

    if (Numero % 2 == 0) {
        cout << "El numero ingresado es par." << endl;
    } else {
        cout << "El numero ingresado es impar." << endl;
    }
    getch();
}

