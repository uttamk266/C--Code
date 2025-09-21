#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;

    
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 0;
    }


    for (int i = 1; i <= N; i++) {
        sum += (2 * i - 1); // Odd numbers: 1, 3, 5, ...
    }

    cout << "The sum of first " << N << " odd natural numbers is: " << sum << endl;

    return 0;
}
