#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
     void setData(void){
        cout<<"Enter The Id"<<endl;
        cin>>id;
        count++;
     }

     void getData(void){
        cout<<"The Id Of This Employee Is "<<id<<"This Is Employee Number..."<<count<<endl;
     }

};


int Employee :: count;

int main(){

Employee m,j,h;

m.setData();
m.getData();

j.setData();
j.getData();

h.setData();
h.getData();

}