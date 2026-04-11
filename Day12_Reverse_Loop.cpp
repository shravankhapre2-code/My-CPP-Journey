#include <iostream>
using namespace std;

int main() {
    int start;

    // Practicing English prompts
    cout << "Enter a number to start the countdown: ";
    cin >> start;

    cout << "Counting down in reverse:" << endl;

    // The loop starts at 'start' and stops when i is 1
    // i-- decreases the value in each step
    for (int i = start; i >= 1; i--) {
        cout << i << " ";
    }

    cout << "\nBlast off! 🚀" << endl;

    return 0;
}

