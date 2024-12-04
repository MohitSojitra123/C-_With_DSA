#include<iostream>
using namespace std;

int main(){
    int b=1000;

    int &a=b;
    a+=1;
    cout<<"a..."<<a<<endl;
    cout<<"b..."<<b<<endl;
}