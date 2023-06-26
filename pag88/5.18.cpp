#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double sum = 0.0;
    
    for (int n = 1; n <= 20; n++) {
        double term = pow(n, 2) / (3 * n);
        sum += term;
    }
    
    cout << "La suma de los 20 primeros términos de la serie es: " << sum << endl;
    
    return 0;
}