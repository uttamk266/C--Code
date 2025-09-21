#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;
    cout << "Enter time in 24-hour format (HH:MM): ";
    cin >> time;

    // Validate input length and format
    if (time.length() == 5 && time[2] == ':') {
        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));
        string meridian = "AM";

        if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60) {
            if (hour >= 12) {
                meridian = "PM";
                if (hour > 12) hour -= 12;  // Convert to 12-hour format
            }
            if (hour == 0) hour = 12; // Midnight case

            // Display result
            cout << "Time in 12-hour format: ";
            if (hour < 10) cout << "0"; // Leading zero if needed
            cout << hour << ":";
            if (minute < 10) cout << "0";
            cout << minute << " " << meridian << endl;
        } else {
            cout << "Invalid time!" << endl;
        }
    } else {
        cout << "Invalid format! Please use HH:MM." << endl;
    }

    return 0;
}