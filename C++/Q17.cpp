#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;


    cout << "Enter the start year: ";
    cin >> startYear;
    cout << "Enter the end year: ";
    cin >> endYear;

    if (startYear > endYear) {
        cout << "Invalid range! Start year should be less than or equal to end year." << endl;
        return 0;
    }

    cout << "Leap years between " << startYear << " and " << endYear << " are:\n";

    for (int year = startYear; year <= endYear; year++) {
    
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }
    cout << endl;

    return 0;
}
