#include <iostream>
using namespace std;

// 1. Function Prototype (This tells the compiler: "usa is coming later")
void usa(); 

void india() {
    cout << "You are in India" << endl;
    usa(); // Now this works!
}

void usa() {
    cout << "You are in USA" << endl;
}

int main() {
    cout << "You are in main" << endl;
    india();
    return 0;
}
