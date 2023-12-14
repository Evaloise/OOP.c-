#include<iostream>

void square (int &num) {
    num = num * num;
}

int main() {
    int x = 5;
    square(x);
    std::cout << "Modified value: " << x << std::endl; // Output: Modified value: 25

    return 0;
}
