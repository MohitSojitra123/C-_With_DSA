#include<iostream>
using namespace std;

int main(){

int a,b;
char ch;

cout<<"Enter Value Of a and b...";
cin>>a>>b;

cout<<"Enter Choice....";
cin>>ch;

if(ch=='+'){
  cout<<a+b;
}else if (ch=='-')
{
 cout<<a-b;
}else if(ch=='*'){
  cout<<a*b;
}else if(ch=='/'){
   cout<<a/b;
}



}