#include <iostream>
#include <string>

// Abstract class
class Shape {
protected:
    std::string name;

public:
    Shape(const std::string& name) : name(name) {}
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor for proper cleanup
};

// Derived class
class Circle : public Shape {
private:
    float radius;

public:
    Circle(const std::string& name, float radius) : Shape(name), radius(radius) {}

    void draw() const override {
        std::cout << "Drawing " << name << " with radius " << radius << std::endl;
    }
};

int main() {
    Circle circle("Circle", 5.0f);
    circle.draw(); // Polymorphic call

    return 0;
} 