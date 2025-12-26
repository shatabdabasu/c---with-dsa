// print matrix in wave form


#include<iostream>
using namespace std;

int main(){
// take input
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
    cout<<"original matrix"<<endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
        cout<< arr[i][j]<<" ";    
                        
        }
        cout<<endl;
        
    }

    // print matrix in wave form
    cout<<"Matrix in wave form"<<endl;
    for(int i = 0; i < row; i++) {

         // 1. even row
        if(i%2==0) { // even row
            for(int j = 0; j < col; j++) {
                cout<<arr[i][j]<<" ";
            }
        }

        // 2. odd row
        else{
            for(int j = 0; j < col; j++) {
                cout<<arr[i][col-j-1]<<" "; // reverse order
                
            }
        }
        
    }

return 0;
}