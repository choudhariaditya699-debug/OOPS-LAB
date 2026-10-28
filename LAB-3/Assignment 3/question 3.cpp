#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nUpper Triangular Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j)
                cout << mat[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}