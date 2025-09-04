// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 15
#include <iostream>
using namespace std;
int main() 
{
    int N_notas;
    double notas;
    double suma_notas = 0;
    double promedio;
    cout << "Ingrese la cantidad de notas a sumar: " << endl;
    cin >> N_notas;
    for (int i=1 ; i<=N_notas; i++)
    {
        cout << "Ingrese la nota numero: " << i << endl;
        cin >> notas;
        suma_notas += notas;
    }
    promedio = suma_notas / N_notas;
    cout << "El promedio es: "<< promedio << endl ;
    return 0;
}