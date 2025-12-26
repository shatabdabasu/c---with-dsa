// Given n string consisiting of digits fromm 0 to 9.
// return the index of string having maximum value .

// input = ["0123","0023","056","00182",940,2901]

// output = 5  ( index of string "940" as it has maximum value )

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string arr[] ={"0123","0023","056","0182","940","2901"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = stoi(arr[0]);


    for(int i=1;i<n;i++){
        int x = stoi(arr[i]);
        if(x>max) max=x;   
    }

cout<<(max);

return 0;

}