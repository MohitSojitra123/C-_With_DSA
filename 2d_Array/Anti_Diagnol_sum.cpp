#include<iostream>
using namespace std;

int main(){

   int sum=0,r,c;
   cout<<"Enter Row Size..."<<endl;
   cin>>r;
   cout<<"Enter Column Size..."<<endl;
   cin>>c;

   int array[r][c];

   for(int row=0; row<r; row++){
    for(int col=0; col<c; col++){
        cout<<"Enter Array Element..."<<endl;
        cin>>array[row][col];
    }
   }

   for(int row=0; row<r; row++){
    for(int col=0; col<c; col++){
        cout<<array[row][col]<<" ";
    }
      cout<<endl;
   }

   for(int row=0; row<r; row++){
    for(int col=0; col<c; col++){
        cout<<array[row][col]<<" ";
        if(row==col){
            sum+=array[row][col];
        }else{
            continue;
        }
    }
     cout<<endl;
   }


  cout<<"Sum Of AntiDiagnol Is..."<<sum;
   

}