#include<iostream>
using namespace std;

// A
// B A
// C B A
// D C B A
// E D C B A

int main(){

    for(char row=65; row<=69; row++){
        for(char col=row; col>=65; col--){
            cout<<col<<" ";
        }
           cout<<endl;
    }

}