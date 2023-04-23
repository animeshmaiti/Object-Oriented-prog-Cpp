#include <iostream>
using namespace std;
class complex{
    int x, y;
    public:
        complex(){}
        complex(int a, int b){
            x = a;
            y = b;
        }
        void show(){
            cout<<"The real part is: "<<x<<" The imaginary part is: "<<y<<endl;
            cout<<"The complex number is: "<<x<<" + "<<y<<"i"<<endl;
        }
        void add(complex c1, complex c2){
            x = c1.x + c2.x;
            y = c1.y + c2.y;
            cout<<"The sum of the complex numbers is: "<<x<<" + "<<y<<"i"<<endl;
        }
        void multiply(complex c1, complex c2){
            x = c1.x*c2.x - c1.y*c2.y;
            y = c1.x*c2.y + c1.y*c2.x;
            cout<<"The product of the complex numbers is: "<<x<<" + "<<y<<"i"<<endl;
        }
        void division(complex c1,complex c2){
            x = (c1.x*c2.x + c1.y*c2.y)/(c2.x*c2.x + c2.y*c2.y);
            y = (c1.y*c2.x - c1.x*c2.y)/(c2.x*c2.x + c2.y*c2.y);
            cout<<"The division of the complex numbers is: "<<x<<" + "<<y<<"i"<<endl;
        }
};

int main(){
    int a, b;
    complex c;
    cout<<"Enter the real part  and imaginary part: ";
    cin>>a>>b;
    complex c1(a, b);
    c1.show();
    cout<<"Enter the real part  and imaginary part: ";
    cin>>a>>b;
    complex c2(a, b);
    c2.show();
    c.add(c1, c2);
    c.multiply(c1, c2);
    c.division(c1,c2);

    return 0;
}