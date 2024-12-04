#include<iostream>
using namespace std;

class cl1{
  public:
   void show(){
 cout<<"Called Class cl1"<<endl;
   }  
};

class cl2:public cl1{
};

class cl3:public cl1{
};

class cl4:public cl1{
};

int main(){

   cl2 obj1;
   obj1.show();

   cl3 obj2;
   obj2.show();

   cl4 obj3;
   obj3.show();

   return 0;

}