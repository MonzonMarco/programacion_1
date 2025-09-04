// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 13
#include <iostream>
using namespace std;
int main() 
{
    int numero = 0;
    int suma = 0;
    int i;
    cout << "Ingrese los numeros: " << endl;
    cin >> numero;
    for ( i = 1 ; i <= numero ; i++)
        suma += i;
    cout << "La suma de los numeros es: " << suma << endl ;
    return 0;
}