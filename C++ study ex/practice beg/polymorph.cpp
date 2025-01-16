// Runtime polymorhism using function override
#include <iostream>
#include <string>
using namespace std;
 
class Car {
public:
// Declared as a virtual to allow overriding the function
    virtual void displayColor() {
        cout << "The car is colored in default color." << endl;
    }
};
 
class RedCar : public Car {
public:
// Override to provide functionality to each function
    void displayColor() override {
        cout << "The car is colored red." << endl;
    }
};
 
class BlueCar : public Car {
public:
    void displayColor() override {
        cout << "The car is colored blue." << endl;
    }
};
//  String literals that take in the new objects
int main() {
    Car* car1 = new RedCar();
    Car* car2 = new BlueCar();
 
    car1->displayColor();
    car2->displayColor();
//  To avoid memory leaks deletion of the objects created with 'new' we delete the pointers created
    delete car1;
    delete car2;
 
    return 0;
}