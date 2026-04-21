#include <iostream>
using namespace std;

int main() {
    int rows = 4; // You can change this to 5 or more

    cout << "--- Day 21: Mirrored Right Triangle ---" << endl;

    for (int i = 1; i <= rows; i++) {
        
        // 1. Loop for printing spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << "  "; // Two spaces to keep it clean
        }

        // 2. Loop for printing stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl; // Move to the next line
    }

    return 0;
}
