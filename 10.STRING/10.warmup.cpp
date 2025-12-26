// input a string a return the number of times the neighbouring characters are different from each other 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "abccdeffgghhij"; // input string
    int n = str.length();
    int p = 0; // pointer to the next character
    int count = 0; // count of neighbouring characters that are different

    while(p<n){

        // out of bound 
        if(p==0){
            if(str[p]!= str[p+1]) count++; // first character
            p++;
        }

        if (p==n-1){
            if(str[p]!= str[p-1]) count++; // last character
            break;
        }



        if((str[p]!= str[p+1]) && (str[p] != str[p-1])) count++;

        p++;

        
    }
    cout<<count;

return 0;
}