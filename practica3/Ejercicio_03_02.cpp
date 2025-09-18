// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 2
#include <bits/stdc++.h>
using namespace std;

double celsiusafarenheid(double celsius) {
    return ((celsius * 9.0 / 5.0) + 32);
}

int main() {
    double gradosC, gradosF;
    cout << "Ingrese el valor en grados Celsius: ";
    cin >> gradosC;

    gradosF = celsiusafarenheid(gradosC);
    cout << gradosC << " C equivalen a " << gradosF << " F" << endl;

    return 0;
}