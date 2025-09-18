// Materia: Programación I, Paralelo 4
// Autor: Marco Alejandro Monzon Gutierrez
// Carnet: 12767717 L.P.
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de giros que desee dar: ";
    cin >> n;
    srand(time(0));

    int caras = 0, cruces = 0;
    for (int i = 0; i < n; i++) {
        int lanzamiento = rand() % 2;
        if (lanzamiento == 0)
            caras++;
        else
            cruces++;
    }

    double porcentajedecaras = (caras * 100.0) / n;
    double porcentajedecruces = (cruces * 100.0) / n;

    cout << "Cantidad de caras: " << caras << " (" << porcentajedecaras << "%)" << endl;
    cout << "Cantidad de cruces: " << cruces << " (" << porcentajedecruces << "%)" << endl;

    return 0;
}