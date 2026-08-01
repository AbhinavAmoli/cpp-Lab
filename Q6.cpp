
#include<iostream>
#include<string>
using namespace std;

    class Hotel{
        private:
            int Rno;
            string name;
            float tariff;
            int NOD;
            
            float calc(){
                float amount = NOD * tariff;
                if (amount>10000){
                    amount = 1.05*amount; 
                }
                return amount;
            }
            
       public:
             
            void checkin(){
            	cout<<("Enter Room number : " );
            	cin>> Rno;
            	
            	cin.ignore();
            	
            	cout<<("Enter customer name : ");
            	getline(cin,name);
            	
            	cout<<("Enter tariff per day : ");
            	cin>>tariff;
            	
            	cout<<("Enter number of days : ");
            	cin>>NOD;
            	
            	}
            	
          void checkout(){
          cout<<"Room number : "<<Rno<<endl;
          cout<<"Customer name : "<<name<<endl;
          cout<<"Tariff : "<<tariff<<endl;
          cout<<"Number of days : "<<NOD<<endl;
          cout<<"Amount : "<<calc()<<endl;
          
          }
   };
   
   int main(){
   	Hotel h;
   	
   	h.checkin();
   	h.checkout();
   	
   	return 0;
   }
