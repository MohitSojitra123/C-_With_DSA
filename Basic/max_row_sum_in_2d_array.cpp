#include<iostream>
using namespace std;



int main(){


int r,c;

cout<<"Enter Row Array Size..."<<endl;
cin>>r;
cout<<"Enter Col Array Size..."<<endl;
cin>>c;

int array[r][c];

cout<<"---------------------------"<<endl;


for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<"Enter Array Element"<<endl;
        cin>>array[i][j];
    }
}
cout<<"---------------------------"<<endl;

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"---------------------------"<<endl;

int sum=0,max=1,max_row=0;
for(int i=0; i<r; i++){
    sum=0;
    for(int j=0; j<c; j++){
        sum+=array[i][j];
    }

    if(sum>max){
        max=sum;
        max_row=i;
    }
}


cout<<"Largest Row Sum Is..."<<max<<endl<<"Largest Row Index Is..."<<max_row;

}