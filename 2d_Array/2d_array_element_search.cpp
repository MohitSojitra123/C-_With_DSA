#include<iostream>
using namespace std;


bool ispresten(int** arr , int traget , int row ,int col){
    
     for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
       if(arr[i][j]==traget){
          cout << "The element is present at: " << i << " " << j;
          return 1;
       }
    }
}
     return 0;

}


int main(){

int row, col; cin >> row >> col;
int** arr = new int*[row];
for (int i = 0 ; i < row; i++) {
    arr[i] = new int[col];
}
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<"Enter arr Element : "<<" Row " << i <<" Col " << j<<endl;
        cin>>arr[i][j];
    }
}

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

int search_element;
cout<<"Enter To Search Elememnt..."<<endl;
cin>>search_element;

if(ispresten(arr,search_element,row,col)){
  cout<<"Element Is Present...";
}else{
    cout<<"Element Is Not Present";
}

}