#include<iostream>
using namespace std;

int sum_all(int n){
  if(n==1)return ;
  return n+sum_all(n-1);

}

int main(){

  int user;

  cout<<"Enter Any NUmber...."<<endl;
  cin>>user;

  cout<<sum_all(user); 




}