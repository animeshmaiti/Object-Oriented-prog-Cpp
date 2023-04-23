#include<iostream>
using namespace std;

class ABC{
	private:
		int x;
	public:
		ABC(){
		}
		ABC(int y){
			x=y;
		}
		void show(){
			cout<<"The private member value of x is : "<<x<<endl;
		}
		ABC operator -(ABC Ob1){
			ABC Temp;
			Temp.x=x-Ob1.x;
			return Temp;
		}
		
};

int main(){
	ABC a1(10), a2(12), a3;
	a3=a1-a2;
	a3.show();
}