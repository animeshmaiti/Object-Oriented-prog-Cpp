//Enter the student details in the form of roll & age using class 20 students using construct using dynamic array object and loop
# include<iostream>
using namespace std;

class student
{
	private:
		int roll;
		int age;
	public:
		student()
		{
			roll=0;
			age=0;
		}
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
	student *s[3];
	int p, q;
	/*for(int i=0;i<3;i++)
	{
		cout<<"Enter the roll no  "<<endl;
		cin>>p;
		cout<<"Enter the age  "<<endl;
		cin>>q;
		s[i]=student(p, q);
		s[i].show();
	}*/	
	return 0;
}

