#include <iostream>

int main() {
    int rows = 5; // Assuming 5 rows for the upper half, total 9 rows for diamond
    // Upper half of the diamond
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}