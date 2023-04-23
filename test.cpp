#include <iostream>
using namespace std;
struct student//structure creation with members & variable
{
    char name[50];
    int roll_no;
    int m[3];
} s[10];

enum GRADE//enumaration creation with members & variable
{
    O,
    E,
    A,
    B,
    C,
    D,
    F
} G;

void get_data(int);
void display(int);
float total(int);            //declaration of functions
float sub_avg(int);
float grade(int);
int main()
{
    cout<<"\nKunal das\n2130112\n";
    int n;
    cout << "\nEnter the number of students: ";
    cin >> n;//taking input of no. of students
    get_data(n);
    display(n);
    total(n);       //calling functions
    grade(n);
    sub_avg(n);
    return 0;
}

void get_data(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1;
        cout << "\nName: ";
        cin >> s[i].name;//taking input of name (student wise)
        cout << "\nRoll no.: ";
        cin >> s[i].roll_no;//taking input of roll no (student wise)
        for (int j = 0; j < 3; j++)
        {
            cout << "\nMark of sub" << j + 1 << ": ";
            cin >> s[i].m[j];//taking input of marks (student wise & subject wise)
        }
    }
}

void display(int n)
{//displaying students details
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1;
        cout << "\nName: " << s[i].name << "\nRoll no.: " << s[i].roll_no << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "sub " << j + 1 << ": " << s[i].m[j] << "\n";
        }
    }
}

float total(int n)
{
    float t[10];//array declaration 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[i] = t[i] + s[i].m[j];//calculating student wise total marks of them in 3 subjects
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nTotal marks of " << s[i].name << "= " << t[i];//displaying total
    }

    return 0;
}

float sub_avg(int n)
{
    int avg, sub;
    cout << "\nTo calculate subject average\nEnter 1 for subject-1"
         << "\nEnter 2 for subject-2"
         << "\nEnter 3 for subject-3\n=>";
    while (1)
    {
        avg = 0;
        cin >> sub;//taking input of subject number 
        for (int i = 0; i < n; i++)
        {
            avg = avg + s[i].m[sub - 1];//calculating the avg number of that subject
        }
        cout << "\nAverage of subject-" << sub << ": " << avg / n << endl;//displaying avg
    }
}

float grade(int n)
{
    cout << "\nGrade: 0 Marks: 100-90"
         << "\nGrade: 1 Marks: 89-80"
         << "\nGrade: 2 Marks: 79-70"
         << "\nGrade: 3 Marks: 69-60"
         << "\nGrade: 4 Marks: 59-50"
         << "\nGrade: 5 Marks: 49-40"
         << "\nGrade: 6 Marks: <40";
    for (int i = 0; i < n; i++)
    {
        cout << "\nGrade of " << s[i].name << endl;
        for (int j = 0; j < 3; j++)
        {//checking the number of subject wise & according to the number assigninning grades by enumaration

            if (s[i].m[j] >= 90)
            {
                G = O;
            }
            else if (s[i].m[j] >= 80)
            {
                G = E;
            }
            else if (s[i].m[j] >= 70)
            {
                G = A;
            }
            else if (s[i].m[j] >= 60)
            {
                G = B;
            }
            else if (s[i].m[j] >= 50)
            {
                G = C;
            }
            else if (s[i].m[j] >= 40)
            {
                G = D;
            }
            else
            {
                G = F;
            }
            cout << "\nSubject-" << j + 1 << " :" << G;//displaying grade index as per the enumaration
        }
    }
}