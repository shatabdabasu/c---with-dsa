
#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    v.push_back(4);
    v.push_back(2);
// print output
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    cout<<endl;

    v.pop_back();  // deletes from back , but capacity in not reduced

    cout<<"after pop_back : "<<endl;

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;


return 0;
}