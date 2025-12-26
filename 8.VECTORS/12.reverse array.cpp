

//  copy contents of one array into another in the reverse order 



#include<iostream>
#include<vector>
using namespace std;

void display (vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<< "  ";
        
    }
}

int main(){

    vector<int>v;
    v.push_back(2);//0
    v.push_back(6);//1
    v.push_back(1);//2
    v.push_back(8);//3
    v.push_back(7);//4

    display (v);
    cout<<endl;

    vector<int>a(v.size(),1);

    for(int i = 0; i < v.size(); i++) {
        a[(v.size()-1)-i ] = v[i];
        
    }

    display (a);

    

    return 0;
}

