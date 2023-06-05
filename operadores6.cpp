#include <iostream>
using namespace std;
int main() {
    double pies;

    cout << "Ingrese la medida en pies: ";
    cin >> pies;

    double yardas = pies / 3.0;
    double pulgadas = pies * 12.0;
    double centimetros = pulgadas * 2.54;
    double metros = centimetros / 100.0;

    cout << "La medida en yardas es: " << yardas << endl;
    cout << "La medida en pies es: " << pies << endl;
    cout << "La medida en pulgadas es: " << pulgadas << endl;
    cout << "La medida en centímetros es: " << centimetros << endl;
    cout << "La medida en metros es: " << metros << endl;

    return 0;
}
