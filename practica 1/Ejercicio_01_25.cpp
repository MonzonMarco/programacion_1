// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 25
#include <iostream>
using namespace std;

int main()
{
    int n;
    char continuar;
    do {
        cout << "Ingrese el numero del que quiere generar su tabla" << endl;
        cin >> n;
        for(int i = 1; i <= 10; i++){
            int res = n * i;
            cout << n << " x " << i << " = " << res << endl;
        }
        cout << endl;
        cout << "Desea generar otra tabla? (s/n)" << endl;
        cin >> continuar;
    } while (continuar == 's');
    return 0;
}