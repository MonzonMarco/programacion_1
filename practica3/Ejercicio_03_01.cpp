// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 1
#include <bits/stdc++.h>
using namespace std;

void numeroparoimpar(int numero) {
    if (numero % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el numero: ";
    cin >> n;

    numeroparoimpar(n);

    return 0;
}