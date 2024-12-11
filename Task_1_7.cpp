//7-change from decimal to binary and vice versa
#include <iostream>
#include <bitset>
#include <string>  

int decimal1;

int main() {
    
    std::cout << "Enter the decimal number: ";
    std::cin >> decimal1;
    std::bitset<8> binary1(decimal1);  
    std::cout << "The binary representation: " << binary1 << std::endl;
    std::string binaryStr;  
    std::cout << "Enter the binary number: ";
    std::cin >> binaryStr;
    std::bitset<8> binary2(binaryStr);  
    int decimal2 = binary2.to_ulong(); 
    std::cout << "The decimal representation: " << decimal2 << std::endl;
    return 0;
}
