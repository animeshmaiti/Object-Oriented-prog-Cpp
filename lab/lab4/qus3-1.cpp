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
    int roll;
    int marks[3];
    GRADE grades[3];
};

void CalculateTotalMark(Student &student)
{
    int totalMark = 0;
    for (int i = 0; i < 3; i++)
    {
        totalMark += student.marks[i];
    }
    cout << "total mark is :" << totalMark << endl;
}

void calculateAvg(Student &student)
{
    float totalMark = 0, Avg;
    for (int i = 0; i < 3; i++)
    {
        totalMark += static_cast<float>(student.marks[i]);
    }
    Avg = totalMark / 3;
    cout << "Average mark is :" << Avg << endl;
}

void displayStudent(Student &student, int idx)
{
    cout << "student " << idx + 1 << " Name: " << student.name << "\nroll no: " << student.roll << endl;
    cout << "student marks in sub1: " << student.marks[0] << " sub2: " << student.marks[1] << " sub3: " << student.marks[2] << endl;
    cout << "Grades: "
         << " sub1: " <<student.grades[0] << " sub2: " << student.grades[1] << " sub2: "
         << student.grades[2] << endl;
}

void calculateGrade(Student &student)
{
    for (int i = 0; i < 3; i++)
    {
        int mark = student.marks[i];
        if (mark >= 90)
            student.grades[i] = O;
        else if (mark >= 80)
        {
            student.grades[i] = E;
        }
        else if (mark >= 70)
        {
            student.grades[i] = A;
        }
        else if (mark >= 60)
        {
            student.grades[i] = B;
        }
        else if (mark >= 50)
        {
            student.grades[i] = C;
        }
        else
        {
            student.grades[i] = F;
        }
    }
}

int main()
{
    int n;
    cout<<"enter number of students: ";
    cin>>n;
    Student *student = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nenter student name: ";
        cin >> student[i].name;
        cout << "\nenter student roll no. ";
        cin >> student[i].roll;
        cout << "\nmarks for sub1, sub2, sub3: ";
        cin >> student[i].marks[0] >> student[i].marks[1] >> student[i].marks[2];
        calculateGrade(student[i]);
        displayStudent(student[i], i);
        CalculateTotalMark(student[i]);
        calculateAvg(student[i]);
    }

    return 0;
}