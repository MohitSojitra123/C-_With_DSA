#include<iostream>
using namespace std;

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 - - 4 3 2 1
// 1 2 3 - - - - 3 2 1
// 1 2 - - - - - - 2 1
// 1 - - - - - - - - 1

int main(){


int user;
cout<<"Enter Pattern Size..."<<endl;
cin>>user;

for(int i=user; i>=1; i--){
    for(int j=1; j<=i; j++){
        cout<<j<<" ";
    }
    for(int space=i; space<user; space++){
        cout<<"- ";
    }

    for(int space=i; space<user; space++){
        cout<<"- ";
    }
    for(int j=i; j>=1; j--){
        cout<<j<<" ";
    }
    cout<<endl;
}





}