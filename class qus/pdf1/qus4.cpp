// Write a C++ code for testing whether a number is one, two or three using
// switch-case
#include <iostream>
using namespace std;

int main(){
    int a;
    
    int i=1;
    while (i<=10)
    {
        cout<<i<<endl;
        i++;
    }
    
    cout<<"enter number\n";
    cin>>a;
    switch(a)
    {
    case 1:
        cout<<"number is 1\n";
        break;
    case 2:
        cout<<"number is 2\n";
        break;
    case 3:
        cout<<"number is 3\n";
        break;
    default:
        cout<<"not valid\n";
        break;
    }
    return 0;
}