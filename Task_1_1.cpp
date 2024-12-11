#include <iostream>

int main() {
    char c ;
    std::cout<<"Enter The char: "<<std::endl;
    std::cin>>c;
    int ascii_value = int(c); 
    std::cout << "The ASCII value of " << c << " is " << ascii_value << "\n";
    return 0;
}
