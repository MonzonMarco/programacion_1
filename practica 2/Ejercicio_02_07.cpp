// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 7
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad total de ninos en la guarderia: ";
    cin >> N;

    srand(time(0));
    int n1 = rand() % (N + 1);
    int n2 = rand() % (N - n1 + 1);
    int n3 = N - n1 - n2;

    cout << "Ninos de 1 anno: " << n1 << endl;
    cout << "Ninos de 2 annos: " << n2 << endl;
    cout << "Ninos de 3 annos: " << n3 << endl;

    int panales = n1 * 6 + n2 * 3 + n3 * 2;
    cout << "Consumo total de panales por dia: " << panales << " panales" << endl;

    return 0;
}