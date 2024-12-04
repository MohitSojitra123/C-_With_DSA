#include<iostream>
using namespace std;

class cl1{

protected:
  int a,b;
public:
void get1(){
    cout<<"Enter Value Of a"<<endl;
    cin>>a;
    cout<<"Enter Value Of b"<<endl;
    cin>>b;
}
void add(){
    cout<<"a and b sum Is..."<<a+b<<endl;
}
};

class cl2:public cl1{
public:    
void sub(){
   cout<<"a and b Subtraction Is.."<<a-b<<endl;
}
};

class cl3:public cl2{
public:    
void mul(){
    cout<<"a and b Multiplecation Is..."<<a*b<<endl;
}
};


int main(){

 
 cl3 obj1;
 obj1.get1();
 obj1.add();
 obj1.sub();
 obj1.mul();


 return 0;
}