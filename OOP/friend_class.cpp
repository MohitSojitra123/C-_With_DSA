#include<iostream>
using namespace std;

class a2;
class a1{
    private:
     int a;

   public:
     void show1(){
        a=10;
     }

     friend void mohit(a1 r1,a2 r2);
};
class a2{
    private:
     int b;

   public:
     void show2(){
        b=50;
     }

     friend void mohit(a1 r1,a2 r2);
};

void mohit(a1 r1,a2 r2){
  
  int c;
  c=r1.a+r2.b;
  cout<<c;

}


int main(){


a1 obj1;
obj1.show1();

a2 obj2;
obj2.show2();

mohit(obj1,obj2);

}