#include<iostream>
using namespace std;

int main(){

int row_size,col_size;

cout<<"Enter Row Size..."<<endl;
cin>>row_size;
cout<<"Enter Col Size..."<<endl;
cin>>col_size;

string array[row_size][col_size];

for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
      cout<<"Enter Arrat Element array["<<i<<"]["<<j<<"]"<<endl;
      cin>>array[i][j];        
    }
}

for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
      cout<<array[i][j]<<"   ";
    }
    cout<<endl;
}

}