// move all negative numbers to beginning and positive to end with constant extra space 


#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}


void sort2(vector<int> &v){  // use two pinter i , j
    int i =0;
    int j = v.size()-1;
    for( i = 0; i < j; i++,j--) {
        if (v[i]<0) i++; 
        if (v[j]>0) j++;

        if (v[i]>0 && v[j]<0) {
            //swap
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
      
    }
}
}

  int  main(){

    vector<int>v;
    v.push_back(4);//0
    v.push_back(-4);//1
    v.push_back(5);//2
    v.push_back(3);//3
    v.push_back(-45);//4
    v.push_back(-61);//5
    v.push_back(-450);//6
    v.push_back(-90);//7

    display(v);
    
    sort2(v);

    display(v);
    
    return 0;
}