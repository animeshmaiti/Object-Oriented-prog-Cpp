// Write a program to add two integers using function
#include <iostream>
using namespace std;
int sum(int,int);
void swap(int *a,int *b);
int main(){
    int a=56,b=23;
    cout<<"sum of 2 numbers: "<<sum(a,b)<<endl;
    cout<<"before swap a: "<<a<<" b: "<<b<<endl;
    swap(&a,&b);
    cout<<"after swap value of a: "<<a<<" value of b: "<<b<<endl;
    return 0;
}
int sum(int a,int b){
    return a+b;
}
// Write a C++ program to swap two numbers using function
void swap(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}