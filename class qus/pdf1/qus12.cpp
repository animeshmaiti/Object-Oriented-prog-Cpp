// Write a C++ program that can print the reverse of a number.
#include <iostream>
using namespace std;

int main(){
    int n, rev = 0;
    cout << "enter the value:";
    cin >> n;//12345
    while (n > 0)
    {
        rev = rev*10+(n % 10);//0*10+5=5, 5*10+4=54, 54*10+3=543, 543*10+2=5432, 5432*10+1=54321
        n = n/10;
    }
    cout << "reverse of the number is " << rev << endl;
    return 0;
}