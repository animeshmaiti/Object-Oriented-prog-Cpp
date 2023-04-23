#include <iostream>

using namespace std;

float area(float);
float area(float, float);
float area2(float, float);
float area2(float);
int main()
{
    float r, l, w, b, h, a;
    int choose;
    cout << "\nEnter 1 for circle\nEnter 2 for rectangle\nEnter 3 for triangle\nEnter 4 for square\n";
    cin >> choose;

    cout << "Kunal Das\n2130112\n";
    switch (choose)
    {
    case 1:
        cout << "\nEnter the radious of circle:";
        cin >> r;
        cout << area(r);
        break;
    case 2:
        cout << "\nEnter the length & width of the rectangle:";
        cin >> l >> w;
        cout << area(l, w);
        break;
    case 3:
        cout << "\nEnter the base & hight of the triangle:";
        cin >> b >> h;
        cout << area2(b, h);
        break;
    case 4:
        cout << "\nEnter the length of square:";
        cin >> a;
        cout << area2(a);
        break;
    default:
        cout << "\ninvalid input.";
        break;
    }
}
float area(float r)
{

    return (3.14 * r * r);
}
float area(float l, float w)
{

    return (l * w);
}
float area2(float b, float h)
{

    return (0.5 * b * h);
}
float area2(float a)
{

    return (a * a);
}
