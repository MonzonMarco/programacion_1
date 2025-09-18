// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 15/09/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

// Convierte de Celsius a Fahrenheit
double ConvertirCelsiusAFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

// Devuelve la mayor temperatura
double MayorTemperatura(double t1, double t2) {
    if (t1 > t2) return t1;
    else return t2;
}

int main() {
    double t1, t2;
    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> t1;
    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> t2;

    cout << t1 << "°C = " << ConvertirCelsiusAFahrenheit(t1) << "°F" << endl;
    cout << t2 << "°C = " << ConvertirCelsiusAFahrenheit(t2) << "°F" << endl;

    cout << "La mayor temperatura es: " << MayorTemperatura(t1, t2) << "°C" << endl;
    return 0;
}