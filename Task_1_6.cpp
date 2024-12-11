//6-summation the digits of integer entered by user
#include<iostream>

int main(){
int num;
int sum;
std::cout << "Enter an integer: ";
std::cin >> num;

// Convert the integer to a string
std::string numStr = std::to_string(num);

// Calculate the sum of digits using string manipulation
for (char digitChar : numStr) {
    int digit = digitChar - '0'; // Convert character to integer
    sum += digit;
}

// Output the result
std::cout << "Sum of digits of " << num << " is: " << sum << std::endl;
}