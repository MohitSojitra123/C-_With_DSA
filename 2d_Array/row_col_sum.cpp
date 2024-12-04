#include<iostream>
using namespace std;

int main(){

   int r,c,user,operation,sum=0;
   cout<<"Enter Array row Size..."<<endl;
   cin>>r;
   cout<<"Enter Array Column Size..."<<endl;
   cin>>c;


   int array[r][c];

   for(int row=0; row<r; row++){
      for(int col=0; col<c; col++){
        cout<<"Enter Array Element...."<<" row "<<row<<" Col "<<col<<endl;
        cin>>array[row][col];
      }
   }

   cout<<"--------------------------"<<endl;

   for(int row=0; row<r; row++){
    for(int col=0; col<c; col++){
        cout<<array[row][col];
    }
     cout<<endl;
   }
 
   cout<<"--------------------------"<<endl;
   cout<<"Enter Perform Operation Row And Column....(row-1:column-2)"<<endl;
   cin>>user;
   cout<<"--------------------------"<<endl;

   if(r==c){

      switch(user){
         case 1:
          cout<<"You Are Enter Row Operation..."<<endl;
          cout<<"Enter Row Number To Perform Operation..."<<endl;
          cin>>operation;

         for(int row=operation; row<=operation; row++){
            for(int col=0; col<c; col++){
                sum+=array[row][col];
            }
         } 
         cout<<"Sum Of Row Number..."<<operation<<" Sum Is..."<<sum;
          break;
          case 2:
          cout<<"You Are Enter Column Operation..."<<endl;
          cout<<"Enter Column Number To Perform Operation"<<endl;
          cin>>operation;

          for(int col=operation; col<=operation; col++){
            for(int row=0; row<r; row++){
                sum+=array[row][col];
            }
          }
         cout<<"Sum Of Column  Number..."<<operation<<" Sum Is..."<<sum;
 
          break;
      }

   }

}