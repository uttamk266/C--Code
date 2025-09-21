#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 == 0 || num2 == 0) {
        cout << "LCM is not defined for zero." << endl;
        return 0;
    }


    int lcm = abs(num1 * num2) / gcd(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
