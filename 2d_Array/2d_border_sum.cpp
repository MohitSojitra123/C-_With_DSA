#include<iostream>
using namespace std;

int main(){

   int r,c;
   
   cout<<"Enter Array Row..."<<endl;
   cin>>r;
   cout<<"Enter Array Col..."<<endl;
   cin>>c;

   int array1[r][c];

   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<"Enter Array Element... : i => "<< i <<" j => "<< j<<"  ==>  ";
        cin>>array1[i][j];
    }
   }

   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<array1[i][j]<<" ";
    }
       cout<<endl;
   }

    int sum=0;

    for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        if((i==0 && j<c) || (i==r-1 && j<c) || ((i>0 && i<r) && j==c-1) || (i>0 && i<r) && j==0){
              sum+=array1[i][j];
            // cout<<array1[i][j]<<endl;
        }
    }

    cout<<"Sum ==> "<<sum;
      
   }

   



}