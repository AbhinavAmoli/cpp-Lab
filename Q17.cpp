#include <iostream>
using namespace std;

class Base {
private:
    int privateData;

protected:
    int protectedData;

public:
    int publicData;

    void showBase() {
        privateData = 10;
        protectedData = 20;
        publicData = 30;

        cout << "Base Private: " << privateData << endl;
        cout << "Base Protected: " << protectedData << endl;
        cout << "Base Public: " << publicData << endl;
    }
};

// Public Inheritance
class DerivedPublic : public Base {
public:
    void show() {
        // privateData;      // Not accessible
        protectedData = 20;  // Accessible as protected
        publicData = 30;     // Accessible as public

        cout << "\nPublic Inheritance:" << endl;
        cout << "Protected member: " << protectedData << endl;
        cout << "Public member: " << publicData << endl;
    }
};

// Protected Inheritance
class DerivedProtected : protected Base {
public:
    void show() {
        // privateData;      // Not accessible
        protectedData = 40;  // Accessible as protected
        publicData = 50;     // Becomes protected

        cout << "\nProtected Inheritance:" << endl;
        cout << "Protected member: " << protectedData << endl;
        cout << "Public member: " << publicData << endl;
    }
};

// Private Inheritance
class DerivedPrivate : private Base {
public:
    void show() {
        // privateData;      // Not accessible
        protectedData = 60;  // Accessible as protected
        publicData = 70;     // Becomes private

        cout << "\nPrivate Inheritance:" << endl;
        cout << "Protected member: " << protectedData << endl;
        cout << "Public member: " << publicData << endl;
    }
};

int main() {
    Base b;
    DerivedPublic d1;
    DerivedProtected d2;
    DerivedPrivate d3;

    b.showBase();
    d1.show();
    d2.show();
    d3.show();

    return 0;
}
