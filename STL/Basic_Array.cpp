#include<iostream>
#include<array>
using namespace std;

int main(){

  array<int,4> a={10,20,30,40};

  cout<<"Arrray Size..."<<a.size()<<endl;

//   Print Array Element...

  
  for(int i=0; i<a.size(); i++){
    cout<<a[i]<<endl;
  }

  cout<<"Return Element..."<<a.at(1)<<endl;
  cout<<"Empty Or Not..."<<a.empty()<<endl;

  cout<<"Fornt Element..."<<a.front()<<endl;
  cout<<"Back Element..."<<a.back()<<endl;

}