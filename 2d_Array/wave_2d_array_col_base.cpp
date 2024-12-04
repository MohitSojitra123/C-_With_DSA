#include<iostream>  
using namespace std;

int main(){

   int row_size,col_size;

   cout<<"Enter Array Row Size...";
   cin>>row_size;

   cout<<"Enter Array Col Size...";
   cin>>col_size;

   int array[row_size][col_size];

   for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
        cout<<"Enter Array Element ==> row : "<< i <<"  col :  "<< j <<"  :== "<<endl;
        cin>>array[i][j];
    }
   }


   for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
   }


   for(int i=0; i<col_size; i++){
     
      if(i==0 || i%2==0){
         for(int j=0; j<row_size; j++){
            cout<<array[j][i];
         }
      }else{
         for(int j=row_size-1; j>=0; j--){
          cout<<array[j][i];
         }
      }

   }




}