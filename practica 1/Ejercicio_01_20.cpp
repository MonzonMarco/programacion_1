// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 20
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero:" << endl;
    cin >> n;
    int digitos = 0;
    while (n > 0){
        digitos = digitos + 1;
        n /= 10;
    }
    
    cout << "La cantidad de digitos del numero es: " << digitos << endl;
    return 0;
}