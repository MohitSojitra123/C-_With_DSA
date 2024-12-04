#include<iostream>
using namespace std;

int main(){

   int size;
   cout<<"Enter Array Size..."<<endl;
   cin>>size;

   int array[size];

   for(int i=0; i<size; i++){
      cout<<"Enter Array Element..."<<i<<endl;
      cin>>array[i];
   }

   int min=array[0];

   for(int i=0; i<size; i++){
      if(array[i]<min){
         min=array[i]; 
      }else{
         continue;
      }
   } 

   cout<<"Smallest Number Of an Array Is..."<<min;


}