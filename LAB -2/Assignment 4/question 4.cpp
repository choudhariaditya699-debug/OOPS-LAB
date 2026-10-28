#include <iostream>
using namespace std;

int main() {
    int n, binaryNum[32], i = 0;
    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    cout << endl;

    return 0;
}