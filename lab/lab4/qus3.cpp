#include <iostream>
using namespace std;
enum GRADE
{
    O,
    E,
    A,
    B,
    C,
    F
};

struct Student
{
    string name;
    int rollNo;
    int marks[3];
};

void totalMarks(Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = 0; j < 3; j++)
        {
            total += s[i].marks[j];
        }
        cout << s[i].name << " (Roll No. " << s[i].rollNo << ") obtained " << total << " marks." << endl;
    }
}

void avgMarks(Student s[], int n)
{
    for (int i = 0; i < 3; i++)
    {
        int total = 0;
        for (int j = 0; j < n; j++)
        {
            total += s[j].marks[i];
        }
        double avg = total / (double)n;
        cout << "Average marks obtained in subject " << i + 1 << " are " << avg << endl;
    }
}

void printGrades(Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " (Roll No. " << s[i].rollNo << ") obtained the following grades:" << endl;
        for (int j = 0; j < 3; j++)
        {
            int marks = s[i].marks[j];
            GRADE grade;
            if (marks >= 90)
            {
                grade = O;
            }
            else if (marks >= 80)
            {
                grade = E;
            }
            else if (marks >= 70)
            {
                grade = A;
            }
            else if (marks >= 60)
            {
                grade = B;
            }
            else if (marks >= 50)
            {
                grade = C;
            }
            else
            {
                grade = F;
            }
            cout << "Subject " << j + 1 << ": ";
            switch (grade)
            {
            case O:
                cout << "O";
                break;
            case E:
                cout << "E";
                break;
            case A:
                cout << "A";
                break;
            case B:
                cout << "B";
                break;
            case C:
                cout << "C";
                break;
            case F:
                cout << "F";
                break;
            }
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name, roll number and marks in 3 subjects for student " << i + 1 << ":" << endl;
        cin >> students[i].name >> students[i].rollNo >> students[i].marks[0] >> students[i].marks[1] >> students[i].marks[2];
    }

    totalMarks(students, n);
    avgMarks(students, n);
    printGrades(students, n);
    return 0;
}
