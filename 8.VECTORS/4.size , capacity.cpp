#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;  // decleration   // memmory expands to double
    
    cout<<"size is just the numbe of elements "<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;

    vector<int> a;
    
    cout<<"capacity is the actual size"<<endl;
    a.push_back(1);
    cout<<a.capacity()<<endl;

    a.push_back(2);
    cout<<a.capacity()<<endl;

    a.push_back(3);
    cout<<a.capacity()<<endl;

    a.push_back(4);
    cout<<a.capacity()<<endl;




return 0;
}
