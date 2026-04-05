#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n < 0) {
        
        cout << "Absolute value is: " << (-n) << endl;
    } else {
        
        cout << "Absolute value is: " << n << endl;
    }

    return 0;
}
