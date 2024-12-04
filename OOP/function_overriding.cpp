#include<iostream>
using namespace std;

class A1{

public:
void person(){
    cout<<"Good Morning..."<<endl;
}

};

class A2:public A1{
public:    
void person(){
    cout<<"Good Night..."<<endl;
}
};

int main(){

A2 obj1;
obj1.person();
obj1.A1::person();

}