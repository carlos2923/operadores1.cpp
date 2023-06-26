#include <iostream>
using namespace std;

int main() {
    char currentChar = 'Z';

    while (currentChar >= 'A') {
        for (char c = currentChar; c >= 'A'; c--) {
            cout << c;
        }
        cout << endl;
        currentChar--;
    }

    return 0;
}