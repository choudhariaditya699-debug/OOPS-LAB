#include <iostream>
using namespace std;

class Armstrong
{
    int num;

public:
    Armstrong(int n)
    {
        num = n;
    }

    // Copy constructor
    Armstrong(const Armstrong &obj)
    {
        num = obj.num;
    }

    void check()
    {
        int original = num;
        int temp = num;
        int digits = 0;
        int sum = 0;

        // Count number of digits
        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp != 0)
        {
            int digit = temp % 10;
            int power = 1;

            for (int i = 0; i < digits; i++)
            {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == original)
            cout << original << " is an Armstrong number.";
        else
            cout << original << " is not an Armstrong number.";
    }
};

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Armstrong obj1(n);
    Armstrong obj2(obj1); // Copy constructor

    obj2.check();

    return 0;
}