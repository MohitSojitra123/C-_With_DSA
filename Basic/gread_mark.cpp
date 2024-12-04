#include<iostream>
using namespace std;

int main(){
    int g;
    cout<<"Enter Marks...";
    cin>>g;

    if(g<=100 && g>=90){
       cout<<"A";
    }else if(g<90 && g>=80){
      cout<<"B";
    }else if(g<80 && g>=60){
     cout<<"C";
    }else if(g<60 && g>=50){
     cout<<"D";
    }else if(g<50 && g>=0){
     cout<<"Fail";
    }
}