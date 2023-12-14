#include <iostream>
#include <cmath>

// Base class
class Shape {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

// Derived classes
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

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }

    double calculatePerimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() override {
        // Heron's formula for the area of a triangle
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() override {
        return side1 + side2 + side3;
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);
    Square square(5);

    std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;
    std::cout << "Perimeter of Circle: " << circle.calculatePerimeter() << std::endl;

    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;
    std::cout << "Perimeter of Rectangle: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "Area of Triangle: " << triangle.calculateArea() << std::endl;
    std::cout << "Perimeter of Triangle: " << triangle.calculatePerimeter() << std::endl;

    std::cout << "Area of Square: " << square.calculateArea() << std::endl;
    std::cout << "Perimeter of Square: " << square.calculatePerimeter() << std::endl;

    return 0;
}
