#include <iostream>
using namespace std;

int main() {
    int billetes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int monedas[] = {50, 20, 10, 5, 2, 1};
    int cantidad;

    cout << "Ingrese la cantidad en euros: ";
    cin >> cantidad;

    cout << "Desglose de billetes y monedas:\n";

    
    for (int i = 0; i < 9; i++) {
        int numBilletes = cantidad / billetes[i];
        if (numBilletes > 0) {
            cout << numBilletes << " billete(s) de " << billetes[i] << " euros\n";
            cantidad %= billetes[i];
        }
    }

    
    for (int i = 0; i < 6; i++) {
        int numMonedas = cantidad / monedas[i];
        if (numMonedas > 0) {
            cout << numMonedas << " moneda(s) de " << monedas[i] << " euros\n";
            cantidad %= monedas[i];
        }
    }

    return 0;
}
