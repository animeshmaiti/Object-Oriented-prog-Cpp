# include<iostream>
using namespace std;
int getRe(int x);
int getIm(int y);
int main()
{
	int x3;
	int y3;
	
	cout<<"The Complex Number 1 : "<<getRe(10)<<" +i "<<getIm(12)<<endl;
	cout<<"The Complex Number 2 : "<<getRe(11)<<" +i "<<getIm(13)<<endl;
	x3=getRe(10)+getRe(11);
	y3=getIm(12)+getIm(13);
	cout<<"The Complex Number Result : "<<x3<<" +i "<<y3<<endl;
	return 0;
}
int getRe(int x){
	return x;
}
int getIm(int y){
	return y;
}

