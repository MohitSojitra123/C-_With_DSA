#include<iostream>
using namespace std;

int main(){

    int a=10;
    int b=20;

    int *pa=&a;
    int *pb=&b;

    cout<<*pa+*pb;

}