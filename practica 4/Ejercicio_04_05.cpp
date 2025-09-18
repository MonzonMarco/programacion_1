// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 15/09/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

// Función que calcula salario
double CalcularSalario(int horas, double tarifa) {
    double salario;
    if (horas <= 8) {
        salario = horas * tarifa;
    } else {
        int extra = horas - 8;
        salario = (8 * tarifa) + (extra * tarifa * 1.5);
    }
    return salario;
}

int main() {
    int horas;
    double tarifa;
    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;

    cout << "El salario total es: " << CalcularSalario(horas, tarifa) << endl;
    return 0;
}
