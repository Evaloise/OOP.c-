#include<iostream>

void display (int num) {
    std::cout << "Integer: " << num << std::endl;
}
void display(double num) {
    std::cout << "Double: " << num << std::endl;
}
int main() {
    display(5);
    display(3.14);
   return 0; 
}