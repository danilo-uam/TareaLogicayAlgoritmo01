#include <iostream>
using namespace std;

int main() {
    int aprobados = 0, reprobados = 0, totalNotas = 0;
    for (int i = 1; i <= 8; i++) {
        int nota;
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        totalNotas += nota;
        if (nota >= 70)
            aprobados++;
        else
            reprobados++;
    }
    double promedio = totalNotas / 8.0;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;
    return 0;
}
