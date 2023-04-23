//Enter the student details in the form of roll & age using class 20 students using array objects
# include<iostream>
using namespace std;

class student
{
	private:
		int roll;
		int age;
	public:
		void get(int x, int y)
		{
			roll=x;
			age=y;
		}
		void show()
		{
			cout<<"The roll Number is : "<<roll<<" The age is : "<<age<<endl;
		}
};
int main()
{
	student s[3];
	int p, q;	
	s[0].get(101, 10);
	s[1].get(102,12);
	s[2].get(103,11);
	s[0].show();
	s[1].show();
	s[2].show();
	return 0;
}

