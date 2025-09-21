#include <iostream>

int main() {
    int rows = 5; // Assuming 5 rows based on the image
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}