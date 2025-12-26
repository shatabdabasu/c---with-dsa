// linear search 


#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};

    cout<<"Enter element to search: ";
    int n;
    cin>>n;
  
    for(int i = 0; i < 5; i++) {
        if(arr[i] == n) {
            cout<<"Element found at index: "<<i<<endl;
            break;
        }
        else if(i == 4) {
            cout<<"Element not found"<<endl;
        }
    }

return 0;
}