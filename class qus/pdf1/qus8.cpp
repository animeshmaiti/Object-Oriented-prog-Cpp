// Write a C++ program that can calculate square and cube of the first n
// natural numbers.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the value:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "square of " << i << " is " << i * i << endl;
        cout << "cube of " << i << " is " << i * i * i << endl;
    }
    return 0;
}