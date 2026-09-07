#include <iostream>
using namespace std;

class Matrix
{
private:
    int mat[10][10];
    int rows;
    int cols;

public:
    void getMatrix()
    {
        cout << "Enter number of rows: ";
        cin >> rows;

        cout << "Enter number of columns: ";
        cin >> cols;

        cout << "Enter matrix elements:" << endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    friend Matrix addMatrix(Matrix, Matrix);
};

Matrix addMatrix(Matrix m1, Matrix m2)
{
    Matrix result;

    if (m1.rows != m2.rows || m1.cols != m2.cols)
    {
        cout << "Matrix addition is not possible." << endl;
        result.rows = 0;
        result.cols = 0;
        return result;
    }

    result.rows = m1.rows;
    result.cols = m1.cols;

    for (int i = 0; i < result.rows; i++)
    {
        for (int j = 0; j < result.cols; j++)
        {
            result.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }

    return result;
}

int main()
{
    Matrix m1, m2, sum;

    cout << "Enter first matrix:" << endl;
    m1.getMatrix();

    cout << "\nEnter second matrix:" << endl;
    m2.getMatrix();

    sum = addMatrix(m1, m2);

    cout << "\nFirst Matrix:" << endl;
    m1.display();

    cout << "\nSecond Matrix:" << endl;
    m2.display();

    if (sum.rows != 0 && sum.cols != 0)
    {
        cout << "\nSum of Two Matrices:" << endl;
        sum.display();
    }

    return 0;
}