


// vectors --> alternate of array 
//  (dynamic)            (static)

// inbuilt bunctions 
// v.push_back()
// v.pop_back()
// v.size()
// v.capacity()
// v.at()
// v.sort()




#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;  // decleration   // memmory expands to double
    
    // v[0]=1;
    // v[1]=2;
    // v[2]=3;     no fixed size
    // v[3]=4;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    v[0]=111;   // index works , but not in the begining 

    cout<<v[0]<< "  ";
    cout<<v[1]<< "  ";
    cout<<v[2]<< "  ";
    cout<<v[3]<< "  ";




return 0;
}



