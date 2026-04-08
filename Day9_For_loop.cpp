#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    // The for loop handles everything in one line
    for (int i = 1; i <= n; i++) {
        sum += i; // This means sum = sum + i
    }

    cout << "The sum of first " << n << " numbers is: " << sum << endl;

    return 0;
}
