// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 28/08/2025
// Número de ejercicio: 12

#include <iostream>
using namespace std;

int main() 
{
    int num;

    do {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> num;

        if (num < 1 || num > 5) {
            cout << "Valor invalido. Intente nuevamente." << endl;
        }

    } while (num < 1 || num > 5);

    cout << "Numero valido ingresado: " << num << endl;

    return 0;
}