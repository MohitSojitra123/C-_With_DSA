#include<iostream>
using namespace std;

int main(){
    
    int array_row,array_col,find_element;

    cout<<"Enter Array Row Size..."<<endl;
    cin>>array_row;
    cout<<"Enter Array Col Size..."<<endl;
    cin>>array_col;

   int array[array_row][array_col];

    for(int i=0; i<array_row; i++){
        for(int j=0; j<array_col; j++){
             cout<<"Enter Array Element Row ==> "<< i <<" col ==> "<< j <<"  "<<endl;
             cin>>array[i][j];
        }
    }


    cout<<"Enter Array Element To Find..."<<endl;
    cin>>find_element;

    for(int i=0; i<array_row; i++){
        for(int j=0; j<array_col; j++){
            if(array[i][j]==find_element){
               cout<<"Element Is Present... "<<find_element<<"  Index Number Is array["<< i  <<"]["<<j<<"] "<<endl;
            }
        }
    }
}