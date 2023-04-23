// Write a program to determine whether an entered character is a vowel or
// not.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a alphabet\n";
    cin >> ch;
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << ch << " is a vowel.\n";
        break;
    default:
        cout << "its not vowel\n";
        break;
    }
    return 0;
}