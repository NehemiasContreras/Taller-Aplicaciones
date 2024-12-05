#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string apellido;
    string curso;
    string materia;
    int calificaciones[3];
};

void inicializar(Alumno &alumno) {
    cout << "Ingrese el nombre del alumno: ";
    cin >> alumno.nombre;
    cout << "Ingrese el apellido del alumno: ";
    cin >> alumno.apellido;
    cout << "Ingrese el curso del alumno: ";
    cin >> alumno.curso;
    cout << "Ingrese la materia: ";
    cin >> alumno.materia;
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese la calificacion del trimestre " << i + 1 << ": ";
        cin >> alumno.calificaciones[i];
    }
}

double calcularPromedio(const Alumno &alumno) {
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        suma += alumno.calificaciones[i];
    }
    return suma / 3.0;
}

string calcularCondicion(const Alumno &alumno) {
    for (int i = 0; i < 3; i++) {
        if (alumno.calificaciones[i] <5) {
            return "Reprobado - debe recursar la materia";
        } else if (alumno.calificaciones[i] < 7) {
            return "Recuperacion - puede recuperar el trimestre";
        }
    }
}

void imprimir(const Alumno &alumno) {
    double promedio = calcularPromedio(alumno);
    string condicion = calcularCondicion(alumno);

    cout << "Resultados:";
    cout << "Nombre: " << alumno.nombre << " " << alumno.apellido << endl;
    cout << "Curso: " << alumno.curso << endl;
    cout << "Materia: " << alumno.materia << endl;
    cout << "Promedio final: " << promedio << endl;
    cout << "Condicion: " << condicion << endl;
}

int main() {
    Alumno alumno;
    inicializar(alumno);
    imprimir(alumno);
    return 0;
}

