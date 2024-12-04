#include<iostream>
using namespace std;

int main(){
    int star,End,a;
    cout<<"Enter Value Of star"<<endl;
    cin>>a;
   

    End=a%10;
    // cout<<End;

    while(a>=10){
       a=a/10;
    }
   cout<<a+End;
}