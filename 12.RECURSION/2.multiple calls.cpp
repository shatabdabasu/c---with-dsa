

// // 1. CALCULATE THE NTH FIBONACHI NUMBER USING RECURSION

// #include<iostream>
// using namespace std;
// int  fib(int n ){
//     if (n==1) return 1;
//     if (n==0) return 0;

//     return fib(n-1) + fib(n-2);   // call // work        
                                                     
// }
// int main(){
// cout<<fib(6);
// return 0;
// }

// 2.POWER FUNCTION (LOGARITHMIC)    vi


// #include<iostream>
// using namespace std;

// int pow(int a, int b){    // holds only for even b every time 
//     if (b==1) return a;
//     //return pow(a,b/2) * pow(a,b/2);   // BLUNDER --> SEE DRYRUN TIME COMPLEX
//     int ans = pow(a,b/2);
//     return ans * ans;
// }
// int main(){
// cout<<pow(2,4);
// return 0;
// }








// HOLDS  FOR BOTH ODD AND EVEN B 

// #include<iostream>
// using namespace std;

// int pow(int a, int b){    // holds only for even b every time 
//     if (b==1) return a;

//     if(b%2 == 0){        // even
//     int ans = pow(a,b/2);
//     return ans * ans;

//     }
//     if(b%2 != 0){          // odd
//     int ans = pow(a,b/2);
//     return ans * ans * a;
//     }
    
// }
// int main(){
// cout<<pow(2,4);
// return 0;
// }