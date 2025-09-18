// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Ventas(int n) {
    srand(time(0));
    double total = 0;

    for (int i = 1; i <= n; i++) {
        double precio = 20 + rand() % 31; // entre 20 y 50
        cout << "Producto " << i << ": " << precio << endl;
        total += precio;
    }

    double iva = total * 0.13;
    double montoFinal = total + iva;

    if (montoFinal > 2500) {
        montoFinal = montoFinal - (montoFinal * 0.05);
    }

    cout << "Total ventas: " << total << endl;
    cout << "IVA (13%): " << iva << endl;
    cout << "Monto final: " << montoFinal << endl;
}

int main() {
    int n;
    cout << "Ingrese cantidad de productos vendidos: ";
    cin >> n;
    Ventas(n);
    return 0;
}
