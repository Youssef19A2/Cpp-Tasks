//4- merge two arrays together
#include <iostream>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = 4; 
    int size2 = 5; 
    // Calculate the size of the merged array
    int mergedSize = size1 + size2;
    int merged[mergedSize]; 
    for (int i = 0; i < size1; ++i) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        merged[size1 + i] = arr2[i];
    }
    std::cout << "Merged array: ";
    for (int i = 0; i < mergedSize; ++i) {
        std::cout << merged[i] << " ";
    }
std::cout<<"\n";
    return 0;
}
