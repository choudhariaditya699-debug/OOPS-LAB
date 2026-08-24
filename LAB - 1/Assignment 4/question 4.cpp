#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, rem;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    do {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    } while (temp > 0);

    cout << "Reverse of " << num << " is: " << rev << endl;
    return 0;
}