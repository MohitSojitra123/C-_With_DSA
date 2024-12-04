#include<iostream>
using namespace std;

class A1{

  public:
  int a=10,b=20;
  void sum();
};


void A1 :: sum(){
    cout<<"A and B Sum Is..."<<a+b;
}

int main(){
  
  A1 obj1;
  obj1.sum();

}