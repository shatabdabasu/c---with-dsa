

#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> a){   //   a --> 9 10 6 1
    a[0]=1000;                  //  a --> 100 10 6 1
    for(int i = 0; i < a.size(); i++) {
        cout<<a[i]<<"  ";
        
    }


}

int main(){

    vector<int>v;

    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    for(int i = 0; i < v.size(); i++) {    // 9 10 6 1
        cout<<v[i]<<"  ";
        
    }

    cout<<endl;

    change(v);                              // 100 10 6 1    a becomes a new vector 
    cout<<endl;
    for(int i = 0; i < v.size(); i++) {      // 9 10 6 1
        cout<<v[i]<<"  ";
    }
        

   

return 0;
}