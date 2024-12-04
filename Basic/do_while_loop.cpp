#include<iostream>
using namespace std;

int main(){
    int user,i=1;;
    cout<<"Enter Any Number..."<<endl;
    cin>>user;

    
    do{
       if(i%2==0){
        printf("%d \n",i);
       }
       i++;
    }while(i<=user);
}