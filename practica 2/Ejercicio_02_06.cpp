// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    srand(time(NULL));
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int primos = 0, aleatorio;
    for (int i = 0; i < n; i++) {
        aleatorio = rand() % 10001 + 1;
        if (esPrimo(aleatorio)) {
            cout << aleatorio << " es Primo" << endl;
            primos++;
        } else {
            cout << aleatorio << endl;
        }
    }

    cout << "Se han generado " << primos << " numeros primos" << endl;
    return 0;
}