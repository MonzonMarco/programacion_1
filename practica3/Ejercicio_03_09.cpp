// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

double tiempoTrabajado(int minutos) {
    double horas = minutos / 60.0;
    return horas - 8.0;
}

void mostrarResultado() {
    int minutos;
    cout << "Ingrese la cantidad de minutos trabajados: ";
    cin >> minutos;

    double horas = tiempoTrabajado(minutos);

    if (horas == 0) {
        cout << "Ha trabajado 8 horas exactas" << endl;
    } else if (horas < 0) {
        cout << "Ha trabajado menos horas" << endl;
        cout << "Le debe a la empresa: " << (-1) * horas << " horas de trabajo" << endl;
    } else if (horas > 0) {
        cout << "Ha trabajado horas extra" << endl;
        cout << "La empresa le debe pagar " << horas << " horas extra" << endl;
    }
}

int main() {
    mostrarResultado();
    return 0;
}