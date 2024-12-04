#include<iostream>
using namespace std;

void print_data(int a){
     if(a==0){
        return ;
     }
     print_data(a-1);
     cout<<a<<endl;
}

int main(){
    int user;
    cout<<"Enter Your Name..."<<endl;
    cin>>user;

    print_data(user);
}

