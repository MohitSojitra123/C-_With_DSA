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

    for(int i=0; i<row; i++){
  for(int j=0; j<col; j++){
          cout<<array[j][i]<<" ";  
    }
    cout<<endl;
  }
   


}