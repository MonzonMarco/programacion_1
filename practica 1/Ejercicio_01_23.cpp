// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 23
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    int inv = 0;
    while(n > 0){
        int r = n % 10;
        inv += r;
        inv *= 10;
        n /= 10;
    }
    
    cout << "El numero invertido es " << inv / 10 << endl;
    return 0;
}