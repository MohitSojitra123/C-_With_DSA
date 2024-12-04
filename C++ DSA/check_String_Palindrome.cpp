#include<iostream>
using namespace std;

int main(){

   string str,check_str;
   cout<<"Enter Any String..."<<endl;
   cin>>str;

   int str_len=str.length()-1;

   for(int i=str_len; i>=0; i--){
      check_str+=str[i];
   }


       str==check_str?cout<<"String Is Palindrome...":cout<<"String Is Not Palindrome...";
       
}