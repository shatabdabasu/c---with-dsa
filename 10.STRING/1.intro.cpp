

//char and string
// string is a sequence of characters
// it is a character array


#include<iostream>
using namespace std;

int main(){

    //char str[5] = {'A', 'B', 'C', 'D', 'E'};

    //char str[5] = "ABCDE";
    char str[6] = "ABCDE"; //   6 to accommodate the null terminator '\0'

    // print the string
    cout << "String is: ";
    for (int i = 0; i < 5; i++) {
        cout << str[i]<<" ";
    }
    
    cout<<endl;
    char ch = 'F';
    cout<<(int)ch<<endl;

    ch = '\0';
    cout<<(int)ch<<endl;



    

return 0;
}

