// rno,cgpa,name
#include <iostream>

using namespace std;
class Student
{
    int rollno;
    float cgpa;
    string name;

public:
    Student(int rno, float CGPA, string Name)
    {
        rollno = rno;
        cgpa = CGPA;
        name = Name;
    }
    void display(){
        cout<<"RollNo: "<<rollno<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main()
{
    Student s1(2130006, 7.10, "Animesh");
    s1.display();
    return 0;
}