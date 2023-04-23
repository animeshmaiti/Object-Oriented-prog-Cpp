#include <iostream>
#define PI 3.14
using namespace std;

float area(float r)
{
    return PI * r * r;
}

float area(float l, float b)
{
    return l * b;
}

float area(float b, float h, char shape)
{
    if (shape == 't')
    {
        return 0.5 * b * h;
    }
    else if (shape == 's')
    {
        return b * h;
    }
}

int main()
{
    float r, l, b, h;
    char shape;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle: " << area(l, b) << endl;
    cout << "Enter the base and height of the triangle: ";
    cin >> b >> h;
    shape = 't';
    cout << "Area of triangle: " << area(b, h, shape) << endl;
    cout << "Enter the side of the square: ";
    cin >> h;
    shape = 's';
    cout << "Area of square: " << area(h, h, shape) << endl;
    return 0;
}
