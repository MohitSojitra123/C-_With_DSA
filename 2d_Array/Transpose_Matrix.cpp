#include<iostream>
using namespace std;

// Q8: Transpose of a Matrix**
// A user enters a 3x3 matrix. Write the steps to find the transpose of the matrix (switch rows and
// columns) and display the result.
// **Example Input:**
// ```
// 1 2 3
// 4 5 6
// 7 8 9
// ```
// **Expected Output:**
// ```
// 1 4 7
// 2 5 8
// 3 6 9

int main(){

int row,col;
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

// Frist Method 

//  for(int j=0; j<col; j++){
// for(int i=0; i<row; i++){
//         cout<<array[i][j]<<" ";
//     }
//     cout<<endl;
// }

// Second Method 

for(int i=0; i<row; i++){
 for(int j=0; j<col; j++){
        cout<<array[j][i]<<" ";
    }
    cout<<endl;
}
}