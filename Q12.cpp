#include<iostream>
using namespace std;

class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int hours, int minutes,int seconds){
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds;
    }
    void display(){
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
    Time add(Time t1,Time t2){
        Time t3;
        int carry;
        t3.seconds=t1.seconds+t2.seconds;
        carry=t3.seconds/60;
        t3.seconds=t3.seconds%60;
        t3.minutes=t1.minutes+t2.minutes+carry;
        carry=t3.minutes/60;
        t3.minutes=t3.minutes%60;
        t3.hours=t1.hours+t2.hours+carry;
        t3.hours=t3.hours%12;
        return t3;
    }

};
int main(){
    Time t1(5,50,60);
    Time t2(5,20,11);
    Time t3;
    t3=t3.add(t1,t2);
    t3.display();
    return 0;
}
