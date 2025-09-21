#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Enter three characters separated by space: ";
    cin >> ch1 >> ch2 >> ch3;


    cout << "\nCharacter 1: " << ch1 << " | ASCII Code: " << int(ch1) << endl;
    cout << "Character 2: " << ch2 << " | ASCII Code: " << int(ch2) << endl;
    cout << "Character 3: " << ch3 << " | ASCII Code: " << int(ch3) << endl;

    return 0;
}


