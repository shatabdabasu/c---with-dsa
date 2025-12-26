

// *******  0
// ***#***  1
// **###**  2
// *#####*  3

// #include<iostream>
// using namespace std;
// int main(){
// int n=20;
// // first line 
//  for(int j=0;j<=((2*n)+1);j++){
//         cout<< "*";
//     }
//     cout<<endl;
// // actual pattern
// for(int i=1;i<=n;i++){
//     //cout<<"  "<<i<<" " ;
//     for(int j=0;j<=n-i;j++){
//         cout<< "*";
//     }
//         for(int k=1;k<(2*i);k++){
//             cout<<"#";
//         }
//         for(int j=0;j<=n-i;j++){
//         cout<< "*";
//     }
//     cout<<endl;
// }
// return 0;
// }


// 1234567
// 123 567
// 12   67
// 1     7

// #include<iostream>
// using namespace std;
// int main(){
// int n=6;
// // first line 
//  for(int j=1;j<=((2*n)-1);j++){
//         cout<< j;
//     }
//     cout<<endl;
// // first triangle
// for(int i=1;i<=n;i++){
//     //cout<<"  "<<i<<" " ;
    
//     for(int j=1;j<=n-i;j++){
//         cout<< j;
//     }
//     // space
//         for(int k=1;k<(2*i);k++){
//             cout<<" ";
//         }
//         // second triangle
//         for(int j=n+i;j<(2*n);j++){
//            cout<< j;
//          }
//     cout<<endl;
// }
// return 0;
// }