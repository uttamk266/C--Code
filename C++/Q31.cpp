#include <iostream>
using namespace std;

int main() {
    long long num, reversed = 0;
    int digit;


    cout << "Enter a number: ";
    cin >> num;

    long long originalNum = num; 
    if (num < 0) {
        num = -num; 
    }

    
    while (num != 0) {
        digit = num % 10;       
        reversed = reversed * 10 + digit; 
        num /= 10;              
    }

    if (originalNum < 0) {
        reversed = -reversed; // 
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
