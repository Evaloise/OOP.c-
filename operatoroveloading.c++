
#include<iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex () : real(0), imaginary(0) {}

    Complex operator + (const Complex& other) {
        Complex result;
        result.real = this->real + other.real;
        result.imaginary = this->imaginary + other.imaginary;
        return result;
    }

    void display() {
        std::cout << "Real: " << real << ", Imaginary: " << imaginary << std::endl;
    }
};

int main() {
    Complex c1, c2, result;
    // Assume values are assigned to c1 and c2
    result = c1 + c2;
    result. display();

    return 0;
}