#include<iostream>
using namespace std;

int main(){

  int a=10;
  int* b=&a;

  int** c=&b;

  cout<<"a ==>"<<&a<<endl;
  cout<<"b =>"<<&b<<endl;
  cout<<"b To c =>"<<c<<endl;
   

}