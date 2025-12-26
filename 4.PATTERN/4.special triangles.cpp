

// print given patterns 

//Floyds triangle

// 1
// 2 3
// 4 5 6
// 7 8 9 10


// #include<iostream>
// using namespace std;
// int main(){
// int x=5,y=5;
// int a=0;
// for(int i=1;i<=y;i++){
//     cout<<i << " :   ";
//     for(int j=1;j<=i;j++){

//          a=a+1;
//          cout<<a;
//          cout<<"   ";
//     }
//     cout<<endl;
// }
// return 0;
// }



// binary triangle

//    1 2 3 4
// 1  1
// 2  0 1
// 3  1 0 1
// 4  0 1 0 1


// method 1 
//using extra variable 

// #include<iostream>
// using namespace std;
// int main(){
// int x=5,y=5;
// int a=0;
// for(int i=1;i<=y;i++){
//     cout<<i << " :   ";
//     if( i%2==0 ) a=0;
//     else a=1;

//     for(int j=1;j<=i;j++){
//         cout<<a;
//         if(a==0) a=1;
//         else a=0;            
//     }
//     cout<<endl;
// }
// return 0;
// }
// method 2 
//observing patterns 

// #include<iostream>
// using namespace std;
// int main(){
// int x=5,y=5;
// for(int i=1;i<=y;i++){
//     cout<<i << " :   ";

//     for(int j=1;j<=i;j++){
//         if( (i+j)%2==0) cout<<1;
//         else cout<<0;
       
//     }
//     cout<<endl;
// }
// return 0;
// }




//  1 2 3 4 5              see dryrun
// 1        *
// 2      * *
// 3    * * *
// 4  * * * *
// 5* * * * *


// #include<iostream>
// using namespace std;
// int main(){
// int n=5;
// for(int i=1;i<=n;i++){
//     cout<<i << " :   ";
//     for(int j=1;j<=n-i;j++){
//         //cout<<" # ";
//         cout<<"   ";
//     }
//         for(int k=1;k<=i;k++){
//          cout<<" * ";
//         }
//      cout<<endl;   
//     }
  
// return 0;
// }


// methon 2
// using position pattern

// #include<iostream>
// using namespace std;
// int main(){
// int n=5;
// for(int i=1;i<=n;i++){
//     cout<<i << " :   ";
//     for(int j=1;j<=n;j++){
//         if ( (i+j)==n+1 || (i+j)>n+1 )cout<<" * ";
//         else cout<<"   ";
//     }
        
//      cout<<endl;   
//     }
  
// return 0;
// }



































//      1
//    1 2
//  1 2 3
//1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for(int i=1;i<=n;i++){
//     cout<<i << " :   ";
//     for(int j=1;j<=n-i;j++){
//         //cout<<" # ";
//         cout<<" ";
//     }
//         for(int k=1;k<=i;k++){
//          cout<< k ;
//         }
//      cout<<endl;   
//     }
  
// return 0;
// }