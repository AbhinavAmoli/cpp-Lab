#include <iostream>
using namespace std;

class Number{
    int x;
public:
    Number(int n){
        x = n;
    }
    void operator-(){
        x = -x;
    }
    void operator++(){
        ++x;
    }
    void operator++(int){
        x++;
    }
    void operator--(){
        --x;
    }
    void operator--(int){
        x--;
    }
    void display(){
        cout << x << endl;
    }
};
int main(){
    Number n(10);
    cout<<"Initial value: ";
    n.display();
    -n;
    cout<<"After Unary: ";
    n.display();
    ++n;
    cout<<"After Pre-increment: ";
    n.display();
    n++;
    cout<<"After Post-increment: ";
    n.display();
    --n;
    cout<<"After Pre-decrement: ";
    n.display();
    n--;
    cout<<"After Post-decrement: ";
    n.display();
    return 0;
}
