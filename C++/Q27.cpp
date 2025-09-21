#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1; 


    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return 0;
    }


    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
