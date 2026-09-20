#include<iostream>
using namespace std;

class A{
    public:
    int count_A = 0;
    int func(int value){
        count_A++;
        return value*2;
    }
};

class B{
    public:
    int count_B = 0;
    int func(int value){
        count_B++;
        return value*3;
    }
};

class C{
    public:
    int countC = 0;
    int func(int value){
        countC++;
        return value*4;
    }
};


class D:public A,public B,public C{
    public:
    int value = 1;

    void update_value(int new_value){
        while(new_value%2==0){
            value = A::func(value);
            new_value /= 2;
        }
        while(new_value%3==0){
            value = B::func(value);
            new_value /= 3;
        }
        while(new_value%5==0){
            value = C::func(value);
            new_value /= 5;
        }
    }
};
