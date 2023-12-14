#include <iostream>
#include <algorithm>
int main() {
    const int size = 15;
    int values[size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    // a) Print values stored in the array
    std::cout << "Values in the array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
    // b) Ask the user to enter a number and check if it's present in the array
    int searchNumber;
    std::cout << "Enter a number to search: ";
    std::cin >> searchNumber;
    auto result = std::find(std::begin(values), std::end(values), searchNumber);
    if (result != std::end(values)) {
        std::cout << "The number found at index " << std::distance(std::begin(values), result) << std::endl;
    } else {
        std::cout << "Number not found in this array" << std::endl;
    }
    // c) Create another array, copy elements in reverse order, and print
    int reversedArray[size];
    std::reverse_copy(std::begin(values), std::end(values), std::begin(reversedArray));
    std::cout << "Values in the reversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << reversedArray[i] << " ";
    }
    std::cout << std::endl;
    // d) Get the sum and product of all elements
    int sum = 0, product = 1;
    for (int i = 0; i < size; ++i) {
        sum += values[i];
        product *= values[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Product of array elements: " << product << std::endl;
    return 0;
}