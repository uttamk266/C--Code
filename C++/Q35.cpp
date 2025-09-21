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


    if (num1 == 0 && num2 == 0) {
        cout << "HCF is not defined for both numbers zero." << endl;
        return 0;
    }

    int result = hcf(abs(num1), abs(num2)); 
    cout << "HCF of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
