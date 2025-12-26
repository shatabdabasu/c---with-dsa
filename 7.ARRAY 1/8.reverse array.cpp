// Given an integer array, reverse it without using any extra array.

// Example
// Input : [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]


#include<iostream>
using namespace std;

void rev(int a[],int n){
    //rev he array 
    for(int i = 0; i < (n/2); i++) {
        int temp = a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
        
    }

}

int main(){

    int a[5]={1,2,3,4,5};
    int n=5;

    cout<<"original arrya ";
    
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
        
    }
    rev(a,n);
    cout<<endl;

    cout<<"reversed array ";
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    

return 0;
}