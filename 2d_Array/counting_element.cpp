#include<iostream>
using namespace std;

// 7. **Q7: Counting Zeros in a 2D Array**
// Write a process where the user inputs a 4x4 matrix. Count how many zero elements exist in
// the matrix and display the result.
// **Example Input:**
// ```
// 1 0 3 4
// 0 5 0 7
// 8 0 0 2
// 3 9 1 0
// ```
// **Expected Output:**
// Number of zeros: 6

int main(){


int row,col,count=0;
cout<<"Enter Array Row Size..."<<endl;
cin>>row;
cout<<"Enter Array Col Size..."<<endl;
cin>>col;


int array[row][col];

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<"Enter Array Element : i "<< i <<"  j "<< j << " :  ";
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
       if(array[i][j]==0){
        count++;
       }
    }
    cout<<endl;
}


cout<<"Array Total Zero Is...."<<count;



}