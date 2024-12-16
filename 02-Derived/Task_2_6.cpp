//  Write a lambda function to calculate the square of a given number.

#include <iostream>

int main() {
    auto square = [](int x) { return x * x; };  
    int num;
    std::cout << "Enter a number to find its square: ";
    std::cin >> num;
    int result = square(num);
    std::cout << "The square of " << num << " is " << result << std::endl;

    return 0;
}
