// Write a program which can display the size of the pointer variables
// Write a program which can display the values and address of a pointer
// Variable.
// - Write a program to add two floating point numbers using pointer.
// - Write a program to find out the biggest of three numbers using pointer.
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6, c = 7;
    int *p = &a;
    int *p1 = &b;
    int *p2 = &c;
    float *q;
    char *r;
    cout << "Size of int pointer: " << sizeof(p) << endl;
    cout << "Size of float pointer: " << sizeof(q) << endl;
    cout << "Size of char pointer: " << sizeof(r) << endl;
    cout << "Value of a: " << *p << endl;
    cout << "Address of a: " << p << endl;
    cout << "sum of a,b: " << *p1 + *p << endl;
    if (*p > *p1)
    {
        if (*p > *p2)
        {
            cout<<*p <<" is the maximum value"<<endl;
        }
        else
        {
            cout<<*p2 <<" is the maximum value"<<endl;
        }
    }
    else
    {
        if (*p1 > *p2)
        {
            cout<<*p1 <<" is the maximum value"<<endl;
        }
        else
        {
            cout<<*p2 <<" is the maximum value"<<endl;
        }
    }
    return 0;
}