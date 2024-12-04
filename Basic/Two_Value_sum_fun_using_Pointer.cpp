#include<iostream>
using namespace std;

void pointer_sum(int *a,int *b){
    cout<<"a and b sum is..."<<*a+*b;
}

int main(){
int a,b;

cout<<"Enter Value Of a...";
cin>>a;
cout<<"Enter Value Of b...";
cin>>b;

int *pa=&a;
int *pb=&b; 

pointer_sum(pa,pb);




}