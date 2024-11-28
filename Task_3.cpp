//summation the digits of integer entered by user
#include <iostream>
int num_1;
int sum = 0;
int main()
{
std::cout<<"Enter The Number: "<<std::endl;
std::cin>>num_1;

while (num_1 > 0) 
{
sum += num_1 % 10; 
num_1 /= 10;       
 }
 std::cout << "The sum of the digits is: " << sum << std::endl;
    return 0;
}
