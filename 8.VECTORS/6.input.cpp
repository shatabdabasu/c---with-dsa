
#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v(5,7); // size is 5,  each element is 7
    cout<<"enter input elements";

    for(int i = 0; i < v.size(); i++) {   // use like an array
        cin>>v[i];
        
    }

    
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<< "  ";
        
    }
    
  
return 0;
}