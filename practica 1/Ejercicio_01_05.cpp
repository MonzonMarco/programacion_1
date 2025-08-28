// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 28/08/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

int main()
{
    float celsius,kelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    kelvin = celsius + 273.15;

    cout << "La temperatura en kelvin es: " << kelvin <<endl;
    return 0;
}