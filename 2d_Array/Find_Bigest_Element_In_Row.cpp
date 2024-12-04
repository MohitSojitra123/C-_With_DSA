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

int r,c;

cout<<"Enter Row Size..."<<endl;
cin>>r;
cout<<"Enter Col Size..."<<endl;
cin>>c;

int array[r][c];

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<"Enter Array Element : i "<< i << " j "<< j << "  : ";
        cin>>array[i][j];
    }
}

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
       cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

for(int i=0; i<r; i++){
    int max=0;
    for(int j=0; j<c; j++){
        if(array[i][j]>max){
            max=array[i][j];
        }else{
            continue;
        }
    }
        cout<<"Row Number Is..."<<i<<" Max Variable Is..."<<max<<endl;
}


}