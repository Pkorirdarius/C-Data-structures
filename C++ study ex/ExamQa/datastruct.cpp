#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Declare a vector to store the integer values
    vector <int> marks = {60, 80, 70, 90, 50, 68, 72, 88, 55, 40};

    // Adds an elment to the dynamic array data structure
    marks.push_back(75);

    // updates the first value of the array
    marks[0] = 65;

    // Iteration through the array to display all the elements
    int i;
    for( i = 0 ; i < marks.size() ; i++){
        cout << "["<<marks[i] << "]";
    }
    
    // removes the last element
    marks.pop_back();

    return 0;
}