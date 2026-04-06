#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Taking three integers as input from the user
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Logic to find the greatest number
    if (a >= b && a >= c) {
        cout << "The greatest number is: " << a << endl;
    } 
    else if (b >= a && b >= c) {
        cout << "The greatest number is: " << b << endl;
    } 
    else {
        cout << "The greatest number is: " << c << endl;
    }

    return 0;
}
    
