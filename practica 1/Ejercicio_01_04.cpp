// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 28/08/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

int main()
{
    float radio,volumen;
    const float PI = 3.1416;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    volumen = (4.0/3.0) * PI * (radio*radio*radio);

    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}    