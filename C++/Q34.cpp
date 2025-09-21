#include <iostream>
using namespace std;

int main() {
    long long num;
    long long first = 0, second = 1, next = 0;


    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << num << " is not in the Fibonacci series." << endl;
        return 0;
    }

    if (num == 0 || num == 1) {
        cout << num << " is in the Fibonacci series." << endl;
        return 0;
    }

    
    while (next < num) {
        next = first + second;
        first = second;
        second = next;
    }

    if (next == num) {
        cout << num << " is in the Fibonacci series." << endl;
    } else {
        cout << num << " is not in the Fibonacci series." << endl;
    }

    return 0;
}
