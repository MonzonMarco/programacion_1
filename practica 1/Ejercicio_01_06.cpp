// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 28/08/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num > 0) {
        cout << "El numero es positivo" << endl;
    } else if (num < 0) {
        cout << "El numero es negativo" << endl;
    } else {
        cout << "El numero es cero" << endl;
    }
    return 0;
}