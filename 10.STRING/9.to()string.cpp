// return the total number od digitd in the number
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n = 123456; // input number
    string str;
    str = to_string(n); // convert number to string
    cout<<"number of digits = "<<str.length(); // print the length of the string
    return 0;
    
}