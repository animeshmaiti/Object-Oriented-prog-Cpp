//Enter the student details in the form of roll & age using class 20 students using class & objects
# include<iostream>
using namespace std;

class student
{
	private:
		int roll;
		int age;
	public:
		student(int x, int y)
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
	student s1(101,10), s2(102,12), s3(103,11);
	//s1.get(101, 10);
	//s2.get(102,12);
	//s3.get(103,11);
	s1.show();
	s2.show();
	s3.show();
	return 0;
}

