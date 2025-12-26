// input a string of even length and 
// return the second half of the string using inbuilt substr function


#include<iostream>
#include<string>
#include<algorithm> // for reverse function
using namespace std;

int main(){
    string str = "012345678"; // input string
    int n = str.length();
    string ans = str.substr(n/2);
    cout<<ans; // prints "45678"

return 0;
}