//multiplication table
#include <iostream>
int num;

int main()
{
 std::cout << "Enter a number: ";
 std::cin >> num;
 std::cout << "Multiplication table of " << num << ":" << std::endl;
 for (int i = 1; i <= 10; i++) 
 {
    std::cout << num << " * " << i << " = " << num * i << std::endl;
 }

    return 0;
}