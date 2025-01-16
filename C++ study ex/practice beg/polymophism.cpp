// classes and inheritance
#include<iostream>
#include<string>

using namespace std;

//function overloading
// Compile time polymorphism
// class Overload {
// public:
//     void print(int num) {
//         cout << "Printing integer: " << num << endl;
//     }
 
//     void print(double num) {
//         cout << "Printing double: " << num << endl;
//     }
 
//     void print(string text) {
//         cout << "Printing string: " << text << endl;
//     }
// };
 
// int main() {
//     Overload obj;
     
//     obj.print(5);
//     obj.print("Hello World");
//     obj.print(10.5);
    
     
//     return 0;
// }
//operator overloading
class StringConcat {
private:
    string str;
public:
    StringConcat() = default;
   //Parameterized constructor marked as explicit to prevent implicit conversions 
    explicit StringConcat(const string& s) :str(s){}
    
    StringConcat(const StringConcat& obj ) = default;
    StringConcat& operator =(const StringConcat& obj ) = default;
    StringConcat(StringConcat&& obj) = default;
    StringConcat& operator =(StringConcat&& obj) = default;

    StringConcat operator+(const StringConcat& obj) const {
        StringConcat result;
        result.str = this-> str + obj.str;
        return result;
    }
    StringConcat& operator+=(const StringConcat& obj){
        this-> str += obj.str;
        return*this;
    }

    void display() const {
        cout  << "Concatenated String: "<< str << endl;
    }
    // StringConcat() : str("") {}
    // StringConcat(string s) : str(s) {}
 
    // StringConcat operator+(const StringConcat& obj) {
    //     StringConcat result;
    //     result.str = this->str + obj.str;
    //     return result;
    // }
 
    // void display() {
    //     cout << "Concatenated String: " << str << endl;
    // }
};
 
int main() {
    StringConcat str1("Hello");
    StringConcat str2("World");
 
    StringConcat result = str1 + str2;
    result.display();
 
    return 0;
}
// Runtime polymorphism
