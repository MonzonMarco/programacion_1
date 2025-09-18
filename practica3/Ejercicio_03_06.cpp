// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 6
#include <bits/stdc++.h>
using namespace std;

bool esbisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int diasdel_mes(int anio, int mes) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (esbisiesto(anio)) return 29;
            else return 28;
        default:
            return -1;
    }
}

int main() {
    int anio, mes;
    cout << "Ingresa el ano: ";
    cin >> anio;
    cout << "Ingresa el mes (1-12): ";
    cin >> mes;

    int dias = diasdel_mes(anio, mes);
    if (dias == -1)
        cout << "Mes invalido" << endl;
    else
        cout << "El mes " << mes << " del ano " << anio << " tiene " << dias << " dias." << endl;

    return 0;
}