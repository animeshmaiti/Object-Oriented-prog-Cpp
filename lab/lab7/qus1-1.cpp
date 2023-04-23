#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s;

public:
    Time()
    {
        h = 0;
        m = 0;
        s = 0;
    }
    Time(int a, int b, int c)
    {
        h = a;
        m = b;
        s = c;
    }
    Time operator++()
    {
        s++;
        if (s == 60)
        {
            s = 0;
            m++;
        }
        if (m == 60)
        {
            m = 0;
            h++;
        }
        if (h == 24)
        {
            h = 0;
        }
    }
    Time operator++(int s)
    {
        s++;
        if (s == 60)
        {
            s = 0;
            m++;
        }
        if (m == 60)
        {
            m = 0;
            h++;
        }
        if (h == 24)
        {
            h = 0;
        }
    }
    Time operator--()
    {
        s--;
        if (s == -1)
        {
            s = 59;
            m--;
        }
        if (m == -1)
        {
            m = 59;
            h--;
        }
        if (h == -1)
        {
            h = 23;
        }
    }
    Time operator--(int s)
    {
        s--;
        if (s == -1)
        {
            s = 59;
            m--;
        }
        if (m == -1)
        {
            m = 59;
            h--;
        }
        if (h == -1)
        {
            h = 23;
        }
    }
    friend ostream &operator<<(ostream &out, Time &t);
    friend istream &operator>>(istream &in, Time &t);
};

ostream &operator<<(ostream &out, Time &t)
{
    out << t.h << ":" << t.m << ":" << t.s << endl;
    return out;
}

istream &operator>>(istream &in, Time &t)
{
    cout << "Enter the time in HH:MM:SS format:";
    in >> t.h >> t.m >> t.s;
    return in;
}

int main()
{
    Time t1;
    cin >> t1;
    cout << "What you want to do? \n 1. Increment, \n 2. Decrement\n Input your choice: ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Time is:";
        cout << t1;
        ++t1;
        cout << "Incremented time is:";
        cout << t1;
        break;
    case 2:
        cout << "Time is:";
        cout << t1;
        --t1;
        cout << "Decremented time is:";
        cout << t1;
        break;
    default:
        cout << "Invalid Input!";
        break;
    }
    return 0;
}
