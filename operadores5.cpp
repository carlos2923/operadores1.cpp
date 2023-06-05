#include <iostream>
#include <cmath>
using namespace std;
double calcularEnergia(double masa) {
    const double c = 2.997925e10; 

    double energia = masa * c * c;
    return energia;
}

int main() {
    double masa;
    cout << "Ingrese la masa en gramos: ";
    cin >> masa;

    double energiaProducida = calcularEnergia(masa);
    cout << "La cantidad de energía producida es: " << energiaProducida << " ergios" << endl;

    return 0;
}
