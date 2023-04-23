// Write a C++ program to increment and decrement time in seconds using the concepts of class
// and operator overloading. Enter the user-defined input using the overloaded stream
// insertion operator. Display the class object using overloaded stream extraction operator.

#include <iostream>
using namespace std;

class Time
{
private:
    int seconds;
    int minutes;
    int hours;

public:
    Time()
    {
        seconds = 0;
        minutes = 0;
        hours = 0;
    }
    Time(int s, int m, int h)
    {
        seconds = s;
        minutes = m;
        hours = h;
    }
    // Overloading Postfix increment operator
    Time operator++(int)
    {
        Time T(seconds, minutes, hours);
        seconds++;
        if (seconds > 59)
        {
            seconds = seconds % 60;
            minutes++;
            if (minutes > 59)
            {
                minutes = minutes % 60;
                hours++;
                if (hours > 23)
                    hours = hours % 24;
            }
        }
        return T;
    }
    // Overloading Prefix increment operator
    Time operator--(int)
    {
        Time T(seconds, minutes, hours);
        seconds--;
        if (seconds < 0)
        {
            seconds = 59;
            minutes--;
            if (minutes < 0)
            {
                minutes = 59;
                hours--;
                if (hours < 0)
                    hours = 23;
            }
        }
        return T;
    }
    // Overloading stream insertion operator
    friend ostream &operator<<(ostream &output, const Time &T)
    {
        output << T.hours << ":" << T.minutes << ":" << T.seconds;
        return output;
    }

    // Overloading stream extraction operator
    friend istream &operator>>(istream &input, Time &T)
    {
        input >> T.hours >> T.minutes >> T.seconds;
        return input;
    }
};

int main()
{
    int s, m, h;
    cout << "enter time\n";
    cout << "hour: ";
    cin >> h;
    cout << "minute: ";
    cin >> m;
    cout << "second: ";
    cin >> s;
    Time t1(s, m, h);
    cout << "What you want to do? \n 1. Increment, \n 2. Decrement\n Input your choice: ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Time is: ";
        cout << t1;
        t1++;
        cout << "\nIncremented time is: ";
        cout << t1;
        break;
    case 2:
        cout << "Time is: ";
        cout << t1;
        t1--;
        cout << "\nDecremented time is: ";
        cout << t1;
        break;
    default:
        cout << "Invalid Input!";
        break;
    }
    return 0;
}
