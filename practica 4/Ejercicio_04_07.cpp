// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

// Máximo Común Divisor (Euclides)
int MCD(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

// Mínimo Común Múltiplo
int MCM(int m, int n) {
    return (m * n) / MCD(m, n);
}

int main() {
    int m, n;
    cout << "Ingrese m: ";
    cin >> m;
    cout << "Ingrese n: ";
    cin >> n;

    cout << "MCD = " << MCD(m, n) << endl;
    cout << "MCM = " << MCM(m, n) << endl;

    return 0;
}