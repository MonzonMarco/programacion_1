// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;

double calcularTarifa(double kmRecorridos) {
    double costo = 10.0;
    costo += (kmRecorridos * 2.0);
    if (kmRecorridos > 10.0) {
        costo -= (costo * 0.1); // 10% de descuento
    }
    return costo;
}

int main() {
    double recorrido;
    cout << "Ingrese el recorrido del viaje en taxi: ";
    cin >> recorrido;

    double costo = calcularTarifa(recorrido);
    cout << "El costo del viaje es de: " << costo << endl;

    return 0;
}