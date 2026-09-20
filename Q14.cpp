#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int imag;
public:
    Complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    Complex operator +(Complex C){
        Complex temp(0,0);
        temp.real=real+C.real;
        temp.imag=imag+C.imag;
        return temp;
    }
    Complex operator -(Complex C){
        Complex temp(0,0);
        temp.real=real-C.real;
        temp.imag=imag-C.imag;
        return temp;
    }
    void operator ==(Complex C){
        if(real==C.real && imag==C.imag){
            cout<<"complex numbers are equal";
        }
        else{
            cout<<"Complex numbers are not equal";
        }
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    Complex C1(5,8);
    Complex C2(4,3);
    Complex C3=C1+C2;
    Complex C4=C1-C2;
    C3.display();
    C4.display();
    C1==C2;
    return 0;
}
