#include<iostream>

void add(int a, int b) {
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl;
}
int main() {
    int x = 10, y = 20;
    add (x, y);
    return 0;
}