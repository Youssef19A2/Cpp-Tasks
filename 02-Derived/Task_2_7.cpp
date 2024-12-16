// Use lambda functions to sort an array of integers in ascending and descending order.

#include <iostream>
#include <algorithm> 

int main() {
    int arr[] = {10, 3, 5, 2, 8, 1, 7, 6, 4, 9};
    int size = sizeof(arr) / sizeof(arr[0]); 
    std::sort(arr, arr + size, [](int a, int b) { return a < b; });

    std::cout << "Array sorted in ascending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    std::sort(arr, arr + size, [](int a, int b) { return a > b; });
    std::cout<<"\n";
    std::cout << "Array sorted in descending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout<<"\n";
    return 0;
}
