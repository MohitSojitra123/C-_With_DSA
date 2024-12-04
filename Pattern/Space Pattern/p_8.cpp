#include<iostream>
using namespace std;

// Enter Row Number...12
//                          *

//                        * * *

//                      * * * * *

//                    * * * * * * *

//                  * * * * * * * * *

//                * * * * * * * * * * *

//              * * * * * * * * * * * * *

//            * * * * * * * * * * * * * * *

//          * * * * * * * * * * * * * * * * *
       
//        * * * * * * * * * * * * * * * * * * *
     
//      * * * * * * * * * * * * * * * * * * * * *
   
//    * * * * * * * * * * * * * * * * * * * * * * *

int main(){
int user;

cout<<"Enter Row Number...";
cin>>user;

int user2=user*2;

for(int row=1; row<=user2; row++){

    for(int space=user2; space>=row; space--){
        cout<<" ";
     }  

    for(int col=1; col<=row; col++){
        if(row%2!=0){
            cout<<" *";
        }else{
            break;
        }
    }
    cout<<endl;
}
}
