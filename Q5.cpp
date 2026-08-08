#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;       // Hidden data

public:
    void setBalance(int b)
    {
        balance = b;
    }

    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;       // Object

    account.setBalance(5000);

    account.deposit(2000);

    account.withdraw(1000);

    account.displayBalance();

    return 0;
}
