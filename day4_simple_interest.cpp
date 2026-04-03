#include <iostream>
using namespace std;

int main() {
    float p, r, t, si;

    cout << "Enter Principal, Rate, and Time: ";
    cin >> p >> r >> t;

    si = (p * r * t) / 100;

    cout << "Simple Interest is: " << si << endl;

    return 0;
}
