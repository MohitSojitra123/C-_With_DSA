#include<iostream>
using namespace std;

int main(){

int marks[]={10,20,30,40,50};

int* p= marks;

cout<<*p<<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;

printf("----------------------------\n");

for(int i=0; i<=4; i++){
    cout<<*(p+i)<<endl;
}

printf("----------------------------\n");

cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

}