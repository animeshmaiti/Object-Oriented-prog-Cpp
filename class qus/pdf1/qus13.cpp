// Write a C++ program that can calculate the sum of cubes of
// numbers from 1-n.
#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "enter the value:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        sum= sum +(i*i*i);
    }
    cout<<sum;
    return 0;
}