
// //1.
// #include<iostream>
// using namespace std;

// //function
// void greet(){
//   cout<<" good morning";
// }

// int main(){
//     greet();
//     return 0;
// }



// y =f (x)

// *     1
// **    2
// ***   3


// *        1
// **       2
// ***      3
// ****     4


// *        1
// **       2
// ***      3
// ****     4
// *****    5


// //2.
// #include<iostream>
// using namespace std;

// int main(){

// // print for  y=3
// int y=3;
// for(int i=1;i<=y;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//             }
//     cout<<endl;
// }

// // print for y=4
//  y=4;
// for(int i=1;i<=y;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//             }
//     cout<<endl;
// }

// // print for y=5
//  y=5;
// for(int i=1;i<=y;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//             }
//     cout<<endl;
// }
// return 0;
// }


// use function 

#include<iostream>
using namespace std;
//function


void star_tri(int y){ 
    cout<<"for y = "<<y<<endl;     // see control flow
    for(int i=1;i<=y;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
            }
            cout<<endl;
}
cout<<"-------------"<<endl;

}


int main(){

star_tri(3);
star_tri(4);
star_tri(5);
star_tri(6);
star_tri(7);
star_tri(8);

return 0;
}