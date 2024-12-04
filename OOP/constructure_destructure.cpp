#include<iostream>
using namespace std;

class A1{
    public:
    A1(){
        cout<<"Constructure Is Allocated..."<<endl;
    }

    ~A1(){
       cout<<"Constructure Is DeAllocated..."<<endl;
    }
};

int main(){
    
    A1 obj1;


}