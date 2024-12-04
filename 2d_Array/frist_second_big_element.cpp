#include<iostream>
using namespace std;

int main(){
    
    int row,col;
    cout<<"Enter Row Size..."<<endl;
    cin>>row;
    cout<<"Enter Col Size..."<<endl;
    cin>>col;

    int array[row][col];
    int max=1,max2=1;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter Array Element  i "<< i <<"   j "<< j << "  :  ";
            cin>>array[i][j]; 
        }
    }

      for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(array[i][j]>max){
                       max=array[i][j];
            }
        }
    }

 for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(array[i][j]!=max){
                   if(array[i][j]>max2){
                        max2=array[i][j];
                   }   
            }
        }
    }

    


  cout<<"Frist Great Number Is..."<<max<<endl;
  cout<<"Frist Great Number Is..."<<max2<<endl;


}
