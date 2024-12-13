//5-find the even and odd numbers in the array
#include <iostream>

int main() {
    // Input array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10; 
    std::cout << "Even numbers: ";
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout<<"\n";
    std::cout << "Odd numbers: ";
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout<<"\n";
    return 0;
}
