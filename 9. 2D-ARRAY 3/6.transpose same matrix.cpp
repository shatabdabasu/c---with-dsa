
// take square (n * n) matrix input and make it a transpose of the same matrix
// dont use any extra matrix like the previous problem


#include<iostream>
using namespace std;

int main(){

    // take matrix input
    int n;
    cout<<"Enter number of rows and columns: ";
    cin>>n;

    int arr[n][n];
    cout<<"Enter elements of matrix: "<<endl;

    for(int i = 0; i < n; i++) {
        cout<<"row "<<i+1<<" : ";
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
            
        }
        cout<<endl;
        
    }

    // Print  original matrix
    cout<<"original matrix"<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
        cout<< arr[i][j]<<"   ";    
                        
        }
        cout<<endl;
        
    }

    // Transpose of the matrix
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            arr[i][j] = arr[j][i];    // main logic
                        
        }
        
    }
    cout<< endl;

    // print transpose matrix
    cout<<"Transpose of the matrix: "<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

return 0;
}