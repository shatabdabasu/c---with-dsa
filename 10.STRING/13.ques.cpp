// given a string consisiting of lowercase english alphabets . 
//Print the character that is occuring most number of times.

// bad method 
#include<iostream>
#include<string>
#include<algorithm> // for sort 
using namespace std;

int main(){
    string s = "abbcdddccaaaaaecc";
    int n = s.length();
   
    int max = 0;
    string t;
    //sort (s.begin(),s.end());
    for(int i = 0; i < n; i++) {
        int count=0;
        for(int j = i+1 ; j < n; j++) {
            if(s[i]==s[j] ){
                count++;
                if(count>max){
                    max = count;
                    t=s[i];
            }
    }
    
 }

}

cout<<" frequency "<<max+1;
cout<<" max occured : "<<t;
return 0;

}