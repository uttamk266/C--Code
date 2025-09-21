#include <iostream>
using namespace std;

int main() {
    double temp;
    char choice;


    cout << "Enter the temperature value: ";
    cin >> temp;

    
    cout << "Convert to (C)elsius or (F)ahrenheit? Enter C or F: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {

        double celsius = (temp - 32) * 5 / 9;
        cout << temp << "°F is equal to " << celsius << "°C." << endl;
    } 
    else if (choice == 'F' || choice == 'f') {
        
        double fahrenheit = (temp * 9 / 5) + 32;
    }