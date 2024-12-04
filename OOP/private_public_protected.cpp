#include<iostream>
using namespace std;

class One{

  public:
  int a=10;
  protected:
  int b=20;
  private:
  int c=30;

};

int main(){

One O1;

cout<<"Public : "<<O1.a<<endl;
// cout<<"Protected : "<<O1.b<<endl;
// cout<<"Private : "<<O1.c<<endl;

}