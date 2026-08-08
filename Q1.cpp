#include <iostream>
using namespace std;

int main()
{
    string name;
    int units;
    float bill;

    cout << "Enter user name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        bill = units * 0.60;
    }
    else if (units <= 300)
    {
        bill = 100 * 0.60 + (units - 100) * 0.80;
    }
    else
    {
        bill = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
    }

    // Minimum charge
    if (bill < 50)
    {
        bill = 50;
    }

    // Surcharge
    if (bill > 300)
    {
        bill = bill + (bill * 0.15);
    }

    cout << "\nUser Name: " << name << endl;
    cout << "Total Electricity Bill: Rs. " << bill << endl;

    return 0;
}
