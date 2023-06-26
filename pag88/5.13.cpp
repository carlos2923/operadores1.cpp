#include <iostream>
using namespace std;
int main() {
    for (int i = 100; i <= 999; i++) {
        int num = i;
        int sum_of_squares = 0;
        while (num > 0) {
            int digit = num % 10;
            sum_of_squares += digit * digit;
            num /= 10;
        }
        if (sum_of_squares == i / 3) {
            cout << i << endl;
        }
    }

    return 0;
}