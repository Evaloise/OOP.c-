#include <iostream>
class Shape {
private:
    double area;
public:
    Shape(double a) : area(a) {}
    // Friend function declaration
    friend void printArea(Shape s);
};
// Friend function definition
void printArea(Shape s) {
    std::cout << "Area: " << s.area << std::endl;
}
int main() {
    Shape shape(25);
    printArea(shape);  // Corrected the function call
    return 0;
}
