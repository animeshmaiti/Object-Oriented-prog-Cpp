#include<iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    float avg;

    cout << "Enter five marks: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;
    int ch=avg/10;
    switch(ch)
    {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
            cout << "Final grade: " << avg << endl;
            cout << "Result: Passed";
            break;
        default:
            cout << "Final grade: " << avg << endl;
            cout << "Result: Failed";
            break;
    }

    return 0;
}
