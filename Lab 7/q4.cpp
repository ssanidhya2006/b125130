#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNo;
    float balance;

public:
    BankAccount(int a, float b)
    {
        accountNo = a;
        balance = b;
    }
};

class SavingsAccount : public BankAccount
{
    float interest;

public:
    SavingsAccount(int a, float b, float i)
        : BankAccount(a, b)
    {
        interest = i;
    }

    void display()
    {
        float newBalance = balance + balance * interest / 100;

        cout << "Savings Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Updated Balance: " << newBalance << endl;
    }
};

class CurrentAccount : public BankAccount
{
    float minimumBalance;
    float charge;

public:
    CurrentAccount(int a, float b, float m, float c)
        : BankAccount(a, b)
    {
        minimumBalance = m;
        charge = c;
    }

    void display()
    {
        if (balance < minimumBalance)
            balance = balance - charge;

        cout << "Current Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount s(101, 10000, 5);
    CurrentAccount c(102, 4000, 5000, 200);

    s.display();

    cout << endl;

    c.display();

    return 0;
}