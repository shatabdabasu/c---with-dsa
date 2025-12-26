
#include<iostream>
#include<string>
#include<algorithm> // for reverse function
using namespace std;

int main(){

// STRING BUILT-IN FUNCTIONS

// LENGTH/SIZE
    string str = "Hello w";
    cout<<str.length() << endl; // number of characters in the string
    cout<<str.size() << endl; //  both are same . Always. No exceptions.
// CAPACITY
    cout<<str.capacity() << endl; // number of characters that can be stored in the string without reallocating memory
    str.reserve(100); // reserves memory for 100 characters, so that it does not need to reallocate memory when more characters are added
    cout<<str.capacity() << endl; // now the capacity is 100    
// PUSH_BACK
    str.push_back('o'); 
    str.push_back('r');
    str.push_back('l');
    str.push_back('d'); // appends characters to the end of the string
    //str.push_back('good'); // string will not compile, as push_back takes a single character, not a string.
    cout<<str << endl; 
// POP_BACK
    str.pop_back(); // removes the last character from the string
    cout<<str << endl;
// CONCATENATION
    string name = "Ramkrishna";
    string name2 = " Paramhansa";
    name = name + name2; // concatenates two strings
    cout<<name << endl;
    cout<<"Avatar "+ name << endl; // concatenates a string with a string literal
// REVERSE
    str = "abcdefg";
    reverse(str.begin()+2, str.end()-1); // reverses the string
    cout<<str << endl;
    
    
    return 0;
}