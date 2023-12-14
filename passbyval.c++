#include<iostream>

void square (int num) {
    num = num * num;
}
int main() {
    int x = 5;
    square(x);
    std::cout << "Original value: " << x << std::endl; // Output: Original value: 5
    return 0;
}
