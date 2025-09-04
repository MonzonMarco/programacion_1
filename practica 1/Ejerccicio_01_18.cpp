// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 18
#include <iostream>
using namespace std;
int main() 
{
    int num = 2, cont = 0;
    while (cont < 100) 
    {
        int c = 0;
        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0)
            {
                c++;
            }
        }
        if (c == 2) 
        {
            cout << num << " ";
            cont++;
        }
        num++;
    }
    return 0;
}