
// 1 d array 
// what is an array?
// An array is a collection of items stored at contiguous memory locations.
// The idea is to store multiple items of the same type together.


#include<iostream>
using namespace std;

int main(){
    // int arr[3] = {1,2,3};

    // int arr[3] = {1,2}; // this will not work as it is not a complete initialization

    // lets array by user input
    cout<<"Enter size of array: ";
    int n;
    cin>>n;
    int arr[n]; // array declaration
    cout<<"Enter elements of array: "<<endl;
    for(int i = 0; i < n; i++) {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<endl;
    
    // print array
    cout<<"Array elements are: "<<endl;

    int s = sizeof(arr)/sizeof(arr[0]); // size of array
    cout<<"size of array is: "<<s<<endl;

    for(int i = 0; i < s; i++) {
        cout<<arr[i]<<" ";
        
    }



return 0;
}