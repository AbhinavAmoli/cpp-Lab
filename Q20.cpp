#include<iostream>
using namespace std;

class grandparent{
    public:
    void display(){
            cout<<"Grandparent class function"<<endl;
        }
};

class parent_1 : virtual public grandparent{};
class parent_2 : virtual public grandparent{};

class child : public parent_1, public parent_2{
    public:
    void display(){
        cout<<"Child class function"<<endl;
    }
};

int main(){
    child c;
    c.display();
    return 0;
}
