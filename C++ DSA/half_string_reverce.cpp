#include<iostream>
using namespace std;

int main(){


 string name;
 cout<<"Enter Your Name To Reverce String..."<<endl;
 cin>>name;


  int i=0; 
  int j=(name.length()/2)-1;

   
  while(i<j)
  {
    char temp=name[i];
    name[i]=name[j];
    name[j]=temp;
     i++;
     j--;
  }
   
   cout<<"Half Name Reverce..."<<name;
   

}