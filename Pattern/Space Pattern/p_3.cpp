#include<iostream>
using namespace std;

// 0 1 0 1 0 1 0 1 0 1
// - 1 0 1 0 1 0 1 0 1
// - - 0 1 0 1 0 1 0 1
// - - - 1 0 1 0 1 0 1
// - - - - 0 1 0 1 0 1
// - - - - - 1 0 1 0 1
// - - - - - - 0 1 0 1
// - - - - - - - 1 0 1
// - - - - - - - - 0 1
// - - - - - - - - - 1

int main(){ 
      int user;

        cout<<"Enter Rows Value...";
        cin>>user;

        for(int row=user; row>1; row--){

           for(int space=row; space<user; space++){
                cout<<"- ";
           }

            for(int col=row; col>1; col--){
                if(col%2==0){
                    printf("0 ");
                }else{
                    printf("1 ");
                }
            }
            cout<<endl;
  
        }

}