// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 14
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero:" << endl;
    cin >> N;
    cout << "El triangulo es: " << endl;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}