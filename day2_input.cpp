#include <iostream>
using namespace std;

int main() {
    // 1. Declare Variables (Creating containers)
    int a, b, sum;

    cout << "--- Day 2: Basic Addition Program ---" << endl;

    // 2. Taking First Number from User
    cout << "Enter the first number: ";
    cin >> a; 

    // 3. Taking Second Number from User
    cout << "Enter the second number: ";
    cin >> b;

    // 4. Logic: Adding both numbers
    sum = a + b;

    // 5. Displaying the Result
    cout << "-----------------------------------" << endl;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
