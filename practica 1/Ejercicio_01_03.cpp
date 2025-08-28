// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 28/08/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int main()
{ 
    float base, altura, area;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    area =(base* altura) /2;
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}

