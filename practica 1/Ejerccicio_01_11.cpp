// Materia: ProgramaciÃ³n I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creaciÃ³n: 04/09/2025
// NÃºmero de ejercicio: 11
#include <iostream>
using namespace std;
int main() 
{
    int mes = 0;
    cout << "Ingrese un numero de mes entre 1 y 12: " << endl;
    cin >> mes;
    if (mes == 1)
        cout << "Enero" << endl;
    else if (mes == 2)
        cout << "Febrero" << endl;
    else if (mes == 3)
        cout << "Marzo" << endl;
    else if (mes == 4)
        cout << "Abril" << endl;
    else if (mes == 5)
        cout << "Mayo" << endl;
    else if (mes == 6)
        cout << "Junio" << endl;
    else if (mes == 7)
        cout << "Julio" << endl;
    else if (mes == 8)
        cout << "Agosto" << endl;
    else if (mes == 9)
        cout << "Septiembre" << endl;
    else if (mes == 10)
        cout << "Octubre" << endl;
    else if (mes == 11)
        cout << "Noviembre" << endl;
    else if (mes == 12)
        cout << "Diciembre" << endl;
    else
        cout << "Mes invalido" << endl;
    return 0;
}