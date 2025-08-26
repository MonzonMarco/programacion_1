// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 21
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Ingrese los 2 numeros a multiplicar:"<<endl;
    cin >> a >> b;
    int res = 0;
    for(int i = 0; i < b; i++){
        res += a;
    }
    cout << "El resultado es " << res << endl; 
    return 0;
}