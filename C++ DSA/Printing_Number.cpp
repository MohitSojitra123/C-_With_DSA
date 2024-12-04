#include<iostream>
using namespace std;

int main(){

int num;
cout<<"Enter Any Number To Print String..."<<endl;
cin>>num;

int last_num=0,rev_num=0;

while (num!=0)
{
    last_num=num%10;
    rev_num=(rev_num*10)+last_num;
    num=num/10;
}
 
num=rev_num;

while(num>0){
    switch(num%10){
        case 1:
        cout<<" One ";
        break;
        case 2:
        cout<<" Two ";
        break;
        case 3:
        cout<<" Three ";
        break;
        case 4:
        cout<<" Four ";
        break;
        case 5:
        cout<<" Five ";
        break;
        case 6:
        cout<<" Six ";
        break;
        case 7:
        cout<<" Seven ";
        break;
        case 8:
        cout<<" Eight ";
        break;
        case 9:
        cout<<" Nine ";
        break;
        case 0:
        cout<<" Zero ";
        break;
    }
    num=num/10;
}


}