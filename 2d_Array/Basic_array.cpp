#include<iostream>
using namespace std;

int main(){

int array[]={10,20,30,40,50}; 
 
 int array_size=sizeof(array);
 
array_size=array_size/4;

cout<<"Array Size Is..."<<array_size<<endl;


for(int i=0; i<array_size; i++){
    cout<<array[i]<<endl;
}


}