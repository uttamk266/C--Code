#include <iostream>
using namespace std;

int hcf(int a, int b) {
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

    if (hcf(abs(num1), abs(num2)) == 1) {
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
    } else {
        cout << num1 << " and " << num2 << " are not co-prime numbers." << endl;
    }

    return 0;
}
