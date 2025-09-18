// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 12/09/2025
// Número de ejercicio: 4
#include <bits/stdc++.h>
using namespace std;

double calcularIMC(double peso, double altura) {
    return peso / pow(altura, 2);
}

int main() {
    double peso, altura, imc;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    imc = calcularIMC(peso, altura);
    cout << "Tu IMC es: " << imc << endl;

    if (imc < 18.5) {
        cout << "Bajo de peso" << endl;
    } else if (imc < 25) {
        cout << "Normal" << endl;
    } else if (imc < 30) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidad" << endl;
    }

    return 0;
}