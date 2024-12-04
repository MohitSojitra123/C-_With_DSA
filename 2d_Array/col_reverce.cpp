#include<iostream>
using namespace std;

int main(){
    
int r,c;
cout<<"Enter Row Size..."<<endl;
cin>>r;
cout<<"Enter Col Size..."<<endl;
cin>>c;

int array[r][c];

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<"Enter Array Element..."<<endl;
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
    for(int j=c-1; j>=0; j--){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}


}