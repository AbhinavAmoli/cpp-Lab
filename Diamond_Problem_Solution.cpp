#include <iostream>
#include <string>
using namespace std;

class Engine {
public:
    int horsepower;
    string manufacturer;

    void displayEngine() {
        cout << "Horsepower: " << horsepower << endl;
        cout << "Manufacturer: " << manufacturer << endl;
    }
};

class PetrolEngine : virtual public Engine {
public:
    int fuelCapacity;
    double mileage;

    void displayPetrol() {
        cout << "Fuel Capacity: " << fuelCapacity << endl;
        cout << "Mileage: " << mileage << endl;
    }
};

class ElectricEngine : virtual public Engine {
public:
    double batteryCapacity;
    double range;

    void displayElectric() {
        cout << "Battery Capacity: " << batteryCapacity << endl;
        cout << "Range: " << range << endl;
    }
};

class HybridEngine : public PetrolEngine, public ElectricEngine {
public:
    void displayAll() {
        cout << "\n--- Engine Details ---" << endl;
        displayEngine();
        displayPetrol();
        displayElectric();
    }
};

int main() {
    HybridEngine h;

    h.horsepower = 150;
    h.manufacturer = "Toyota";
    h.fuelCapacity = 40;
    h.mileage = 25.5;
    h.batteryCapacity = 1.5;
    h.range = 600;

    h.displayAll();

    return 0;
}
