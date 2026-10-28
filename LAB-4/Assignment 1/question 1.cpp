#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    friend Complex addComplex(Complex, Complex);
};

Complex addComplex(Complex c1, Complex c2)
{
    Complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main()
{
    Complex c1, c2, sum;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "\nEnter second complex number:" << endl;
    c2.getData();

    sum = addComplex(c1, c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}