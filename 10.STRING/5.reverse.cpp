
// input a string of even lenght and reverse the first half of the string

#include<iostream>
#include<string>
#include<algorithm> // for reverse function
using namespace std;

int main(){
    string str = "abcdefgh"; // input string
    int n = str.length(); 
    reverse(str.begin(),str.end()-n/2);// length of the string
    cout<<str;



return 0;
}