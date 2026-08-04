#include <iostream>
using namespace std;

class BankAccount
{
    int accNo;
    string name;
    float balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful." << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.input();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}