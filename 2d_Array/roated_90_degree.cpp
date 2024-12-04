#include<iostream>
using namespace std;

// 3. **Q3: Rotating a 2D Array 90 Degrees**
// A user inputs a 3x3 matrix. Write the steps to rotate the matrix 90 degrees clockwise and
// display the output.
// **Example Input:**
// ```
// 1 2 3
// 4 5 6
// 7 8 9
// ```
// **Expected Output (after rotation):**
// ```
// 7 4 1
// 8 5 2
// 9 6 3

int main(){

   int row_size,col_size;

    cout<<"Enter Row Size..."<<endl;
    cin>>row_size;
    cout<<"Enter Col Size..."<<endl;
    cin>>col_size;

  int array[row_size][col_size];

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            cout<<"Enter Array Element...."<<endl;
            cin>>array[i][j];
        }
    }
    
    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
           cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    
    cout<<endl;
    cout<<"Roted In (90 Degree) :"<<endl;
    cout<<endl;


    for(int i=0; i<row_size; i++){
        for(int j=col_size-1; j>=0; j--){
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }

}