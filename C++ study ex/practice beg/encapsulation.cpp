#include<iostream>
#include<string>

using namespace std;

class Rectangle{
    // Variables required for area calculation
    public:
    int length;
    int breadth;
    // Constructor to initialize variables
    Rectangle(int len,int brth): length(len) , breadth(brth){}
    // Function to calculate area
    int area(){
        return length*breadth;
    }
};
int main(){
    // Create object of Rectangle class
    Rectangle rect(8 , 6);
    // Call the area function
    cout<< "The area of the rectangle is: " << rect.area() << endl;
}
