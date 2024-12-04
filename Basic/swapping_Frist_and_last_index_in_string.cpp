#include<iostream>
using namespace std;

int main(){

  string name;

  cout<<"Enter Your Name To Swpping Frist and Last Character...";
  cin>>name;

  int str_len=name.length();

  char temp=name[0];

  name[0]=name[str_len-1];
  name[str_len-1]=temp;

  cout<<"Changing Name..."<<name;

}