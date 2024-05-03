#include <iostream>
using namespace std;

int main() {
    const int longitud = 5;
    int vector1[longitud], vector2[longitud], resultado = 0;
    
    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }
    
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }
    
    for (int i = 0; i < longitud; i++) {
        resultado += vector1[i] * vector2[i];
    }
    
    cout << "El producto punto de los dos vectores es: " << resultado << endl;
    
    return 0;
}
