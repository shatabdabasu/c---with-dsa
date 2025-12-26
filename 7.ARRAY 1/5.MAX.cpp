
// find the maximum element in an array
// using linear search
//
#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};

    int max = arr[0]; // assume first element is max
    
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout<<"Maximum element is: "<<max<<endl;