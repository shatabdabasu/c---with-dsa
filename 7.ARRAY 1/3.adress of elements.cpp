

#include<iostream>
using namespace std;

int main(){

    int arr [5] = {1,2,3,4,5};
    cout<<"Adress : "<<endl;
    cout<<&arr[0]<<endl; // address of first element         int = 4 bytes  , continuous array
    cout<<&arr[1]<<endl; // address of second element        adress is in hexadecimal
    cout<<&arr[2]<<endl; // address of third element
    cout<<&arr[3]<<endl; // address of fourth element
    cout<<&arr[4]<<endl; // address of fifth element

    cout<<"address of first element "<<arr<<endl; // address of first element
    cout<<"address of first element "<<&arr<<endl; // address of first element
    cout<<"adress of first element"<<&arr[0]<<endl; // address of first element 

    cout<<"address of second element "<<arr+1<<endl; // address of second element
    cout<<"address of third element"<<arr+2<<endl; // address of third element

return 0;
}