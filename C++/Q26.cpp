#include <iostream>
using namespace std;

int main() {
    int N;
    long long sum = 0; // Use long long for larger numbers


    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 0;
    }

    
    for (int i = 1; i <= N; i++) {
        sum += i * i * i;
    }

    cout << "The sum of cubes of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
