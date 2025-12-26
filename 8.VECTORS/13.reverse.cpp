


//  reverse an array  without using extra array

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


    cout<<"original vector ";
    display (v);
    cout<<endl;

    // for(int i = 0; i <= v.size()/2; i++) {
       
    //     //basic swap
    //    int k=v[i];
    //    v[i]=v[v.size()-1-i];
    //    v[v.size()-1-i]=k;
       
    // }



    //  //alter
    // int i=0;
    // int j = v.size()-1;
    // while(i<=j){

    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

    for(int i = 0, j=v.size()-1; i<=j ; i++,j--) {
        
        int k = v[i];
        v[i]=v[j];
        v[j]=k;
       
        
    }

    cout<<"reserved vector ";
    display (v);
    return 0;
}


