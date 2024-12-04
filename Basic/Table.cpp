#include<iostream>
using namespace std;

int main(){
    int user;
    cout<<"Enter Any Number...";
    cin>>user;


    for(int i=1; i<=10; i++){
        cout<<user<<"  X  "<< i <<" = "<<user*i<<endl;
    }
}