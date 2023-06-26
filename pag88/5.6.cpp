#include <iostream>
using namespace std;
int main() {
    int m = 30;  
    int sum = 0;  
    int count = 0;  
    int number = 0;  

    while (count < m) {
        if (number % 2 == 0) {  
            sum += number;
            count++;
        }
        number++;
    }

    cout << "La suma de los primeros " << m << " números pares es: " << sum << endl;

    return 0;
}