// second largest element


#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    // method 1
    // find max 
    int max = arr[0]; // assume first element is max
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // find second max
    int second_max = arr[0]; // assume first element is second max
    for(int i = 1; i < 5; i++) {
        if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i]; // update second max
        }
    }
    cout<<"Second maximum element is: "<<second_max<<endl;
   



    // // method 2
    // int max = arr[0]; // assume first element is max
    // int second_max = arr[0]; // assume first element is second max
    // for(int i = 1; i < 5; i++) {
    //     if(arr[i] > max) {
    //         second_max = max; // update second max
    //         max = arr[i]; // update max
    //     }
    //     else if(arr[i] > second_max && arr[i] != max) {
    //         second_max = arr[i]; // update second max
    //     }
    // }

return 0;
}