
// 2d vectors works like a matrix, it is a vector of vectors.
// works like a 2d array, but with dynamic size.
// It is a vector of vectors, where each vector can have different sizes.
 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v1;
    v1.push_back(1); 
    v1.push_back(2);
    v1.push_back(3); // v1 = {1, 2, 3}

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5); // v2 = {4, 5}

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10); // v3 = {6, 7, 8, 9, 10}

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3); // v = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9, 10}}


                    //     0  1  2
                    // 0  {1, 2, 3}
                    // 1  {4, 5}
                    // 2  {6, 7, 8, 9, 10}

    cout<< v[0][0] << endl;
    cout<< v[1][1] << endl;
    cout<< v[2][3] << endl;




    

return 0;
}