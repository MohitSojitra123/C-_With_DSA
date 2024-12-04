#include<iostream>
using namespace std;

int main(){

   
   int a=10;
   int b=30;

   int *pa=&a;
   int *pb=&b;

    int temp=b;
    b=*pa;
    a=temp;

   
   cout<<"Swapping New Value...."<<endl;
   cout<<"a1 Value Is..."<<a<<endl;
   cout<<"b1 Value Is..."<<b<<endl;






}