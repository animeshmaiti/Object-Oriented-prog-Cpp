// Write a C++ program that has a class Employee with data members name, employee ID,
// designation and basic salary. The program must calculate and display the gross salary.
// [Gross salary= Basic salary + DA + HRA, DA = 80% of Basic salary, HRA=10% of Basic salary].
#include <iostream>
using namespace std;
// class definition
class Employee
{
private:
    char name[50];
    int emp_id;
    char designation[50];
    float basic_salary;
public:
    void read();
    void display();
    float gross_salary();
};
// read function definition
void Employee::read()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter employee ID: ";
    cin >> emp_id;
    cout << "Enter designation: ";
    cin >> designation;
    cout << "Enter basic salary: ";
    cin >> basic_salary;
}
// display function definition
void Employee::display(){
    cout << "Name: " << name << endl;
    cout << "Employee ID: " << emp_id << endl;
    cout << "Designation: " << designation << endl;
    cout<<"basic salary: "<<basic_salary<<endl;
}
// gross salary function definition
float Employee::gross_salary(){
    float gross_salary;
    gross_salary = basic_salary + (0.8 * basic_salary) + (0.1 * basic_salary);
    return gross_salary;
}
int main(){
    Employee e[50];
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        e[i].read();
        e[i].display();
        cout << "Gross salary: " << e[i].gross_salary() << endl;
    }
    
    return 0;
}