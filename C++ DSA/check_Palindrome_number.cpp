#include<iostream>
using namespace std;

int main(){
   
    int user,last_number=0,rev_num=0;

    cout<<"Enter Number Check Number Is Palindrome....";
    cin>>user;

   int user1=user;

    while (user>0)
    {
        last_number=user%10;
        user=user/10;
        rev_num=rev_num*10+last_number; 
    }

    user1==rev_num?cout<<"Number Is Palindrome...":cout<<"Number Is Not Palindrome...";
    
}