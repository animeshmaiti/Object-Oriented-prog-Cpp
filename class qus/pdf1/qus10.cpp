// Write an algorithm to determine a student’s final grade and indicate
// whether it is passing or failing. The final grade is calculated as the
// average of five marks. Write a C++ code for the same.
// Using if-else, switch-case
#include<iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    float avg;

    cout << "Enter five marks: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    if(avg >= 40)
    {
        cout << "Final grade: " << avg << endl;
        cout << "Result: Passed";
    }
    else
    {
        cout << "Final grade: " << avg << endl;
        cout << "Result: Failed";
    }

    return 0;
}
