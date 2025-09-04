// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 22
#include <iostream>
using namespace std;
int main() 
{
    int num_a, num_b;
    cout << "Ingrese el 1er numero: " << endl ;
    cin >> num_a ;
    cout << "Ingrese el 2do numero: " << endl ;
    cin >> num_b ;
    if (num_a % num_b == 0)
    {
        cout << num_a << " es multiplo de " << num_b;
    }
    else if (num_b % num_a == 0) 
    {
        cout << num_b << " es multiplo de " << num_a;
    }
    else
    {
        cout << "Ninguno es multiplo del otro";
    }
    return 0;
}