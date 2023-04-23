#include <iostream>
using namespace std;
#define PI 3.14
int r = 2;

class MyClass
{
public:
    int a;
    void display()
    {
        cout << "inside class" << endl;
    }
};
void area(){
    float area;
    area =PI*r*r;
    cout<<area<<endl;
}
int main()
{
    MyClass m;
    m.a=90;
    m.display();
    area();
    cout<<m.a<<endl;
    return 0;
}