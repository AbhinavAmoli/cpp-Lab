#include <iostream>
using namespace std;

class Hotel
{
private:
    int Rno;
    string Name;
    float Tariff;
    int NOD;

    float CALC()
    {
        float amount = NOD * Tariff;

        if (amount > 10000)
        {
            amount = 1.05 * amount;
        }

        return amount;
    }

public:
    void Checkin()
    {
        cout << "Enter Room Number: ";
        cin >> Rno;

        cout << "Enter Customer Name: ";
        cin >> Name;

        cout << "Enter Tariff per day: ";
        cin >> Tariff;

        cout << "Enter Number of Days: ";
        cin >> NOD;
    }

    void Checkout()
    {
        cout << "\n----- Hotel Bill -----" << endl;
        cout << "Room Number: " << Rno << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff: " << Tariff << endl;
        cout << "Number of Days: " << NOD << endl;
        cout << "Total Amount: " << CALC() << endl;
    }
};

int main()
{
    Hotel h;

    h.Checkin();
    h.Checkout();

    return 0;
}
