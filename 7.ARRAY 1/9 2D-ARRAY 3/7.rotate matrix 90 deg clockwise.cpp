// rotate matrix by 90 deg clockwise 
// leet code problem 48


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
        cout<< arr[i][j]<<" ";    
                        
        }
        cout<<endl;
        
    }

    // rotate the matrix by 90 deg clockwise
    int ro[n][n];
   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ro[j][n-1-i]=arr[i][j];    // main logic
                        
        }
        
    }
    cout<< endl;

    // print rotated  matrix
    cout<<" rotated  matrix: "<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<ro[i][j]<<" ";
        }
        cout<<endl;
        
    }

return 0;
}