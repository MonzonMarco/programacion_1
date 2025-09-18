// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;

double retirarDinero(double saldo, int cantidad) {
    if (saldo < cantidad) {
        cout << "No tiene saldo suficiente" << endl;
        return saldo; // devuelve el mismo saldo, no 0
    }

    if (cantidad % 10 != 0) {
        cout << "La cantidad no es valida para retirar (debe ser multiplo de 10)" << endl;
        return saldo; // saldo no cambia
    }

    cout << "El retiro es valido" << endl;
    return saldo - cantidad;
}

int main() {
    double saldo;
    int cantidad;

    cout << "Ingrese el saldo: ";
    cin >> saldo;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;

    double nuevoSaldo = retirarDinero(saldo, cantidad);

    if (nuevoSaldo == saldo) {
        cout << "No se realizo la transaccion" << endl;
    } else {
        cout << "Su saldo actual es de: " << nuevoSaldo << endl;
    }

    return 0;
}