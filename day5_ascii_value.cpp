#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    // Typecasting character to integer to get ASCII value
    cout << "The ASCII value of " << ch << " is: " << (int)ch << endl;

    return 0;
}

