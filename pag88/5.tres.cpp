#include <iostream>
using namespace std;
int main() {
    int numeros[10];
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }
    cout << "numeros positivos: " << positivos << endl;
    cout << "numeros negativos: " << negativos << endl;
    cout << "ceros: " << ceros << endl;

    return 0;
}