

// ROTATE THE GIVEN ARRAY A BY K STEPS WHERE K IS NON NEGATIVE 

// *** imp k can be grtaerer than n as well where n is the size of arrat "a"

//  0  1   2   3   4   5   6   7

//rotate(a[],k=2)
//  6  7   0   1   2   3   4   5


// SOLUTION : 1. reverse entire array 
//            2. reverse the first k elements 
//            3. reverse the remaining elements



#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}


void rev(int x, int y,vector<int> &v){

    for(int i = x; i <=(i+y)/2; i++) {
        //swap
        int temp=v[i];
        v[i]=v[y];
        v[y]=temp;
        y--;
        
    }
    cout<<endl;
}

void rot(vector<int> &v,int k){
    int s=v.size();
    display(v);
    rev(0,s-1,v);
    display(v);
    rev(0,k-1,v);
    display(v);
    rev(k,s-1,v);
    display(v);

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



    // input
    int k = 2;

    int n=v.size();
    //if (k >n) k = k-1;
    if (k >n) k = k%n;  

    // fun
    rot(v,3);

    return 0;
}