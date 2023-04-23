// Enter the student details in the form of roll & age using class 20 students using array objects & loop operations
#include <iostream>
using namespace std;

class student
{
private:
	int roll;
	int age;

public:
	student() {}
	student(int x, int y)
	{
		roll = x;
		age = y;
	}
	void show()
	{
		cout << "The roll Number is : " << roll << " The age is : " << age << endl;
	}
};
int main()
{
	student *s = new student();
	int p, q;
	int n;
	cout<<"enter the number of student: ";
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the roll no  " << endl;
		cin >> p;
		cout << "Enter the age  " << endl;
		cin >> q;
		s[i] = student(p, q);
		s[i].show();
	}
	return 0;
}
