// number of ways 1 and 2 jumps 

#include<iostream>
using namespace std;
int  stair(int n ){
    if (n==1) return 1;
    if (n==2) return 2;

    return stair(n-1) + stair(n-2);   // call // work        
                                                     
}
int main(){
cout<<stair(6);
return 0;
}



// number of ways 1 , 2 jumps and 3 jumps

