#include <iostream>

int main() {
    int rows = 5; // Assuming 5 rows based on the image
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}