
#include<iostream>
#include<vector>
using namespace std;

void change1d ( vector <int>&a){
    a[0]=100; 
}

void change2d (vector<vector<int>>&a){ // In C++, when you pass a 2D array to a function the number of columns (second dimension) must be specified.
    a[0][0]=100;
}

void length(vector<vector<int>>&a){
    cout<< "Length of 2D vector: " << a.size() << endl;
    
}



int main(){

    vector<int>v1={1,2,3,4,5};
    cout<<"Before change: "<<v1[0]<<endl;
    change1d(v1); // pass by reference
    cout<<"After change: "<<v1[0]<<endl; 


    vector <vector<int>>v2={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Before change: "<<v2[0][0]<<endl; 
    change2d(v2); // pass by reference
    cout<<"After change: "<<v2[0][0]<<endl; 

    length(v2);

return 0;
}