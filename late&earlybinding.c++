#include <iostream>

class Base {
public:
    virtual void print () {
        std::cout << "Base class print function" << std::endl;
    }
};

class Derived: public Base {
public:
    void print () override {
        std::cout << "Derived class print function" << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // Late Binding (Dynamic Binding)
    basePtr->print();

    // Early Binding (Static Binding)
    Base baseObj;
    baseObj.print();

    return 0;
} 
