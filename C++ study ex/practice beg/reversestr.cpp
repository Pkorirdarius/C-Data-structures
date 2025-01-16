// Using 6 methods

// Reverse using reverse()function
// Reverse using Reverse Iterators
// Reverse using  for loop
// Reverse using two pointer technique
// Reverse using Recursion
// Reverse using stack

// 1st method
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

void reverFunct( string str){
    
    // syntax reverse(str.begin(,str.end()))
    reverse(str.begin(), str.end());

    cout << "Reversed String" << str << endl ;

}
// 2nd method
void reverItarator(string str) {

    string reversed(str.rbegin(), str.rend());

    cout << "Reversed String" << reversed << endl ;

}
// 3rd method
void reverForLoop(string str) {

    int n = str.length();

    for (int a = 0 ; a < n /2 ;++a){

        swap(str[a], str[n-a-1]);
    }
    cout << "Reversed string " << str << endl;
}
// 4th method
void reverTwoPointer(string str) {
    // Initialize two pointers: left at the start and right
    // at the end of the string
    int left = 0;
    int right = str.length() - 1;

    // Loop until the two pointers meet in the middle
    while (left < right) {
        // Swap characters at position left and right
        swap(str[left], str[right]);

        // Move the left pointer to the right
        left++;

        // Move the right pointer to the left
        right--;
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;
}
// 5th method
void reverRecursion(string& str, int start, int end) {
     // Base case: if start index is greater than or equal to
    // end index, stop recursion
    if (start >= end)
        return;

    // Swap characters at position start and end
    swap(str[start], str[end]);

    // Recursive call to reverse the remaining substring
    reverRecursion(str, start + 1, end - 1);
}

// 6th method
// Stack can be used to reverse a string due to it's LIFO(last in last out)functionality
void reverStack(string str) {
    // Create a stack to store characters
    stack<char> st;
    // Push each character of the string onto the stack
    for (char ch : str) {
        st.push(ch);
    }

    // clear the string
    str.clear()
    ;
        // Pop characters from the stack and add them to the
        // reversed string
    while (!st.empty())
    {
        str += st.top();
        st.pop();
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

}

// Calling the functions in main 💀
int main() {
    // 1st method
    reverFunct("Hello, World!\n ");
    
    // 2nd method
    reverItarator("Hello,meep ! \n ");

    // 3rd method
    reverForLoop("wake up to reality \n");

    // 4th method
    reverTwoPointer("oui mate how you doing? \n");

    // 5th method
    // Define a string
    string str = "Hello, World!";
    // Call the recursive function to reverse the string
    reverRecursion(str, 0, str.length() - 1);
    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    // 6th method
    reverStack("Hello World :3\n");

}



