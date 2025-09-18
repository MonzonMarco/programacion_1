// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 3
#include <bits/stdc++.h>
using namespace std;

bool capicuaes(int numero) {
    int original = numero;
    int invertido = 0;
    while (numero > 0) {
        int digito = numero % 10;
        invertido = (invertido * 10) + digito;
        numero /= 10;
    }
    return original == invertido;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (capicuaes(n)) {
        cout << "El numero ingresado es capicua" << endl;
    } else {
        cout << "El numero ingresado no es capicua" << endl;
    }

    return 0;
}