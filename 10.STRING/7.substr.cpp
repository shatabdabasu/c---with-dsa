
#include<iostream>
using namespace std;

int main(){
    string str = "012345678"; // input string
    int n = str.length();
    string substr = str.substr(2,5); // substring from index 2 of length 5
    cout<<substr; // prints "23456"

return 0;
}

