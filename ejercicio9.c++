#include <iostream>
using namespace std;

int main() {
    const int filas = 2, columnas = 2;
    int matriz1[filas][columnas], matriz2[filas][columnas], resultado[filas][columnas];
    
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }
    
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }
    
    // Multiplicación de matrices
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    
    cout << "El resultado de la multiplicación de matrices es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
