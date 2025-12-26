// multiply 2 matrix


#include<iostream>
using namespace std;

int main(){
    // take first matrix input
    int row1, col1;
    cout<<"Enter number of rows of first matrix: ";
    cin>>row1;
    cout<<"Enter number of columns of first matrix: ";
    cin>>col1;
    int arr1[row1][col1];
    cout<<"Enter elements of first matrix: "<<endl;
    for(int i = 0; i < row1; i++) {
        cout<<"row "<<i+1<<" : ";
        for(int j = 0; j < col1; j++) {
            cin>>arr1[i][j];
        }
        cout<<endl;
    }

    // take 2nd matrix input
    int row2, col2;
    cout<<"Enter number of rows of second matrix: ";
    cin>>row2;
    cout<<"Enter number of columns of second matrix: ";
    cin>>col2;
    int arr2[row2][col2];
    cout<<"Enter elements of second matrix: "<<endl;
    for(int i = 0; i < row2; i++) {
        cout<<"row "<<i+1<<" : ";
        for(int j = 0; j < col2; j++) {
            cin>>arr2[i][j];
        }
        cout<<endl;
    }

    // print matrix 1
    cout<<"Matrix 1"<<endl;
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            cout<< arr1[i][j]<<" ";    
        }
        cout<<endl;
    }

    // print matrix 2
    cout<<"Matrix 2"<<endl;
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            cout<< arr2[i][j]<<" ";    
        }
        cout<<endl;
    }

    // check if multiplication is possible
    if(col1 != row2) {
        cout<<"Multiplication not possible"<<endl;
        return 0;
    }


    // multiply the matrices
    int mul[row1][col2];
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            mul[i][j] =

            //code 

    

            
        }
    }




return 0;
}