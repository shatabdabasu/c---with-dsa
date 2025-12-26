
// write matrix in spiral form -- clockwise
// leet code problem 54


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
    cout<<"original matrix"<<endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
        cout<< arr[i][j]<<" ";    
                        
        }
        cout<<endl;
        
    }

    // print matrix in spiral form
    cout<<"Matrix in spiral form"<<endl;
    kgggkg
    
    

return 0;
}
