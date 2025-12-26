// find largest element of given 2D array integers


#include<iostream>
using namespace std;

int main(){

    int arr[3][4] = {1,2,35,4,  5,6,7,8,  7,10,11,12};
    int max=INT16_MIN;
    
    // MAX
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if (arr[i][j]>max){
                max = arr[i][j];
            }

            
        }
        
    }
    
    cout<<"Largest element is: "<< max<<endl;
    

return 0;
}