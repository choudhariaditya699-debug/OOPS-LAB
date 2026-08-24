#include <iostream>
using namespace std;

int main() {
    float radius, area, circumference;
    cout << "Enter radius of circle: ";
    cin >> radius;

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    return 0;
}