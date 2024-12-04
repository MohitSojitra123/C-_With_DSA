#include<iostream>
using namespace std;

class c1{

public:
virtual void show()=0;
// virtual void show();
};

class c2:public c1{

public:
void show(){
    cout<<"Show Data"<<endl;
}   
};


int main(){
c2 obj1;
obj1.show();
}