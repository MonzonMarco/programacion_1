// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 18/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

// Función que calcula sueldo
double CalcularSueldo(double basico, double ventas) {
    double comision = ventas * 0.10;
    return basico + comision;
}

int main() {
    int n;
    cout << "Ingrese el numero de vendedoras: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double basico, ventas;
        cout << "\nVendedora " << i << endl;
        cout << "Sueldo basico: ";
        cin >> basico;
        cout << "Total ventas: ";
        cin >> ventas;

        double sueldo = CalcularSueldo(basico, ventas);
        cout << "El sueldo total de la vendedora " << i << " es: " << sueldo << endl;
    }

    return 0;
}