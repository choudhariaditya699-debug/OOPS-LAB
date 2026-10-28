#include <iostream>
using namespace std;

class Fibonacci
{
    int n;

public:
    // Default constructor
    Fibonacci()
    {
        n = 0;
    }

    void input()
    {
        cout << "Enter the number of terms: ";
        cin >> n;
    }

    void generate()
    {
        int a = 0, b = 1, c;

        cout << "Fibonacci Series: ";

        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
    }
};

int main()
{
    Fibonacci f;

    f.input();
    f.generate();

    return 0;
}