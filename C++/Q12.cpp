#include <iostream>
using namespace std;

int main() {
    int age;

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age!" << endl;
    } 
    else if (age <= 12) {
        cout << "You are a Child." << endl;
    } 
    else if (age <= 19) {
        cout << "You are a Teenager." << endl;
    } 
    else if (age <= 59) {
        cout << "You are an Adult." << endl;
    } 
    else {
        cout << "You are a Senior Citizen." << endl;
    }

    return 0;
}