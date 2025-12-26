

#include<iostream>
using namespace std;
int  pip(int n ){
    if (n==0) return;
    cout<<"pre"<<n<<endl;
    pip(n-1);
     cout<<"in"<<n<<endl;
    pip(n-1);
     cout<<"post"<<n<<endl;
    
}
int main(){
 pip(3);

}