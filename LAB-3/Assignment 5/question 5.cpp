#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers (x and y): ";
    cin >> x >> y;

    cout << "Before Swapping: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After Swapping: x = " << x << ", y = " << y << endl;

    return 0;
}