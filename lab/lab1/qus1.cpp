// (x=/y)-z
#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    float f1,f;
    cout<<"enter the value of x"<<endl;
    cin >> x;
    cout<<"enter the value of y"<<endl;
    cin >> y;
    cout<<"enter the value of z"<<endl;
    cin >> z;
    f1=(float)x/y;
    f=f1-z;
    cout<<"the result is "<<f;
    return 0;
}