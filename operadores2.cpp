#include <iostream>
using namespace std;
int main() {
    int numero;

    cout << "digite el número entero: ";
    cin >> numero;

    int doble = numero * 2;
    int triple = numero * 3;

    cout << "El doble de " << numero << " es: " << doble << endl;
    cout << "El triple de " << numero << " es: " << triple << endl;

    return 0;
}
