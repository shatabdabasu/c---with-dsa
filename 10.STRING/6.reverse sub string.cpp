// input a string of length greater than 5 
//and reverse the substring from index 2 to 5 using inbuilt function

#include<iostream>
#include<string>
#include<algorithm> // for reverse function
using namespace std;

int main(){
    string str = "abcdefgh"; // input string
    int n = str.length(); 
    reverse(str.begin()+2,str.begin()+6);// length of the string
    cout<<str;
    

return 0;
}