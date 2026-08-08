#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:

    // Function to assign initial values
    void initialize()
    {
        cout << "Enter depositor name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type: ";
        cin >> accountType;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    // Function to deposit amount
    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully." << endl;
    }

    // Function to withdraw amount
    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    // Function to display name and balance
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.initialize();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
