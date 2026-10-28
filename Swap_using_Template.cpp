#include <iostream>
using namespace std;

template < class T >
 void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
    // cout<<"After swapping: "<<a<<" "<<b<<endl;
}

int main() {
    int a = 5, b = 10;
    cout<<"Before swapping "<<a<<" "<<b<<endl;
    Swap<int>(a, b);
    cout<<"After swapping: "<<a<<" "<<b<<endl;

    double x = 5.5, y = 10.5;
    cout<<"Before swapping "<<x<<" "<<y<<endl;
    Swap<double>(x, y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;

    char c1 = 'A', c2 = 'B';
    cout<<"Before swapping "<<c1<<" "<<c2<<endl;
    Swap<char>(c1, c2);
    cout<<"After swapping: "<<c1<<" "<<c2<<endl;

    return 0;
}
