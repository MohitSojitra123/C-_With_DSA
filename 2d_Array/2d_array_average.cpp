#include<iostream>
using namespace std;

int main(){

// 2d array Average....

int row,col,row_sum=0,col_sum=0,total_sum=0;
cout<<"Enter Array Row Size...";
cin>>row;
cout<<"Enter Array Column Size...";
cin>>col;
int array[row][col];

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<"Enter Array Element Index Is : "<< i << j;
      cout<<endl;
      cin>>array[i][j];
    }
      cout<<endl;
}

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<array[i][j]<<" ";
    }
       cout<<endl;
}

// Row Average....
int row_array[row],rowsum=0;
int col_array[col], colsum = 0;

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
         rowsum+=array[i][j];
    }
    cout<<endl;
    row_array[i]=rowsum;
    rowsum=0;
}

cout<<"Average  Of Column..."<<endl;
for(int i=0; i<row; i++){
    row_sum+=row_array[i];
}
    cout<<"Row Sum Is..."<<row_sum<<endl<<"Row Avrage Is..."<<row_sum/row<<endl;
    cout<<endl;

// Column Average....

for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
       colsum+=array[j][i];
    }
       col_array[i]=colsum;
       colsum=0;
}

cout<<"Average  Of Column..."<<endl;
for(int i=0; i<col; i++){
    col_sum+=col_array[i];
}
    cout<<"Column Sum Is..."<<col_sum<<endl<<"Col Avrage Is..."<<col_sum/col<<endl;

// Total Ave..

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
         total_sum+=array[i][j];
    }
}

cout<<"Total Sum.."<<total_sum<<endl;
cout<<"Total Average Is..."<<total_sum/(col*row);


}