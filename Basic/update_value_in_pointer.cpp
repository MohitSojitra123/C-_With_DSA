#include<iostream>
using namespace std;

int update_val(int *a,int *update_value){
     *a=*update_value;
}

int main(){

int a,b;

cout<<"Enter Value Of a..."<<endl;
cin>>a;

int *pa=&a;

cout<<"Enter Update Value"<<endl;
cin>>b;

int *pb=&b;

update_val(pa,pb);

cout<<"Value Of a Is ==> "<<a;


}