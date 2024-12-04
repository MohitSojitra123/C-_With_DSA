#include<iostream>
using namespace std;

void show(){
  
  int a=10;
  static int b=10;

  cout<<a<<"..."<<b<<endl;

  a++;
  b++;

}

int main(){

  show();
  show();

}