//5-multiplication table
#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number to print its multiplication table: ";
    std::cin >> number;

    std::cout << "Multiplication table of " << number << ":"<<std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }

    return 0;
}