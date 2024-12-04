#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter Value Of a..."<<endl;
    cin>>a;
    cout<<"Enter Value Of b..."<<endl;
    cin>>b;
    cout<<"Enter Value Of c..."<<endl;
    cin>>c;

    if(a>b){
        if(a>c){
           cout<<"a Is Big...";
        }else{
          cout<<"c Is Big...";
        }
    }else{
        if(b>c){
            cout<<"b is big...";
        }else{
            cout<<"c is big...";
        }
    }
}