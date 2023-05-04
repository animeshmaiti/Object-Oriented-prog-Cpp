#include <iostream>

using namespace std;

class myclass
{
private:
    int x;

public:
    myclass() {}
    myclass(int);
    myclass operator+(myclass obj)
    {
        myclass ob1;
        ob1.x = x + obj.x;
        return ob1;
    }
    myclass operator-(myclass obj)
    {
        myclass ob1;
        ob1.x = x - obj.x;
        return ob1;
    }
    myclass operator-()
    {
        myclass ob1;
        ob1.x = -x;
        return ob1;
    }
    myclass operator++() //this is prefix
    {
        myclass ob1;
        ob1.x = ++x;
        return ob1;
    }
    myclass operator++(int) //this is postfix
    {
        myclass ob1;
        ob1.x = x++;
        return ob1;
    }
    void show();
    ~myclass();
};

inline myclass::myclass(int p)
{
    x = p;
}

inline myclass::~myclass()
{
    x = 0;
}

inline void myclass::show()
{
    cout << x << "\t";
}
int main(int argc, char const *argv[])
{
    myclass a(10), b(20), c, d;
    a.show();
    b.show();
    c = a + b;
    c.show();
    d = a + b;
    d.show();
    c = -c;
    c.show();
    -d; // no object to receive the object
    d.show();
    c = d++;
    c.show();
    d.show();
    return 0;
}