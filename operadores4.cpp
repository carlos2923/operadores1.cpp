#include <iostream>
#include <cmath>
using namespace std;
double calcularFuerzaAtraccion(double m1, double m2, double d) {
    const double G = 6.673 * 10–8 cm3/g. seg2 

    double fuerza = (G * m1 * m2) / (d * d);
    return fuerza;
}

int main() {
    double masa1, masa2, distancia;
    cout << "Ingrese la masa m1: ";
    cin >> masa1;
    cout << "Ingrese la masa m2: ";
    cin >> masa2;
    cout << "Ingrese la distancia d: ";
    cin >> distancia;

    double fuerzaAtraccion = calcularFuerzaAtraccion(masa1, masa2, distancia);
    cout << "La fuerza de atracción es: " << fuerzaAtraccion << " N" << endl;

    return 0;
}
