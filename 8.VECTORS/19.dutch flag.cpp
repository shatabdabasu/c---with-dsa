// sort the array o 1 2  
// dutch flag algorithm, leetcode 75 sort colors
// 3 pointer algorithm

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}


void sort1(vector<int> &v){  // 3 pointer algorithm
    int l=0;
    int m=0;
    int h=v.size()-1;
    while(h>m){

        if(v[m]==0){
            //swap 110 
            int t= v[l];
            v[l]=v[m];
            v[m]=t;

            l++;
            m++;

        }

        else if(v[m]==1){

            m++;

        }

        else if(v[m]==2){

            //swap 211
            int k= v[h];
            v[h]=v[m];
            v[m]=k;

            h--;
    
        }
    }
}

    int main(){
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
    
    cout<<endl;
    cout<<"sorted";
    display(v);
    return 0;
}