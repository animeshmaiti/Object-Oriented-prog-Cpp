#include <iostream>
using namespace std;

class student
{
public:
    void read();
    void display();
    void largest();
    void smallest();
    void sum();
    void mean();
};
void read()
{
    cout << " I am inside fn but outside class" << endl;
}

int main()
{
    struct student ob1;
    read();
    ob1.read();
    ob1.display();
    ob1.largest();
    ob1.smallest();
    ob1.sum();
    ob1.mean();
    return 0;
}

void student::read()
{
    cout << " I am inside class student read fn" << endl;
}
void student::display()
{
    cout << " I am inside display fn" << endl;
}
void student::largest()
{
    cout << " I am inside largest fn" << endl;
}
void student::smallest()
{
    cout << " I am inside small fn" << endl;
}
void student::sum()
{
    cout << " I am inside sum fn" << endl;
}
void student::mean()
{
    cout << " I am inside so mean fn" << endl;
}