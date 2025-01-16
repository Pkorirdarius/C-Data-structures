#include <iostream>
#include <algorithm>

using namespace std;
// sorting an array in descending order

int main(){
    int marks[]={60,80,70,90,50,68,72,88,55,40};
    int n = sizeof(marks)/ sizeof(marks[0]);
    
    sort(marks,marks + n,greater<int>());

    // Printing the sorted array
    cout << "Marks in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;

}


// class StringConcat {
// private:
//     string str;
// public:
//     StringConcat() : str("") {}
//     StringConcat(string s) : str(s) {}
 
//     StringConcat operator+(const StringConcat& obj) {
//         StringConcat result;
//         result.str = this->str + obj.str;
//         return result;
//     }
 
//     void display() {
//         cout << "Concatenated String: " << str << endl;
//     }
// };