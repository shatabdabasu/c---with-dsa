// sort a string using inbuilt sort function


#include<iostream>
#include<string>
#include<algorithm> // for sort function
using namespace std;

int main(){
    string str = "dbca"; // input string
    sort(str.begin(),str.end()); // sort the string
    cout<<str; // prints "abcd"    // Lexographical order

return 0;
}