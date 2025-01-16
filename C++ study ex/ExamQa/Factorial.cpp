// factorial via for loop
#include <iostream>

using namespace std;
// Factorial via recursive method
long long recursive_factorial(int number){
    if(number == 0 || number == 1){
        return 1;
    } else {
        return number * recursive_factorial(number - 1);
    }
}
// Factorial via for loop
int factorial(int value){
    int result = 1 , i;
    for ( i = 0; i <= value ; i++){
        result*=i;
    }
    return result;
}
int main(){
    int number ;
    cout << "Enter a value to find it's factorial" << endl;
    cin >> number ;
    recursive_factorial(number);
    cout << "Factorial of " << number << " is " << recursive_factorial(number) << endl ;
    return 0;
}