#include <iostream>
using namespace std;
void swap(int *ptr1,int*ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int main(){
    int a,b,temp;
    // int *ptr1,*ptr2;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    swap(&a,&b);
    // ptr1=&a;
    // ptr2=&b;
    
    // temp=a;
    // a=b;
    // b=temp;
    cout<<"a:"<<a<<" b:"<<b;
    return 0;
}