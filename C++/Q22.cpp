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
        sum += i;
    }

    cout << "The sum of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
