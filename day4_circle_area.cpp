#include <iostream>
using namespace std;

int main() {
    float r, area;
    float pi = 3.14159;

    cout << "Enter radius of circle: ";
    cin >> r;

    area = pi * r * r;

    cout << "Area of the circle is: " << area << endl;

    return 0;
}

