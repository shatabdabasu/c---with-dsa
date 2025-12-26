

// second largest element method 2 


#include<iostream>
using namespace std;

int main(){
    int a[7] = {5,26,-1,33,4,5,2};
    int n = sizeof(a)/sizeof(a[0]);
    int m ,s;

    // set the max and second max
    if(a[0]>a[1]){
         m = a[0];
         s = a[1];
    }
    else{ 
    m = a[1];
    s = a[0];
    }




    for(int i = 2; i < n; i++) {
        if(a[i]>m){
            s=m;
            m=a[i];
        }

        else if(a[i]>s&& a[i] > s){
            s=a[i];
        }
        
    }

    cout<<"max = : "<<m;
    cout<<"sec max = : "<<s;

    return 0;

}
