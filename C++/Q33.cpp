#include <iostream>
using namespace std;

int main() {
    int N;
    long long first = 0, second = 1, next;

    
    cout << "Enter the number of terms (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 0;
    }

    cout << "First " << N << " terms of the Fibonacci series: ";

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
