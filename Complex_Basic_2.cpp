# include<iostream>
using namespace std;
int get(int x);
int main()
{
	int x3;
	int y3;
	
	cout<<"The Complex Number 1 : "<<get(10)<<" +i "<<get(12)<<endl;
	cout<<"The Complex Number 2 : "<<get(11)<<" +i "<<get(13)<<endl;
	x3=get(10)+get(11);
	y3=get(12)+get(13);
	cout<<"The Complex Number Result : "<<x3<<" +i "<<y3<<endl;
	return 0;
}
int get(int x){
	return x;
}

