//Classes and Objects exercise
#include<iostream>
#include<string>
using namespace std;

class car{
    // Encapsualtion example
    public:
    string brand,model;
    int milage = 50;
    int distance;

    // Constructor
    car(string b, string m, int d) 
    : brand(b),model(m),distance(d){}
// Function to calculate the milage of the car

    int drive(){
        return milage += distance;
    }
// Function to display the car specifications
    void carSpecifications(){
        cout << "The brand type is:" << brand << endl;
        cout << "The model of the car is: " << model << endl;
        cout << "The milage of the car is: " << drive() << endl;

    }
};

int main(){
    // Object declaration
    car my_car("BMW","X5",1000);

    // Call the display function
    my_car.carSpecifications();
    return 0;
}

