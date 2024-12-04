#include<iostream>
using namespace std;

int main(){

 int array_size;
 cout<<"Enter Array Size..."<<endl;
 cin>>array_size;

 int array[array_size];

 for(int i=0; i<array_size; i++){
    cout<<"Enter Array Element Index ==> "<<i<<endl;
    cin>>array[i];
 }

 for(int i=0; i<array_size; i++){
    cout<<array[i]<<" ";
 }
 cout<<endl;

 int rev_size=array_size-1,i=0;

 while (i<rev_size)
 {
    int temp=array[i];
    array[i]=array[rev_size];
    array[rev_size]=temp;
    rev_size--;
    i++;
 }

 for(int i=0; i<array_size; i++){
    cout<<array[i]<<" ";
 }
 cout<<endl; 

}