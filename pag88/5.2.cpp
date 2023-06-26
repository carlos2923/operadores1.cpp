#include <iostream>
using namespace std:
int main() {
    int n = 4;  
    int mid = n / 2;
     for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout <<endl;
    }
    
    for (int i = 1; i <= n; i++) {
        cout << i;
    }
    cout <<endl;
    
    
    for (int i = mid; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout <<endl;
    }
    
    return 0;
}









