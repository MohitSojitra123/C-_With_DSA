#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string num;
    cout<<"Enter Any Number To Swap Frist and Last Digit..."<<endl;
    cin>>num;

   int last,frist,temp;
 

   cout<<num<<endl;
   int last_index=num.length();

   
   temp=num[last_index-1];
   num[last_index-1]=num[0];
   num[0]=temp; 


   cout<<num<<endl;
    
    
   

}