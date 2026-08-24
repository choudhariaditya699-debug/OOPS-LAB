#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n], revArr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        revArr[i] = arr[n - 1 - i];
    }

    cout << "Reversed array elements: ";
    for (int i = 0; i < n; i++) {
        cout << revArr[i] << " ";
    }
    cout << endl;
    return 0;
}