// given a string consisiting of lowercase english alphabets . 
//Print the character that is occuring most number of times.



#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "leetcode";
    vector <int> arr(26,0);
    for(int i = 0; i < s.length(); i++) {
        char ch =s[i];
        int ascii = int(ch);
        arr[ascii-97]++;
    }
    
    int max=0;
    int j = 0;
    for( int i = 0; i < 26; i++) {
        if(arr[i]>max){
        max = arr[i];
        j = i;
        }
        
    }

    cout<< " most frequrnt letter is  : " << char(j+97);



return 0;
}