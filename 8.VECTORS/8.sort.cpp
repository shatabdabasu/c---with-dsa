

#include<iostream>
#include<vector>
#include <algorithm> // Added for sort()

using namespace std;


int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(0);
    v.push_back(6);
    v.push_back(9);

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
        
    }

    cout<<endl;

    sort(v.begin(),v.end());  // sort

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
        

   

return 0;
}