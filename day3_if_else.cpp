#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "--- Day 3: Decision Making with If-Else ---" << endl;
    
    
    cout << "Please enter your age: ";
    cin >> age;

    
    if (age >= 18) {
        
        cout << "Status: Success! You are eligible to vote." << endl;
    } 
    else {
        
        cout << "Status: Sorry, you are not eligible to vote yet." << endl;
        cout << "You need to wait " << 18 - age << " more year(s)." << endl;
    }

    cout << "------------------------------------------" << endl;
    return 0;
}

