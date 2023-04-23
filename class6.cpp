#include <iostream>
using namespace std;

enum color{red, blue, black=45,green, yellow, purple=66, white,orange};

int main(){
    enum color var;
    // COLORS p=BLACK;
    cout<<black;
    int s=black+blue;
    cout<<s;
    // cin>>var;
    var=black;
    float a=67.56567f;
    cout<<a;
    switch (var)
    {
    case 0:
        cout<<"red\n";
        break;
    case 1:
        cout<<"blue\n";
        break;
    case 45:
        cout<<"black\n";
        break;
    case 3:
        cout<<"green\n";
        break;
    
    default:
        break;
    }
    var=purple;
    cout<<var;
    // /type cast enum to int
    int s=static_cast<char>(black);
    int s1=static_cast<int>(orange);
    // cout<<s1+s;
    cout<<s;
    // int s=static_cast<int>();
    // cout<<s;
    
    return 0;
}