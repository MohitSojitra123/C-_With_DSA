#include<iostream>
using namespace std;

class cl1{

   protected:
     int amount;


    public:
      void set(){
          amount=100000;
      }
};

class cl2:public cl1{

    public:
      int a=10;
      void show(){
         cout<<amount;
      }
};

int main(){

  cl2 obj1;
  obj1.set();
  obj1.show();

}