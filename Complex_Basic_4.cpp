# include<iostream>
using namespace std;
class Complex{
	private:
		int x;
		int y;
	public:
		int getRe(int x1){
			x=x1;
			return x;
		}
		int getIm(int y1){
			y=y1;
			return y;
		}		
		void show()
		{
			cout<<"The Complex Number Result : "<<x<<" +i "<<y<<endl;
		}
};

int main()
{
	// using object you cant access private data member from outside the class 
	//int x3; 	int y3;
	Complex Ob1, Ob2, Ob3;
	cout<<"The Complex Number 1 : "<<Ob1.getRe(10)<<" +i "<<Ob1.getIm(12)<<endl;
	cout<<"The Complex Number 2 : "<<Ob2.getRe(11)<<" +i "<<Ob2.getIm(13)<<endl;
	Ob3.getRe(Ob1.getRe(10)+Ob2.getRe(11));
	Ob3.getIm(Ob1.getIm(12)+Ob2.getIm(13));
	Ob3.show();
	//cout<<"The Complex Number Result : "<<<<" +i "<<y3<<endl;
	return 0;
}

