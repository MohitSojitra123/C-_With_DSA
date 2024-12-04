#include<iostream>
using namespace std;


void swape_value(int *a,int *b){
    
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main(){

int a=10,b=20;

swape_value(&a,&b);

cout<<"A Value..."<<a<<endl;
cout<<"B Value..."<<b<<endl;



}