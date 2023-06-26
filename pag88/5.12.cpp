#include <iostream>
using namespace std;
int main() {
    int limite;
    cout << "Ingrese el límite: ";
    cin >> limite;
    int n = 0;
    int suma = 0;
    while (suma <= limite) {
        n++;
        suma += (n * n - n - 2);
    }
    cout << "El número natural más pequeño (n) cuya suma excede " << limite << " es: " << n <<endl;

    return 0;
}




