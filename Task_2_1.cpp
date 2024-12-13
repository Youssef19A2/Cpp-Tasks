//1- create a function to find the maximum number of array
#include <iostream>
#include <algorithm> 

int array1[] = {0, 1, 2, 3, 4, 5, 6,900, 7, 8, 9, 10,300}; 

void FindMax() {
    int n = sizeof(array1) / sizeof(array1[0]); 
    int maxNum = *std::max_element(array1, array1 + n); 
    std::cout << "Maximum number is: " << maxNum << std::endl;
}

int main() {
    FindMax(); 
    return 0;
}
