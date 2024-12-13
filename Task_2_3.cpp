//3- delete number in array
#include <iostream>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int size = 10; 
    int num; 
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout<<"\n";
    std::cout << "Enter the number to delete: ";
    std::cin >> num;
    // Find the position of the number
    int pos = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            pos = i;
            break;
        }
    }
    // If the number is not found
    if (pos == -1) {
        std::cout << "Number not found in the array!" << std::endl;
    } else {
        // Shift elements to the left to overwrite the number at 'pos'
        for (int i = pos; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--; // Reduce logical size of the array
        std::cout << "Updated array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
    } std::cout<<"\n";

    return 0;
}
