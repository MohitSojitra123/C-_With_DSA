#include<iostream>
using namespace std;

int main(){

   int array_len,sum=0,change_index,update_val;

   cout<<"Enter Array Size..."<<endl;
   cin>>array_len;
    
   cout<<"---------------------------"<<endl; 

   int array1[array_len];

   for(int i=0; i<array_len; i++){
     cout<<"Enter Array Element..."<<endl;
     cin>>array1[i];
      sum=sum+array1[i];
   }

   cout<<"---------------------------"<<endl; 
   

   for(int i=0; i<array_len; i++){
     cout<<"array  index"<< i <<" : "<<array1[i]<<endl;
   } 
   cout<<"---------------------------"<<endl; 

   cout<<"Total Sum Of Array Element  Is..."<<sum<<endl;
   cout<<"---------------------------"<<endl; 
   cout<<"Ave.."<<sum/array_len<<endl;
   cout<<"---------------------------"<<endl; 

    
    cout<<"Enter Array Index To Change Array Element..."<<endl;
    cin>>change_index;

    cout<<"Enter Upate Value In Index Number Is...."<<change_index<<endl;
    cin>>update_val;



    array1[change_index]=update_val;

   cout<<"---------------------------"<<endl; 
     cout<<"Value Is Update...."<<endl;
   cout<<"---------------------------"<<endl; 



      for(int i=0; i<array_len; i++){
     cout<<"array  index"<< i <<" : "<<array1[i]<<endl;
   } 

   cout<<"---------------------------"<<endl; 







}