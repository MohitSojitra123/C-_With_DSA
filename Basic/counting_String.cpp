#include<iostream>
using namespace std;

int main(){
    
    string name;
    cout<<"Enter Your Name To Count The Number OF Character....";
    cin>>name;

 
   int i=0;

    while (name[i])
    {
        i++;
    }

    cout<<"Number Of Character Is..."<<i;
    

}