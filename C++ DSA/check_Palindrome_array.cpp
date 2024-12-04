#include<iostream>
using namespace std;

int main(){

   int size;

    cout<<"Enter Arrray Size..."<<endl;
    cin>>size;

    int array[size],arr_size=size-1,a=0,count=0;


    for(int i=0; i<size; i++){
        cout<<"Enter Array Size : index ==> "<<i;
        cin>>array[i];
    } 

    for(int i=0; i<size; i++){
       cout<<array[i]<<" ";
    }      

    for(int i=0; i<size; i++){

        if(a<arr_size){
            
            if(array[a]==array[arr_size]){
            a++;
            arr_size--;
            }else{
                count++;
            }
        }

    }

    if(count>0){
      cout<<"Array Is Not Palindrome...";
    }else{
      cout<<"Array Is Palindrome...";
    }
   
    

}