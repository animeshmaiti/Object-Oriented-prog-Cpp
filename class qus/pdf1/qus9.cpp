// Write a C++ code that can print
// first n numbers.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the value:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}