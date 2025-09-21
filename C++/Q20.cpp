#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, largest;


    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;


    largest = a;

    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (d > largest) {
        largest = d;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
