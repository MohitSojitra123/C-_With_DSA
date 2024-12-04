#include<iostream>
using namespace std;

int main(){
    int row,col,sum=0;

     cout<<"Enter Row Size..."<<endl;
     cin>>row;
     cout<<"Enter Col Size..."<<endl;
     cin>>col;

    cout<<"--------------------------"<<endl;

    int array1[row][col],array2[row][col],sum_array[row][col];

    char opertor;
    cout<<"Enter Operator To Perform Operation....(+,-,/,*,%)"<<endl;
    cin>>opertor;


        cout<<"-------------------------"<<endl;
        cout<<"Array 1 Element...."<<endl;
        cout<<"-------------------------"<<endl;



    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           cout<<"Enter Array1 Element..."<<" Row : "<<i<<" Column : "<<j<<endl;
           cin>>array1[i][j];
        }
        cout<<"-------------------------"<<endl;
        cout<<endl;
    }


        cout<<"-------------------------"<<endl;
        cout<<"Array 2 Element...."<<endl;
        cout<<"-------------------------"<<endl;


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           cout<<"Enter Array2 Element..."<<" Row : "<<i<<" Column : "<<j<<endl;
           cin>>array2[i][j];
        }
        cout<<"-------------------------"<<endl;
        cout<<endl;
    }



        cout<<"-------------------------"<<endl;
        cout<<"Array 1...."<<endl;
        cout<<"-------------------------"<<endl;

     
        for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
      }

        cout<<"-------------------------"<<endl;
        cout<<"Array 2...."<<endl;
        cout<<"-------------------------"<<endl;

         for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array2[i][j]<<" ";
        }
        cout<<endl;
      }

        cout<<"-------------------------"<<endl;
        cout<<"Sum Of 2d Array...."<<endl;
        cout<<"-------------------------"<<endl;





     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

           switch(opertor){
                 case '+':
                 sum+=array1[i][j]+array2[i][j];   
                 cout<<sum<<" ";
                 sum=0;
                 break;
                 case '-':
                 sum+=array1[i][j]-array2[i][j];   
                 cout<<sum<<" ";
                 sum=0;
                 break;
                 case '*':
                 sum+=array1[i][j]*array2[i][j];   
                 cout<<sum<<" ";
                 sum=0;
                 break;
                 case '/':
                 sum+=array1[i][j]/array2[i][j];   
                 cout<<sum<<" ";
                 sum=0;
                 break;
                 case '%':
                 sum+=array1[i][j]%array2[i][j];   
                 cout<<sum<<" ";
                 sum=0;
                 break;
                 default:
                 cout<<"Wrong Option";
           }

           
        }
        cout<<endl;
    }





}