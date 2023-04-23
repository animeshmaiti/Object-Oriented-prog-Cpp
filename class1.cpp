#include <iostream>
using namespace std;
// main code
int main()
{
    int roll;
    cout << "animesh maiti" << endl;
    cout << "enter your roll:";
    cin >> roll;
    cout << roll;
    if (roll % 2 != 0 && roll%10==0)
    {
        cout <<endl<< "odd no.and ";
    }
    else 
        cout <<endl << "odd";
    if (roll % 10==0)
    {
        cout<<endl<<"divisible by 10";
    }
    else{
        cout<<endl<<"it's not divisible by 10";
    }
    return 0;
}