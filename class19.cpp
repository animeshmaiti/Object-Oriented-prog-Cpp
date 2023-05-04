#include <iostream>
using namespace std;
class simple{
    int x;
    public:
    simple(){}
    simple(int a){
        x = a;
    }
    simple operator++(){
        ++x;
        return simple(x);
    }
    simple operator++(int y){
        y=x++;
        return simple(y);
    }
    void display(){
        cout << x << endl;
    }
};

int main(){
    simple s1(10), s2;
    s2 = ++s1;
    cout<<"prefix increment: ";
    s1.display();
    simple s3(20);
    s2 = s3++;
    cout<<"postfix increment: ";
    s2.display();
    return 0;
}