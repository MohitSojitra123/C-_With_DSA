#include<iostream>
using namespace std;

class A1{
    public:
    void sum();
};

void A1::sum(){
    int a,b;
    cout<<"Enter Value Of A..."<<endl;
    cin>>a;
    cout<<"Enter Value Of B..."<<endl;
    cin>>b;
    cout<<"a and b..."<<a+b;
}

int main(){

A1 obj1;
obj1.sum();

}