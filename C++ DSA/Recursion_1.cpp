#include<iostream>
using namespace std;

void print_n_number(int number){
    
    static int i=1;

    if(i<=number){
        cout<<i<<endl;
        i++;
        print_n_number(number);
    }

}

int main(){

int user;

cout<<"Enter Any Number...."<<endl;
cin>>user;


print_n_number(user);


}