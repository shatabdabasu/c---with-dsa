// sort the array o 1 2  
//  leetcode 75 sort colors

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}


void sort1(vector<int> &v){  // use two pass algorithm
    int no0=0;
    int no1=0;
    int no2=0;
    for(int i = 0; i <v.size(); i++) {
        if (v[i]==0) no0++;
        if (v[i]==1) no1++; 
        if (v[i]==2) no2++; 
    }

    //fill
    for(int i = 0; i <v.size(); i++) {
        if (i<=no0) v[i]=0 ;
        else if (i<=no0+no1) v[i]=1;
        else if (i<=no0+no1+no2) v[i]=2;

       
    }


}

  int  main(){

    vector<int>v;
    v.push_back(1);//0
    v.push_back(2);//1
    v.push_back(0);//2
    v.push_back(2);//3
    v.push_back(1);//4
    v.push_back(1);//5
    v.push_back(2);//6
    v.push_back(0);//7

    display(v);
    
    sort1(v);

    display(v);
    
    return 0;
}