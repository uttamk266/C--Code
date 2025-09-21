#include <iostream>
using namespace std;

int main() {
    int asciiCode;
    

    cout << "Enter an ASCII code (0-127): ";
    cin >> asciiCode;


    if (asciiCode < 0 || asciiCode > 127) {
        cout << "Invalid ASCII code!" << endl;
    } else {
    
        char character = static_cast<char>(asciiCode);
        cout << "The character corresponding to ASCII code " << asciiCode << " is: " << character << endl;
    }

    return 0;
}
