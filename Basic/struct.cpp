#include<iostream>
using namespace std;

struct  str
{
   int id;
   float pi;
   string name;
};


int main(){

struct str str1;     

cout<<"Structure Size"<<sizeof(str1)<<endl;
  
str1.id=123;
str1.pi=19.10;
str1.name="meet";


cout<<"Structure ID..."<<str1.id<<endl;  
cout<<"Structure Pi..."<<str1.pi<<endl;  
cout<<"Structure ID..."<<str1.name<<endl;  

}