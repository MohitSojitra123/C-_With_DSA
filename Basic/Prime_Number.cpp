#include<iostream>
using namespace std;

int main(){

   int user,count=0;
   cout<<"Enter Any Number To Check Number Is Prime Or Not..."<<endl;
   cin>>user;



   for(int i=1; i<=user; i++){
       if(user%i==0){
          count++;
       }
   }

     if(count==2){
        cout<<"Number Is Prime...";
     }else{
        cout<<"Number Is Not Prime...";  
     }

}
