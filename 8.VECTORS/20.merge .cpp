// merge two shorted array


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}



    int main(){
    vector<int>v1;
    v1.push_back(1);//0
    v1.push_back(23);//1
    v1.push_back(36);//2
    v1.push_back(12);//3
    v1.push_back(7);//4
    v1.push_back(18);//5
    v1.push_back(72);//6
    v1.push_back(0);//7
    sort(v1.begin(), v1.end());
    cout<<" v1 : ";
    display(v1);
    cout<<endl;

    vector<int>v2;
    v2.push_back(111);//0
    v2.push_back(522);//1
    v2.push_back(722);//2
    v2.push_back(122);//3
    v2.push_back(152);//4
    v2.push_back(602);//5
    v2.push_back(722);//6
    v2.push_back(1020);//7
    sort(v2.begin(), v2.end());
    cout<<" v2 : ";
    display(v2);
    cout<<endl;

    vector<int>v3(v1.size()+v2.size(),0);


    // code
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){

        if (v1[i]>v2[j]) {
            v3[k]=v2[j];
            k++;
            j++;
        }

        else if (v1[i]<v2[j]) {
            v3[k]=v1[i];
            i++;
            k++;
        }
    }

    // runout
    if(i==v1.size()){
        //fill v2 -->v3
        while(j<v2.size()){
        v3[k]=v2[j];
        j++;
        k++;
        }

    }

    if(j==v2.size()){
        //fill v1 -->v3
        while(i<v1.size()){
        v3[k]=v1[i];
        i++;
        k++;
        }

    }

    cout<< " merged array : ";
    display(v3);

    return 0;
}