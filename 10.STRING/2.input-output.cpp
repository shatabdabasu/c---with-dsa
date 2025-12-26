
#include<iostream>
#include<string>
using namespace std;

int main(){
     string  sen; // will not work if you use space in the string
    // cout<<"Enter a character: ";
    // cin>>sen;
    // cout<<sen;
    getline(cin, sen); // to take input with spaces
    cout<<sen<<endl;






return 0;
}