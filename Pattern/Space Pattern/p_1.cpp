#include<iostream>
using namespace std;

// - - - - 1 
// - - - 2 1
// - - 3 2 1
// - 4 3 2 1
// 5 4 3 2 1

int main(){


for(int i=1; i<=5; i++){

    for(int space=5; space>i; space--){
        cout<<"- ";
    }

    for(int j=i; j>=1; j--){
        cout<<j<<" ";
    }
    cout<<endl;
}


// Dynamic

    //  int user;
    //  cout<<"Enter Any Number....";
    //  cin>>user;


    //  for(int row=1; row<=user; row++){

    //       for(int space=user; space>row; space--){
    //         cout<<"- ";
    //       }

    //     for(int col=row; col>=1; col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    //  }

}