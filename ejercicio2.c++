#include <iostream>
using namespace std;

int main() {
    cout << "Números impares en orden descendente entre 1 y 100:" << endl;
    for (int i = 99; i >= 1; i -= 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
