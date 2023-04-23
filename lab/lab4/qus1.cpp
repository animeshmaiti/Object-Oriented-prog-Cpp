#include <iostream>
#include <string>

using namespace std;

struct BankAccount
{
    string accountHolderName;
    int accountNumber;
    string accountType;
    double balance;
};

void deposit(BankAccount account, double amount)
{
    account.balance = account.balance + amount;
    cout << "Deposit of " << amount << " successful. New balance is: " << account.balance << endl;
}

void withdraw(BankAccount account, double amount)
{
    if (account.balance >= amount)
    {
        account.balance -= amount;
        cout << "Withdrawal of " << amount << " successful. New balance is: " << account.balance << endl;
    }
    else
    {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }
}

void display_balance(BankAccount account)
{
    cout << "Account balance for " << account.accountHolderName << " is: " << account.balance << endl;
}

int main()
{
    int ch;
    int amount;
    int acNumber;
    string name;
    int i;
    BankAccount account[5];
    account[1] = {"shubham nayak", 123456781, "SB", 10000.0};
    account[2] = {"kunal das", 345556672, "SB", 18000.0};
    account[3] = {"soumen das", 357888383, "CB", 15000.0};
    account[4] = {"Animesh Maiti", 1293000884, "CB", 19000.0};
    cout << "Enter account number: ";
    cin >> acNumber;
    i = acNumber % 10;
    // cout << "Enter account holder name: ";
    // cin >> name;
    cout << "1. Display balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    if (acNumber == account[i].accountNumber)
    {
        while (1)
        {
            cin >> ch;
            switch (ch)
            {
            case 1:
                display_balance(account[i]);
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                deposit(account[i], amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                withdraw(account[i], amount);
                break;
            case 4:
                cout << "Thank you for using our services" << endl;
                break;
            default:
                cout << "Invalid choice";
                break;
            }
            if (ch==4)
            {
                break;
            }
        }
    }
    else
    {
        cout << "Invalid account number or account holder name" << endl;
    }
    return 0;
}
