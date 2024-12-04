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
        cout<<"Enter Array Element...."<<endl;
        cin>>array[i][j];
    }
}

cout<<endl;

for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

cout<<endl;
cout<<"Roted 180 Degree..."<<endl;
cout<<endl;

for(int i=row_size-1; i>=0; i--){
    for(int j=col_size-1; j>=0; j--){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

}