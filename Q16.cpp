#include <iostream>
using namespace std;

class overloading {
        int n;   
public:
    overloading(int val=0){
            n=val;
    }

    friend overloading operator-(overloading &obj);
    friend overloading operator++(overloading &obj);
    friend overloading operator++(overloading &obj,int dummy);
    friend overloading operator--(overloading &obj);
    friend overloading operator--(overloading &obj,int dummy);

    void display(){
        cout<<"Value of n is: "<<n<<endl;
    }
};

overloading operator-(overloading &obj){
    obj.n = -obj.n;
    return obj;
}

overloading operator++(overloading &obj){
    obj.n++;
    return obj;
}

overloading operator++(overloading &obj,int dummy){
    overloading temp = obj;
    obj.n++;
    return temp;
}

overloading operator--(overloading&obj){
    obj.n--;
    return obj;
}

overloading operator--(overloading&obj,int dummy){
    overloading temp = obj;
    obj.n--;
    return temp;
}

int main(){
    overloading obj(10);
    obj.display();
    obj = -obj;
    obj.display();
    obj = ++obj;
    obj.display();
    obj = obj++;
    obj.display();  
    obj = --obj;
    obj.display(); 
    obj = obj--;
    obj.display();
    return 0;
}
