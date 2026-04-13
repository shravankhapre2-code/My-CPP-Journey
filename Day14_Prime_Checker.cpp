#include <iostream>
using namespace std;

int main() {
    int n;
    bool is_prime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                is_prime = false;
                break; // Exit loop if a factor is found
            }
        }
    }

    if (is_prime)
        cout << n << " is a Prime Number." << endl;
    else
        cout << n << " is not a Prime Number." << endl;

    return 0;
}

