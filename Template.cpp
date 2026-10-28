#include <iostream>
using namespace std;

template <class T, int size>
// void maximum(T a, T b){
//     if( a > b) {
//         cout<<a<<" is greater"<<endl;
//     }
//     else {
//         cout<<b<<" is greater"<<endl;
//     }
// }

// class calculator {
//     public:

//     T num1;
//     T num2;
//     T result;

//     void input() {
//         cout<<"Enter first number: ";
//         cin>>num1;
//         cout<<"Enter second number: ";
//         cin>>num2;
//     }

//     void add() {
//         result = num1 + num2;
//         cout<<"Addition: "<<result<<endl;
//     }

//     void subtract() {
//         result = num1 - num2;
//         cout<<"Subtraction: "<<result<<endl;
//     }

//     void product() {
//         result = num1 * num2;
//         cout<<"Product: "<<result<<endl;
//     }

//     void divide() {
//         if(num2 == 0) {
//             cout<<"Division by zero is not allowed"<<endl;
//             return;
//         }
//         result = num1 / num2;
//         cout<<"Division: "<<result<<endl;
//     }
// };

class Myarray {
    public:

    T arr[size];

    void fillArray() {
        cout<<"Enter "<<size<<" elements: ";
        for(int i=0; i<size; i++) {
            cin>>arr[i];
        }
    }

    void displayArray() {
        cout<<"Array elements are: ";
        for(int i=0; i<size; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void at_index(int index) {
        if(index < 0 || index >= size) {
            cout<<"Index invalid"<<endl;
            return;
        }
        cout<<"Element at index "<<index<<" is: "<<arr[index]<<endl;
    }
};

int main(){

    // maximum(10,53);
    // calculator <int> c1;
    // c1.input();
    // c1.add();
    // c1.subtract();
    // c1.product();
    // c1.divide();

    Myarray <int, 10> arr1;
    arr1.fillArray();
    arr1.displayArray();
    arr1.at_index(5);

    return 0;
}