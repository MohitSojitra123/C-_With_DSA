#include<iostream>
using namespace std;


int main(){

int row_size,col_size;

cout<<"Enter Row Size..."<<endl;
cin>>row_size;
cout<<"Enter Col Size..."<<endl;
cin>>col_size;

int array[row_size][col_size];

for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
       cout<<"Enter Array Element array["<<i<<"]["<<j<<"]"<<endl;
       cin>>array[i][j];
    }
}

int search_element;

cout<<"Enter Element To Search In Array...."<<endl;
cin>>search_element;

for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
}


for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
       if(array[i][j]==search_element){
         cout<<"Element Is Present... array["<<i<<"]["<<j<<"]"<<endl;
       }
    }
}



}