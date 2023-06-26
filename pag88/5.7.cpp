#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radio;
    
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    
    double area = 4 * M_PI * pow(radio, 2);
    double volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
    
    cout << "El área de la esfera es: " << area << endl;
    cout << "El volumen de la esfera es: " << volumen << endl;
    
    return 0;
}