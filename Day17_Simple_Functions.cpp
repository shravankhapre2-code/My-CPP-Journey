#include <iostream>
using namespace std;

// 1. A simple function that just prints a message
void sayHello() {
    cout << "Hello Shravan! Welcome to Day 17." << endl;
}

// 2. A simple function that adds two numbers
int simpleSum(int a, int b) {
    return a + b;
}

int main() {
    // Calling the first function
    sayHello();

    // Calling the second function with numbers 5 and 10
    int result = simpleSum(5, 10);
    
    cout << "The sum of 5 and 10 is: " << result << endl;

    return 0;
}
