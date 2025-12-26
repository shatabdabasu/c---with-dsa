
// pascales traingle
// using permutation and combination
#include <iostream>
using namespace std;
int main() {

    // Print Pascal's Triangle using combination
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " " << (i == 0 || j == 0 ? 1 : (i - j + 1) * (j + 1) / (j + 1)); // Calculate and print the combination
        }
        cout << endl; // Move to the next line after each row
    }



    // int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;

    // for (int i = 0; i < n; i++) {
    //     int num = 1; // Initialize the first number in each row
    //     for (int j = 0; j <= i; j++) {
    //         cout << num << " "; // Print the current number
    //         num = num * (i - j) / (j + 1); // Calculate the next number in the row
    //     }
    //     cout << endl; // Move to the next line after each row
    // }

    return 0;
}