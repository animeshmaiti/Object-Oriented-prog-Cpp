#include <iostream>
using namespace std;

class Time
{
private:
    int seconds;
    int minutes;
    int hours;

public:
    // Constructor to initialize the object
    // with default values
    Time()
    {
        seconds = 0;
        minutes = 0;
        hours = 0;
    }

    // Constructor to initialize the object
    // with user-defined values
    Time(int s, int m, int h)
    {
        seconds = s;
        minutes = m;
        hours = h;
    }

    // Overloading Prefix increment operator
    // Time operator ++ ()
    // {
    //     ++seconds;
    //     if (seconds > 59)
    //     {
    //         seconds = 0;
    //         ++minutes;
    //         if (minutes > 59)
    //         {
    //             minutes = 0;
    //             ++hours;
    //             if (hours > 23)
    //                 hours = 0;
    //         }
    //     }
    //     return Time(seconds, minutes, hours);
    // }

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

    // Overloading Prefix decrement operator
    // Time operator -- ()
    // {
    //     seconds--;
    //     if (seconds < 0)
    //     {
    //         seconds = 59;
    //         minutes--;
    //         if (minutes < 0)
    //         {
    //             minutes = 59;
    //             hours--;
    //             if (hours < 0)
    //                 hours = 23;
    //         }
    //     }
    //     return Time(seconds, minutes, hours);
    // }

    // Overloading Postfix decrement operator
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

    // Ask user to enter time
    cout << "Enter time:" << endl;
    cout << "Hours? ";
    cin >> h;
    cout << "Minutes? ";
    cin >> m;
    cout << "Seconds? ";
    cin >> s;

    // Create an object and initialize it with user-defined values
    Time t1(s, m, h);
    // Time t1;

    // Use prefix and postfix increment operator
    // ++t1;
    t1++;

    // Display updated time
    cout << endl
         << "Time after incrementing is ";
    cout << t1;

    // Use prefix and postfix decrement operator
    // --t1;
    t1--;

    // Display updated time
    cout << endl
         << "Time after decrementing is ";
    cout << t1;

    return 0;
}