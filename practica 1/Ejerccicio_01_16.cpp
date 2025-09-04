// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 16
#include <iostream>
using namespace std;
int main() 
{
    int numero;
    int contador = 0;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    for (int i = 1; i <= numero; i++)
        if (numero % i == 0)
            contador++;
    if (contador == 2)
        cout << "El numero " << numero << " es primo" << endl;
    else
        cout << "El numero " << numero << " no es primo" << endl;
    return 0;
}