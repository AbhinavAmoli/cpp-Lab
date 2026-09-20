#include<iostream>
using namespace std;

class SavingsAccount{
private:
    double SavingsBalance;
    static double AnnualInterestRate;
public:
    SavingsAccount(double balance){
        SavingsBalance=balance;
    }
    void calculateMonthlyInterest(){
        double monthlyInterest=SavingsBalance*(AnnualInterestRate/12);
        SavingsBalance+=monthlyInterest;
    }
    static void modifyInterestRate(double newRate){
        AnnualInterestRate=newRate;
    }
    void display(){
        cout<<"Balance: Rs"<<SavingsBalance<<endl;
    }
};
double SavingsAccount::AnnualInterestRate=0.0;
int main(){
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout<<"After 4% annual interest rate:"<<endl;
    cout<<"Saver1 ";saver1.display();
    cout<<"Saver2 ";saver2.display();

    SavingsAccount::modifyInterestRate(0.05);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout<<"\nAfter 5% annual interest rate:"<<endl;
    cout<<"Saver1 ";saver1.display();
    cout<<"Saver2 ";saver2.display();
    return 0;
}
