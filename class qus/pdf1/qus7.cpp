// Write a program which can take the number from user and check the value
// entered is -1 or not and also you need to check the given number is >=or<
// than 0 or not using conditional statement. Do the same program using
// switch-case.
#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "enter a number:";
    cin >> a;
    switch (a)
    {
    case -1:
        cout << " is -1" << endl;
        break;
    default:
        if (a >= 0)
            cout << a << " is >= 0" << endl;
        else
            cout << a << " is < 0" << endl;
        break;
    }
    return 0;
}