#include<iostream>
using namespace std;


class fun_overloading{

public:
 void sum(int a,int b){
    cout<<"a and b sum is..."<<a+b<<endl;
 }

 void sum(int a,int b,int c){
   cout<<"a , b and c sum is..."<<a+b+c<<endl;
 }

};


int main(){

fun_overloading f1;
f1.sum(10,20);
f1.sum(10,20,30);

}