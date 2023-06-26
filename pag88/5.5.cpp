#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int limiteMaximo, base;

    
    cout << "Ingrese el límite máximo: ";
    cin >> limiteMaximo;

    cout << "Ingrese la base: ";
    cin >> base;

    
    if (limiteMaximo <= 0 || base <= 0) {
        cout << "El límite máximo y la base deben ser enteros positivos." << endl;
        return 0;
    }

   
    int potencia = 1;
    while (potencia < limiteMaximo) {
        cout << potencia << endl;
        potencia *= base;
    }

    return 0;
}