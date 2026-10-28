#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, temp;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}