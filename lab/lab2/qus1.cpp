#include <iostream>
using namespace std;
int gcd(int n1,int n2){
    if (n2!=0)
    {
        return gcd(n2,n1%n2);
    }
    else
        return n1;
}
int main(){
    int value,n1,n2;
    cout<<"enter 2 number\n";
    cin>>n1>>n2;
    value=gcd(n1,n2);
    cout<<value;
    return 0;
}