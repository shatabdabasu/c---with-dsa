


// find the last occurrence of x in the array


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);//0
    v.push_back(6);//1
    v.push_back(1);//2
    v.push_back(8);//3
    v.push_back(7);//4

    int x = 1;
    int flag=0;

    for(int i = v.size()-1; i >= 0; i--) {
        if(v[i]==x){
        cout<<"found is index "<<i<<endl;
        flag=1;
        break;
        }

        if(flag=0)    cout<<"not found";

        
    }

    

return 0;
}