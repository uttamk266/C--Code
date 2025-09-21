#include <iostream>
#include <cmath>
using namespace std;


int countDigits(int num) {
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}


bool isArmstrong(int num) {
    int sum = 0, temp = num, remainder;
    int digits = countDigits(num);

    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
