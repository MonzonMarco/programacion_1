// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 15/09/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

// Función que intercambia los valores de dos variables
void IntercambiarValores(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

int main() {
    int x, y;
    cout << "Ingrese el primer valor: ";
    cin >> x;
    cout << "Ingrese el segundo valor: ";
    cin >> y;

    cout << "Antes -> x=" << x << " y=" << y << endl;
    IntercambiarValores(x, y);
    cout << "Despues -> x=" << x << " y=" << y << endl;

    return 0;
}