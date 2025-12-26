
// given an array of students marks if marks of any student is less than 35 print its rollnumber 
//{roll is the index}


#include<iostream>
using namespace std;

int main(){
    // take matrix input
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    int arr[n];
    cout<<"Enter marks of students: "<<endl;

    for(int i = 0; i < n; i++) {
        cout<<"roll no "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
    


    // print failed students roll numbers
    cout<<"failed rolls are : "<<endl;

    for(int i = 0; i < n; i++) {
        if(arr[i]<35){
            cout<<i+1<<" ";
        }
        
    }

return 0;
}