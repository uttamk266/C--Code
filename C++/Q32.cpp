#include <iostream>
using namespace std;

int main() {
    int N;
    long long first = 0, second = 1, next;


    cout << "Enter the position N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 0;
    }

    if (N == 1) {
        cout << "The " << N << "th term is: " << first << endl;
        return 0;
    } 
    if (N == 2) {
        cout << "The " << N << "th term is: " << second << endl;
        return 0;
    }

    
    for (int i = 3; i <= N; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    cout << "The " << N << "th term is: " << second << endl;

    return 0;
}
