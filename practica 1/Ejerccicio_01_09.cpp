// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 9
#include <iostream>
using namespace std;
int main() 
{
    int edad = 0;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if (edad > 0 && edad <= 12)
    {
        cout << "Usted es un ninto" << endl;
    }
    else if (edad > 12 && edad <= 18)
    {
        cout << "Usted es adolescente" << endl;
    }
    else if (edad > 18 && edad <= 60)
    {
        cout << "Usted es mayor de edad" << endl;
    }
    else if (edad <= 0)
    {
    	cout << "Edad ivalida" << endl;
	}
    else
    {
        cout << "Usted es adulto mayor" << endl;
    }
    return 0;
}