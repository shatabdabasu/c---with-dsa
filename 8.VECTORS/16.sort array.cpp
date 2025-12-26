

// sort 0s and 1s


#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}




// linear search 
void sort1(vector<int> &v){

    for(int i = 0; i < v.size(); i++) {

        for(int j = i+1; j < v.size(); j++) {

            if(v[i]>v[j]){
                // swap
                int temp = v[i];
                v[i]=v[j];
                v[j]=temp;

            }

            
        }
      
    }
}

void sort2(vector<int> &v){  // use two pinter i , j
    int i =0;
    int j = v.size()-1;
    for( i = 0; i < j; i++,j--) {
        if (v[i]==0) i++; 
        if (v[j]==1) j++;

        if (v[i]==1 && v[j]==0) {
        v[i]=0;
        v[j]=1;
    }
}
}







  int  main(){

    vector<int>v;
    v.push_back(0);//0
    v.push_back(1);//1
    v.push_back(0);//2
    v.push_back(1);//3
    v.push_back(0);//4
    v.push_back(1);//5
    v.push_back(0);//6
    v.push_back(0);//7

    display(v);
    //sort1(v);  // nn  avoid this

    sort2(v);

    display(v);
    
    return 0;
}