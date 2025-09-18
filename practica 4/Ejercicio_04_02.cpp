// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 15/09/2025
// Número de ejercicio: 2
#include <iostream>
#include <cmath>
using namespace std;

// Función que calcula volumen de un cilindro
double CalcularVolumen(double radio, double altura = 10) {
    double volumen = M_PI * radio * radio * altura;
    return volumen;
}

int main() {
    double r, h;
    cout << "Ingrese el radio del cilindro: ";
    cin >> r;
    cout << "Ingrese la altura (si no pone nada usaré 10): ";
    cin >> h;

    if (h == 0) h = 10;
    cout << "El volumen del cilindro es: " << CalcularVolumen(r, h) << endl;

    return 0;
}