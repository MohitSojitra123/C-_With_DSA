#include<iostream>
using namespace std;



int main(){

int row,col;

cout<<"Enter Row Size...";
cin>>row;

cout<<"Enter Col Size...";
cin>>col;

int array[row][col];

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<"Enter Array Element : row ==> "<<row<<"  col ==> "<<col<<" "<<endl;
        cin>>array[i][j];
    }
  }

   for(int i=0; i<row; i++){
     for(int j=0; j<col; j++){
       cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }


  for(int c=0; c<col; c++){
    for(int r=0; r<row; r++){
             cout<<array[r][c]<<" ";
    }
    cout<<endl;
  }

  
//     for(int r=0; r<row; r++){
//   for(int c=0; c<col; c++){
//              cout<<array[c][r]<<" ";
//     }
//     cout<<endl;
//   }



}