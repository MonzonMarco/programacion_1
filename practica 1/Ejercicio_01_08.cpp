// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 28/08/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

int main() 
{
    int numer;

    cout << "Ingrese un numero entero: ";
    cin >> numer;

    if (numer % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    return 0;
}