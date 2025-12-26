
#include<iostream>
using namespace std;

int sum (int x,int y){
    return x+y;
}

int min (int x, int y){
    int a;
    if (x>y) a=x;
    else a=y;
    return a;

}


int main(){
cout<<"enter numbers";
int x,y;
cin>>x>>y;

cout<<sum(x,y);

cout<<min(y,x);


return 0;
}