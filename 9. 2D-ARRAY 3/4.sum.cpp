
#include<iostream>
using namespace std;

int main(){

    int arr[3][4] = {1,2,35,4,  5,6,7,8,  7,10,11,12};
    int sum = 0;
    
    // MAX
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            sum = sum + arr[i][j];
                
            }

            
        }
        
    
    
    cout << "Sum of all elements is: " << sum << endl;
    
    return 0;
    
}