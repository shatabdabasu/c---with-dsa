

// reverse part of array  r(2,4)


#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
}


void rev(int x, int y,vector<int> &v){

    for(int i = x; i <=(i+y)/2; i++) {
        //swap
        int temp=v[i];
        v[i]=v[y];
        v[y]=temp;
        y--;
        
    }
}
int main(){

    vector<int>v;
    v.push_back(0);//0
    v.push_back(1);//1
    v.push_back(2);//2
    v.push_back(3);//3
    v.push_back(4);//4
    v.push_back(5);//5
    v.push_back(6);//6
    v.push_back(7);//7


    display(v);
    cout<<endl;

    rev (2,5,v); 

    display(v);

   return 0;
}


