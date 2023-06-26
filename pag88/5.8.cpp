#include <iostream>
#include <cmath>
using namespace std;
    
int main() {
    double x = 0.0;
    double incremento = 0.5;

    while (x <= 5.0) {
        double resultado = cos(3 * x) - 2 * x;
        cout << "x = " << x << ", f(x) = " << resultado <<endl;
        x += incremento;
    }

    return 0;
}