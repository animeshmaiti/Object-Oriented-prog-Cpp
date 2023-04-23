// Write a recursive function to obtain the running sum of first 25
// natural numbers.
// Write a program to find whether a number is even or odd using functions.
// Write a function which can swap two variable using call
// by value.
#include <iostream>
using namespace std;
int sum(int n){
    if(n==1)
        return 1;
    else
        return n+sum(n-1);//n+(n-1)+(n-2)+...+1
}
void oddEven(int n){
    if(n%2==0)
        cout<<"Even\n";
    else
        cout<<"Odd\n";
}
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a: "<<a<<" b: "<<b<<endl;
}
void swapByAddr(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    cout<<"Sum of first 25 natural numbers is: "<<sum(25)<<endl;
    oddEven(5);
    swap(5,6);
    int a=5,b=8;
    cout<<"before swap a: "<<a<<" b: "<<b<<endl;
    swapByAddr(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
    return 0;
}