// count vowels in a string
#include<iostream>
using namespace std;

int main(){
    int count = 0; 
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    string word = "aeiouAEIOU"; // string to count vowels in
    int i = 0; // index for the string
  
    
    while(word[i] != '\0') { // loop until the end of the string
        for(int j = 0; j < 5; j++) {
            if(word[i]==vowels[j] || word[i] == vowels[j] - 32) { // check for both lowercase and uppercase vowels
                count = count + 1;
            }
        }
        i++; // move to the next character in the string
    }

    cout<< "Number of vowels in the string: " << count << endl;
    
    return 0;
}