

//   N              n!                  
//     C  =    -----------    combination 
//      R        r!(n-r)!
//             




//      N                 n!
//        P    =      -------------   permutation
//         R             (n-r)!





#include<iostream>
using namespace std;

int fac(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
        return fac; 
}



int com(int n,int r){
    return fac(n)/((fac(n-r))*fac(r));
  
}


int per (int n,int r){
    return fac(n)/(fac(n-r));
}

int main(){
    int n,r;
    cout<<"enter n ";
    cin>>n;
    cout<<"enter r ";
    cin>>r;


    cout<<" combination  : "<<  com(n,r)<<endl;
    cout<<"permuation    : "<<  per(n,r);
  
return 0;
}

