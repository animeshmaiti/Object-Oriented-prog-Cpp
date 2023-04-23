// Write a C++ program that can calculate the sum of squares of
// odd numbers
#include <iostream>
using namespace std;

int main(){
    int sum=0,n;
    cout<<"enter the value:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if (i%2!=0)
        {
            sum=sum+(i*i);
        }
    }
    cout<<sum;    
    return 0;
}