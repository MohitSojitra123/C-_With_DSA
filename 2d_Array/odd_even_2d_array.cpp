#include<iostream>
using namespace std;

// 4. **Q4: Counting Even and Odd Elements in a 2D Array**
// You are given a 3x3 matrix with random numbers. Write the steps to count how many even
// and odd numbers exist in the matrix.
// **Example Input:**
// ```
// 12 23 34
// 45 56 67
// 78 89 90
// ```
// **Expected Output:**
// Even numbers count: 5
// Odd numbers count: 4

int main(){
    
    int row_size,col_size;

    cout<<"Enter Row Size..."<<endl;
    cin>>row_size;
    cout<<"Enter Col Size..."<<endl;
    cin>>col_size;

    int array[row_size][col_size];

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            cout<<"Enter Array Element => "<<endl;
            cin>>array[i][j];
        }
    }

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            if(array[i][j]%2==0){
                  cout<<"Even => "<<array[i][j]<<endl;
            }else{
                 cout<<"Odd => "<<array[i][j]<<endl;
            }
        }
    }

}