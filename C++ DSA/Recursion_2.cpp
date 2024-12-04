#include<iostream>
using namespace std;


void print_data(int x,int n){
    if(x>n) {
        return;
    }
    cout<<x<<endl;
    print_data(x+1,n);
}


int main(){

    int user;
    cout<<"Enter Any Number..."<<endl;
    cin>>user;

    print_data(1,user);

}
