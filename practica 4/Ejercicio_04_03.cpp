// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 15/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

// Función que modifica un valor y otro por referencia
void ModificarValores(int valor, int &ref) {
    valor = valor * 2;     // por valor
    ref = ref + 10;        // por referencia
    cout << "Dentro de la funcion -> valor=" << valor << ", ref=" << ref << endl;
}

int main() {
    int a, b;
    cout << "Ingrese un numero (por valor): ";
    cin >> a;
    cout << "Ingrese otro numero (por referencia): ";
    cin >> b;

    ModificarValores(a, b);

    cout << "Fuera de la funcion -> a=" << a << ", b=" << b << endl;
    return 0;
}