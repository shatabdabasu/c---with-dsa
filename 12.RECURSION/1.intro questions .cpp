

// 1. FUNCTION CALLING ITSELF

// #include<iostream>
// using namespace std;
// void fun(){
//     cout<<"hello coding "<<endl;
//     //fun();
// }
// int main(){
// fun();
// return 0;
// }



// 2. PRINT N TIMES 

// #include<iostream>
// using namespace std;
// void fun(int n ){
//     if (n==0) return ;
//     cout<<"hello coding "<<endl;
//     fun(n-1);
// }

// int main(){
// fun(5);
// return 0;
// }



// 3. FACTORIAL

// #include<iostream>
// using namespace std;
// int  fac(int n ){
//     if (n==0) return 1 ; // base case
//     return n*fac(n-1);
// }

// int main(){
// cout<<fac(5);
// return 0;
// }



// 4. PRINT N 1O 1

// #include<iostream>
// using namespace std;
// void  fac(int n ){
//     if (n==0) return  ; // base case
//     cout<<n<<endl;
//     fac(n-1);
// }

// int main(){
// fac(5);
// return 0;
// }


// // 5. PRINT 1 1O N    usnig another parameter
// #include<iostream>
// using namespace std;
// void  fac(int  i ,int n ){
//     if (i>n) return  ; // base case
//     cout<<i<<endl;
//     fac(i+1,n);
// }

// int main(){
// fac(1,5);
// return 0;
// }

 
// // 5. PRINT 1 1O N        (WITHOUT USNIG ANOTHER PARAMETER) AFTER RECURSIVE CALL
// #include<iostream>
// using namespace std;
// void  fac(int n ){
//     if (n==0) return  ; // base case
//     fac(n-1);          // call
//     cout<<n<<endl;    // work
    
// }

// int main(){
// fac(5);
// return 0;
// }

// // 6. PRINT SUM OF 1 TO N (return type)  same like factorial

// #include<iostream>
// using namespace std;
// int  sum(int n ){
//     if (n==1) return 1 ; // base case
//     return n+sum(n-1);          // call // work
    
// }
// int main(){
// cout<<sum(4);
// return 0;
// }


// // 7. calculate a raised to power b using recursion

// #include<iostream>
// using namespace std;
// int  pow(int a,int b ){
//     if (b==0) return 1 ; // base case
//     return a * pow(a,b-1);          // call // work
    
// }
// int main(){
// cout<<pow(2,4);
// return 0;
// }
