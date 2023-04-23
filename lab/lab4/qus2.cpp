#include <iostream>
#include <cmath>

using namespace std;

enum SHAPE
{
    CIRCLE,
    RECTANGLE,
    TRIANGLE,
    SQUARE,
    quit
};

double calculateArea(SHAPE shape, double x, double y = 0.0)
{
    switch (shape)
    {
    case CIRCLE:
        return M_PI * x * x;
    case RECTANGLE:
        return x * y;
    case TRIANGLE:
        return 0.5 * x * y;
    case SQUARE:
        return x * x;
    default:
        cout << "Invalid shape" << endl;
        return 0.0;
    }
}

int main()
{
    double x, y;
    SHAPE shape;
    int input;
    while (1)
    {
        cout << "Enter the shape (0 for circle, 1 for rectangle, 2 for triangle, 3 for square, 4 for exit): ";
        cin >> input;
        shape = static_cast<SHAPE>(input);
        switch (shape)
        {
        case CIRCLE:
            cout << "Enter the radius: ";
            cin >> x;
            cout << "Area of circle = " << calculateArea(shape, x, x) << endl;
            break;
        case RECTANGLE:
            cout << "Enter the length and width: ";
            cin >> x >> y;
            cout << "Area of rectangle = " << calculateArea(shape, x, y) << endl;
            break;
        case TRIANGLE:
            cout << "Enter the base and height: ";
            cin >> x >> y;
            cout << "Area of triangle = " << calculateArea(shape, x, y) << endl;
            break;
        case SQUARE:
            cout << "Enter the side length: ";
            cin >> x;
            cout << "Area of square = " << calculateArea(shape,x, x) << endl;
            break;
        case quit:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid shape" << endl;
            break;
        }
        if (input==4)
        {
            break;
        }
    }

    return 0;
}
