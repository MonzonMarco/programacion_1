// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 15/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

// Verifica si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Suma dígitos distintos de cero
int sumaDigitos(int n) {
    int suma = 0;
    while (n > 0) {
        int d = n % 10;
        if (d != 0) suma += d;
        n = n / 10;
    }
    return suma;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int suma = sumaDigitos(num);

    if (esPrimo(suma)) {
        cout << "La suma de los digitos (" << suma << ") es primo" << endl;
    } else {
        cout << "La suma de los digitos (" << suma << ") no es primo" << endl;
    }
    return 0;
}  