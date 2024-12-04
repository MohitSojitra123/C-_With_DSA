#include<iostream>
using namespace std;

// 6 5 4 3 2 1 
// - 6 5 4 3 2 
// - - 6 5 4 3 
// - - - 6 5 4 
// - - - - 6 5 
// - - - - - 6

int main(){

int user;
cout<<"Enter Any Number.."<<endl;
cin>>user;


for(int i=1; i<=user; i++){
    for(int space=i; space>1; space--){
      cout<<"-";
    }
    for(int j=user; j>=i; j--){
      cout<<j;
    }
    cout<<endl;
}

}