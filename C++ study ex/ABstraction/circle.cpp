#include "Circle.hpp"
#include <iostream>


Circle::Circle(const std::string& name, float radius): Shape(name),radius(radius) {}

void Circle::draw() const{
    std::cout << "Drawing a circle named " << name 
    << " with radius " << radius << std::endl;
}

int main() {
    Circle circle("Circle", 5.0f);
    circle.draw(); // Polymorphic call

    return 0;
} 