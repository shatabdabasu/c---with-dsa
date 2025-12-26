// print transpose of matrix entered by user and store in a new matrix



#include<iostream>
using namespace std;

int main(){

    // take matrix input
    int row, col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;

    int arr[row][col];
    cout<<"Enter elements of matrix: "<<endl;

    for(int i = 0; i < row; i++) {
        cout<<"row "<<i+1<<" : ";
        for(int j = 0; j < col; j++) {
            cin>>arr[i][j];
            
        }
        cout<<endl;
        
    }

    // Original matrix
    cout<<"original matrix";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
        cout<< arr[i][j]<<" ";    
                        
        }
        cout<<endl;
        
    }

    cout<< endl;


    // Transpose of the matrix
    int r = col;
    int c = row;
    int trr[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            trr[i][j] = arr[j][i];    // main logic
                        
        }
        
    }

    // print transpose matrix
    cout<<"Transpose of the matrix: "<<endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<trr[i][j]<<" ";
            
        }
        cout<<endl;
        
    }
    
return 0;
}