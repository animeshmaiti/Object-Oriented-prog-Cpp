// Define a class to represent a bank account. Include the following data members:
// Name of the account holder
// Account number
// Type of account (use SB for savings and CB for current)
// Balance amount in the account
// Write member functions to deposit an amount in the account, withdraw an amount from 
// the account and display balance amount after each deposit or withdraw.
#include <iostream>
using namespace std;
class BankAccount
{
private:
    char name[50];
    int acc_no;
    char acc_type[50];
    float balance;
public:
    void read();
    void deposit();
    void withdraw();
    void display();
};
void BankAccount::read()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> acc_no;
    cout << "Enter account type: ";
    cin >> acc_type;
    cout << "Enter balance: ";
    cin >> balance;
}
void BankAccount::deposit()
{
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "deposit successful\nnew Balance: " << balance << endl;
}
void BankAccount::withdraw()
{
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    balance -= amount;
    cout << "withdraw successful\nnew Balance: " << balance << endl;
}
void BankAccount::display()
{
    cout << "Name: " << name << endl;
    cout << "Account number: " << acc_no << endl;
    cout << "Account type: " << acc_type << endl;
    cout << "Balance: " << balance << endl;
}
int main(){
    BankAccount b[50];
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        b[i].read();
        b[i].deposit();
        b[i].withdraw();
        b[i].display();
    }
    return 0;
}