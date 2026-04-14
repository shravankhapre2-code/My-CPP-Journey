#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        
        // Logic: Add previous two terms to get the next term
        next = first + second;
        first = second;
        second = next;

        cout << next << " ";
    }

    cout << endl;
    return 0;
}
