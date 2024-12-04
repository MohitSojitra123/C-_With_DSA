#include<iostream>
using namespace std;

int main(){
 
    int r,c,user_c,user_r,sum=0;
    cout<<"Enter Row Size..."<<endl;
    cin>>r;
    cout<<"Enter Col Size...."<<endl;
    cin>>c;

   int array[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"Enter Array Element i "<< i <<" j "<< j <<" : ";
            cin>>array[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter Row To Start Sum..."<<endl;
    cin>>user_r;
    cout<<"Enter Col To Start Sum..."<<endl;
    cin>>user_c;

    for(int i=user_r; i<r; i++){
        for(int j=user_c; j<c; j++){
            sum+=array[i][j];
        }
    }

    cout<<"Sum..."<<sum;

    

}