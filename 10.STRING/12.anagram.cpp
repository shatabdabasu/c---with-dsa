// VALID ANAGRAM LEET CODE

// given two string s1 and s2 , return true if t is
// an anagram of s and false otherwuse.

// # Example
// print(are_anagrams("listen", "silent"))  # True
// print(are_anagrams("hello", "world"))    # False



#include<iostream>
#include<string>
#include<algorithm> // for sort function
using namespace std;

void are_anagrams(string s1 , string s2){
    // sort the strings 
     sort(s1.begin(), s1.end());
     sort(s2.begin(),s2.end());

    if (s1==s2) cout <<"TRUE";
    else cout<<"FALSE";

}


int main(){

    string s1 = "listen"; // input string
    string s2 = "silent";

    are_anagrams(s1,s2);


return 0;
}