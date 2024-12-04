#include<iostream>
using namespace std;

class A{
    public:
    A(){
     cout<<"Simple Constructure...."<<endl;
    }

    A(int a,int b){
        cout<<"A and b Sum Is..."<<a+b<<endl;
    }
};


int main(){

A obj=A();

A obj1(10,20);

}