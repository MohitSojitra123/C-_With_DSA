#include<iostream>
using namespace std;


int a,b;
class cl1{
public:
void get1(){
cout<<"Enter Value Of a...."<<endl;
cin>>a;
cout<<"Enter Value Of b...."<<endl;
cin>>b;
}
};

class cl2{
public:
void sum(){
    cout<<"a and b Sum Is..."<<a+b<<endl;
}
};

class cl3{
public:
void sub(){
    cout<<"a and b Subtraction Is..."<<a-b<<endl;
}
};

class cl4:public cl1,public cl2,public cl3{
public:
void mul(){
    cout<<"a and b Multiplection Is..."<<a*b<<endl;
}
};

int main(){

 cl4 obj1;
  obj1.get1();
  obj1.mul();
  obj1.sub();
  obj1.sum();

}