#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter Your Name..."<<endl;
    cin>>name;

    for(int i=name.length()-1; i>=0; i--){
          cout<<name[i];
    }
}