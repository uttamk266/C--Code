#include <iostream>
#include <string>
using namespace std;

int main() {
    string date;

    cout << "Enter date in dd/mm/yyyy format: ";
    cin >> date;

    if (date.length() == 10 && date[2] == '/' && date[5] == '/') {
        string day = date.substr(0, 2);
        string month = date.substr(3, 2);
        string year = date.substr(6, 4);


        cout << "Date in dd-mm-yyyy format: " << day << "-" << month << "-" << year << endl;
    } else {
        cout << "Invalid date format!" << endl;
    }

    return 0;
}
