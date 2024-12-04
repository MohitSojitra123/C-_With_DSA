#include<iostream>
using namespace std;

int update_value(int* x){
    return *x+=10;
}

int main(){
  int a;
  cout<<"Enter Value Of a..."<<endl;
  cin>>a;

  cout<<"Old Value Of a Is..."<<a<<endl;

  int *pa=&a;

  cout<<update_value(pa);
}
