#include <iostream>
using namespace std;

class Matrix
{
    int a[20][20], b[20][20], d[20][20], r, c;

public:
    Matrix()
    {
        r = 0;
        c = 0;
    }
    Matrix(int x, int y)
    {
        r = x;
        c = y;
    }
    void getMatrix()
    {
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void showMatrix()
    {
        cout << "The matrix is: " << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator-(Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator*(Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = m.c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < m.c; j++)
            {
                temp.a[i][j] = 0;
                for (int k = 0; k < c; k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return temp;
    }
};

int main()
{
    Matrix m1, m2, m3;
    int r1, c1, r2, c2, ch;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    m1 = Matrix(r1, c1);
    m1.getMatrix();
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;
    m2 = Matrix(r2, c2);
    m2.getMatrix();
    cout << "What you want to do? 1. Addition, 2. Substraction, 3. Multiplication: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        if (r1 == r2 && c1 == c2)
        {
            m3 = m1 + m2;
            m3.showMatrix();
        }
        else
        {
            cout << "Rows and column of two matrices are not same addition can't be done.";
        }
        break;
    case 2:
        if (r1 == r2 && c1 == c2)
        {
            m3 = m1 - m2;
            m3.showMatrix();
        }
        else
        {
            cout << "Rows and column of two matrices are not same substraction can't be done.";
        }
        break;
    case 3:
        if (c1 == r2)
        {
            m3 = m1 * m2;
            m3.showMatrix();
        }
        else
        {
            cout << "Column value of first matrix and Row value of the second matrix is not same so multiplication can't be done.";
        }
        break;
    default:
        cout << "Wrong input.";
        break;
    }
    return 0;
}
