#include<iostream>
using namespace std;

// 2. **Q2: Maximum Element in Each Row**
// Write steps to input a 2D array of size 5x5 representing student grades. After inputting the
// values, find and display the maximum grade in each row.
// **Example Input:**
// ```
// 45 67 88 92 76
// 55 78 81 89 90
// 70 75 86 91 80
// 60 72 83 84 88
// 50 68 87 82 85
// ```
// **Expected Output:**
// Row 1 max: 92
// Row 2 max: 90
// Row 3 max: 91
// Row 4 max: 88
// Row 5 max: 87


int main(){

int row_size,col_size;

cout<<"Enter Row Size....";
cin>>row_size;
cout<<"Enter Col Size....";
cin>>col_size;

int array[row_size][col_size];

for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
        cout<<"Enter Array Element array["<<i<<"]["<<j<<"]"<<endl;
        cin>>array[i][j];
    }
}

cout<<"The Largest Element In A Row...."<<endl;

int max;

for(int i=0; i<row_size; i++){
    for(int j=0; j<col_size; j++){
      max=array[i][j];
      if(max>array[i][j]){
          max=array[i][j];
      }
    }
    cout<<max<<endl;
}


}