#include<iostream>
using namespace std;

int main(){
    string name;    
    cout<<"Enter Any String....";
    cin>>name;

   int str_len=name.length()-1,i=0;



   while (i<str_len)
   {
   
     char temp=name[str_len];
     name[str_len]=name[i];
     name[i]=temp;
     i++;
     str_len--;
   }
   

   cout<<"Reverce String...."<<name;

}