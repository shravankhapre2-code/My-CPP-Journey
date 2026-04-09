#include <iostream>
using namespace std;

int main() {
    // Variable to store the number of lines the user wants
    int rows;

    // Asking the user for input
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "--- Printing Pattern ---" << endl;

    // Outer loop: This loop runs for each Row
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop: This loop prints Stars in each Column
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Newline: Move to the next row after finishing the inner loop
        cout << endl;
    }

    return 0;
}
