
// 1. Brute Force: sort the array and check for consecutive equal elements
#include<iostream>
using namespace std;

int main(){

    int a[] = {3,1,3,4,2};
    int n = sizeof(a)/sizeof(a[0]);
    int x;

    //sort
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (a[i]==a[j]) x = a[i];
        }
           
        }
        cout<<" the duplcate number is : "<<x;

        return 0;
        
    }
