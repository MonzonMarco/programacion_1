// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 10 + 1;
    long long factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Numero aleatorio generado: " << num << endl;
    cout << "Factorial de " << num << " es: " << factorial << endl;

    return 0;
}