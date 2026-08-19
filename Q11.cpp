#include <iostream>
#include <conio.h>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalMoney;
public:
    TollBooth() :
    totalCars(0),
    totalMoney(0.0) {}

    void payingCar() {
        totalCars++;
        totalMoney += 0.50;
        cout<<"Paying car has been counted."<<endl;
        cout<< "Car paid $0.50 toll." << endl;
    }

    void nopayCar() {
        totalCars++;
        cout<<"Non-paying car has been counted."<<endl;
    }
    

    void display() {
        cout << "Total number of cars: " << totalCars << endl;
        cout << "Total amount collected: $" << totalMoney << endl;
    }

}; 

int main() {
    TollBooth booth;
    char Keystroke;

    do {
        cout << "Press 'p' for a paying car." << endl;
        cout << "Press 'n' for a non-paying car." << endl;
        cout << "Press 'q' to quit and display totals." << endl;
        
        //Taking input from user without pressing enter key
        //replacment for cin.get() to avoid pressing enter key or cin>>keystroke to avoid pressing enter key
        Keystroke = _getch();

        switch (Keystroke) {
            case 'p':
                booth.payingCar();
                break;
            case 'n':
                booth.nopayCar();
                break;
            case 'q':
                booth.display();
                break;
            default:
                cout << "Invalid input. Please try again." << endl;
        }
    } while (Keystroke != 'q');

    return 0;
}
