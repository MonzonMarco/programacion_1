// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 24
#include <iostream>
using namespace std;

int main()
{
    int opcion;
    do {
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;
        if(opcion == 1){
            cout << "Ha elegido la opcion 1 " << endl << endl;
        }else if (opcion == 2) {
            cout << "Ha elegido la opcion 2 " << endl << endl;
        }else if (opcion == 3) {
            cout << "Ha elegido la opcion 3 " << endl << endl;
        }else if(opcion == 0) {
            cout << "Ha salido del sistema" << endl;
        }else {
            cout << "Elija una opcion valida" << endl << endl;
        }
    }while(opcion != 0);
    return 0;
}