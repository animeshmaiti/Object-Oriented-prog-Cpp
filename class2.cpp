#include <iostream>
using namespace std;

int main(){
    int a;
    char ch;
    cout<<"enter a alphabet\n";
    cin>>ch;
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
            cout<<"wrong input \n";
        break;
    }
    return 0;
}