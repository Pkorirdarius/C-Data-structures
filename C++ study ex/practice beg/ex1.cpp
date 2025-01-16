#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverFunct( string str){
    
    // syntax reverse(str.begin(,str.end()))
    reverse(str.begin(), str.end());

    cout << "Reversed String: " << str << endl ;

}

void erase(string str)
{
    // Deletes 4 characters from index number 1
    str.erase(24, 31);
 
    cout << "After erase : ";
    cout << str;
}

int main(){
    string s = "INSTITUTION IN BIBLICAL VISION";
    int count = 0;
    int size = s.length();
    for(int i = 0;i < size ; i++){
        if(s[i] == 'I'){
            count++;
        }  
    }
    cout << count << endl;
    // Reversing the entire string
    reverFunct("INSTITUTION IN BIBLICAL  VISION");
    // Erasing the string
    cout << "Before erase : ";
    cout << s << endl;
    erase(s);

    return 0;
}