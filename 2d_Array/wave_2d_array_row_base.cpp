#include<iostream>
using namespace std;


int main(){

int row_size,col_size;

cout<<"Enter Array Row Size..."<<endl;
cin>>row_size;
cout<<"Entet Array Column Size ..."<<endl;
cin>>col_size;

int array[row_size][col_size];

for(int i=0; i<row_size; i++)
{
for(int j=0; j<col_size; j++){
cout<<"Enter Array Element Index Is ==>  "<<i<<endl;
cin>>array[i][j];
}
}

for(int i=0; i<row_size; i++){
   for(int j=0; j<col_size; j++){
      cout<<array[i][j]<<" ";
   }
   cout<<endl;
}


for(int row=0; row<row_size; row++){

   if(row%2==0 || row==0){
      for(int col=0; col<col_size; col++){
        cout<<array[row][col]<<" ";
      }
   }else{
     for(int col=col_size-1; col>=0; col--){
        cout<<array[row][col]<<" ";
     }
   }

}


}


