#include <iostream>
using namespace std;

int main() {
    int totalNotas = 0;
    for (int i = 1; i <= 10; i++) {
        int nota;
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        totalNotas += nota;
    }
    double promedio = totalNotas / 10.0;
    cout << "El promedio general de la sección es: " << promedio << endl;
    return 0;
}
