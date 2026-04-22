#include <iostream>
using namespace std;

// 1. Function Declaration and Definition
// This function takes two integers and returns their sum
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "--- Day 22: Functions in C++ ---" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // 2. Function Call
    int result = addNumbers(num1, num2);

    cout << "The sum is: " << result << endl;

    return 0;
}

