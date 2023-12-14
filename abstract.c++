#include <iostream>

// Abstract class
class Shape {
public:
    virtual double calculateArea() = 0;      // Pure virtual function
    virtual double calculatePerimeter() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14 * radius * radius;
    }

    double calculatePerimeter() override {
        return 2 * 3.14 * radius;
    }
};

int main() {
    // Shape shape; // Cannot instantiate an object of an abstract class
    Circle circle(5);
    std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;
    std::cout << "Perimeter of Circle: " << circle.calculatePerimeter() << std::endl;

    return 0;
}
