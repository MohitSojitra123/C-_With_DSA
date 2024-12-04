#include<iostream>
using namespace std;

int sum(int a,int b){
   cout<<"A And B Sum Is..."<<a+b<<endl;
}

int sub(int a,int b){
   cout<<"A And B Subtraction Is..."<<a-b<<endl;
}

int calculator(){
     int a,b;
     cout<<"Enter Value Of A..."<<endl;
     cin>>a;
     cout<<"Enter Value Of B..."<<endl;
     cin>>b;

     sum(a,b);
     sub(a,b);
}

int main(){

calculator();

}