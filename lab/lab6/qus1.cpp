#include <iostream>
using namespace std;

class BankAccount
{
    string name;
    int accNo;
    float balance;

public:
    BankAccount() // default constructor
    {
        name = "";
        accNo = 0;
        balance = 0;
    }
    BankAccount(string n, int a, float b) // parameterized constructor
    {
        name = n;
        accNo = a;
        balance = b;
    }
    BankAccount(string p, int q, int c, float d, float w) // parameterized constructor
    {
        name = p;
        accNo = q;
        if (c = 1)
        {
            balance = d + w;
        }
        else if (c = 2)
        {

            balance = d - w;
        }
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Account Number = " << accNo << endl;
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    string n;
    int a;
    float b;
    cout << "Enter the name, account number and balance of the account: ";
    cin >> n >> a >> b;
    BankAccount b1(n, a, b);
    b1.display();
    cout << "Enter what you want to deposit or withdraw from the account(1. Deposit, 2.Withdrawl): ";
    int ch;
    cin >> ch;

    if (ch == 1)
    {
        cout << "Enter the amount you want to deposit: ";
        float d;
        cin >> d;
        BankAccount b3(n, a, ch, b, d);
        b3.display();
    }
    else if (ch == 2)
    {
        cout << "Enter the amount you want to withdraw: ";
        float w;
        cin >> w;
        BankAccount b4(n, a, ch, b, w);
        b4.display();
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}
