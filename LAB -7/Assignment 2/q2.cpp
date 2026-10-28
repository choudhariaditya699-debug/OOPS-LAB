
#include <iostream>
using namespace std;

void reverse(string s, int i) {
    if (i < 0)
        return;

    cout << s[i];
    reverse(s, i - 1);
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    reverse(s, s.length() - 1);

    return 0;
}
