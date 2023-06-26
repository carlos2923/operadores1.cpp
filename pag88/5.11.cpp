#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    int numero;
    int maximo = INT_MIN; 
    int minimo = INT_MAX; 
    int suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> numero;

        if (numero > maximo) {
            maximo = numero;
        }

        if (numero < minimo) {
            minimo = numero;
        }

        suma += numero;
    }

    double media = static_cast<double>(suma) / n;

    cout << "El número más grande es: " << maximo << endl;
    cout << "El número más pequeño es: " << minimo << endl;
    cout << "La media es: " << media << endl;

    return 0;
}