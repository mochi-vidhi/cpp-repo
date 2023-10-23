// Enter car detailes:models,name buying time,and date,price
#include<iostream>
#include<ctime> //used in cpp library
using namespace std;
class Car{
   public:
   float price;
   string name,model;
   time_t tm;
   void get_car(){
      cout<<"Enter car name:";
      cin>>name;
      cout<<"Enter car model:";
      cin>>model;
      cout<<"Enter price of car:";
      cin>>price;
   }
   void show_car(){
      cout<<"Car name : "<<name<<endl;
      cout<<"Car models:"<<model<<endl;
      cout<<"price of car:"<<price<<endl;
      time(&tm);
      cout<<"Buying time:"<<ctime(&tm);
   }
};
int main(){
   Car c;
   c.get_car();
   c.show_car();
}