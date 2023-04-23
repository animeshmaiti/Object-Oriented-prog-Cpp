#include <iostream>
using namespace std;
// give an example of nested class
// 
class Data
{
private:
    char name[20];

public:
    class Student
    {
    private:
        int roll;

    public:
        void display1();
        void set_data();
    };
    void set_data();
    void display2();
};
void Data::Student::set_data()
{
    cout << "enter the data: ";
    cin >> roll;
}
inline void Data::Student::display1()
{
    cout << roll;
}
void Data::set_data()
{
    cout << "enter the name: ";
    cin >> name;
}
void Data::display2()
{
    cout << name;
}
int main()
{
    Data s;
    Data::Student d;
    d.set_data();
    d.display1();
    s.set_data();
    s.display2();
    return 0;
}