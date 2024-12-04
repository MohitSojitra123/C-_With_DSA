#include<iostream>
using namespace std;

int main(){

//    cout<<101%10<<endl;  // // 1
//    cout<<101/10;  // // 10

  int user;
  cout<<"Enter Any Number To Reverce Number...."<<endl;
  cin>>user;

  
  int last_num=0,rev_num=0;

  while (user>0)
  {
      last_num=user%10;
      user=user/10;
      rev_num=rev_num*10+last_num;
  }

  cout<<"Reverse Number Is..."<<rev_num;
  


}