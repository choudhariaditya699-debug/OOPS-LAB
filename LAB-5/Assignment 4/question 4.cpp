#include <iostream>
using namespace std;

class Array
{
    int arr[100];
    int n;

public:
    // Constructor
    Array(int size)
    {
        n = size;
    }

    void input()
    {
        cout << "Enter " << n << " elements: ";

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    // Friend function
    friend int calculateSum(Array *obj);
};

// Friend function using object pointer
int calculateSum(Array *obj)
{
    int sum = 0;

    for (int i = 0; i < obj->n; i++)
    {
        sum += obj->arr[i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    // Object created using constructor
    Array a(n);

    // Object pointer
    Array *ptr = &a;

    ptr->input();

    // Friend function with object pointer
    int sum = calculateSum(ptr);

    cout << "Sum of all array elements = " << sum << endl;

    return 0;
}