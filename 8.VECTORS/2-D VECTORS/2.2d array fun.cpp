
#include<iostream>
using namespace std;
// This code demonstrates how to pass arrays to functions in C++.
void change1d (int a[]){
    a[0]=100; 
}

void change2d (int ar[2][2]){ // In C++, when you pass a 2D array to a function the number of columns (second dimension) must be specified.
    ar[0][0]=100;
}



int main(){

    int a[5]={1,2,3,4,5};
    cout<<"Before change: "<<a[0]<<endl;
    change1d(a); // pass by reference
    cout<<"After change: "<<a[0]<<endl; 


    // int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<"Before change: "<<b[0][0]<<endl; 
    // change2d(b); // pass by reference
    // cout<<"After change: "<<b[0][0]<<endl; 

return 0;
}