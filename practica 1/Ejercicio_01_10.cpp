// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;

int main()
{
    char caracter;
    cout << "ingrese un caracter" << endl;
    cin >> caracter;
    if((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')){
        if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' || caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
            cout << "Es una vocal" << endl;
        } else {
            cout << "Es consonante" << endl;
        }
    }else {
        cout << "Es un caracter especial" << endl;
    }
    return 0;
}