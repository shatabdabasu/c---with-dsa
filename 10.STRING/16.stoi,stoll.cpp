// stoi vs stoll built - in functions

// stoi --> string to integer --> -2power 31 to 2power 31 -1
// stoll --> string to long long integer--> -2power 63 to 2power 63 -1

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "12345";
    string s2 = "12345678901234";
    int x = stoi(s1); // string to integer
    long long int y = stoll(s2); // string to long long integer

    int a = 654656;
    string s3 = to_string(a); // integer to string

return 0;

}