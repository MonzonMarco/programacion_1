
// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 19
#include <iostream>
using namespace std;
int main() 
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    for (int i = 1; i <= 10; i++) 
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}
