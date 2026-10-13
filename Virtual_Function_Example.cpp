#include<iostream>
using namespace std;

class Base{
    public:
        virtual void display(){
            cout<<"Parent class function\n"<<endl;
        }
};

class Derived: public Base{
    public:
        void display(){
            cout<<"Child class function\n"<<endl;
        }
};

int main(){
    Base *baseptr;
    Derived d;
    baseptr = &d;

    baseptr->display(); // This will call the Derived class function

    return 0;
}
